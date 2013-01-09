//
//  Meet.cpp
//  Versor
//
//  Created by Pablo Colapinto on 10/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_draw.h"
#include "vsr_tests.h"

#include <iostream>

using namespace vsr;

void circle(GLVApp& app){

    static Point pa = PT(1,0,0);
    static Point pb = PT(0,1,0);
    static Point pc = PT(-1,0,0);
    
    //Grab points (hit 'g' and drag mouse) to define a circle
    app.interface.touch(pa);
    app.interface.touch(pb);
    app.interface.touch(pc);

    DRAW(pa); DRAW(pb); DRAW(pc);
    
    Circle c = pa ^ pb ^ pc;
    
    //The Sphere Surrounding the Circle
    DualSphere dls = Round::sur( c );    
    
    
    //Another Sphere
    static DualSphere dls2 = Ro::dls(2, 0, 0);
    app.interface.touch(dls2);
    DRAW4(dls,1,0,0,.3); DRAW4(dls2,1,0,0,.3);
    
    //The Circle Meet of the two Spheres
    Circle inter = (dls ^ dls2).dual();
    DRAW(inter);
    
    //The Point Pair
    DRAW3( ( (dls ^ dls2) ^ Dlp(0,1,0,0) ).undual(), 0,1,0 );
    
    //The Plane
    DRAW(Dlp(0,1,0,0));
}


void linePoint(GLVApp& app){

    static Dll dll = DLN(0,1,0);
    static Pnt pnt = PT(1,1,0);
    
    app.interface.touch(dll);
    app.interface.touch(pnt);
    DRAW(dll); DRAW3(pnt,1,0,0);
    
    Cir dualMeet = pnt ^ dll;
    DRAW( dualMeet );
    
    Dlp dualPlane = pnt <= dll;
    DRAW(dualPlane);
        
}

void pointOnCircle(GLVApp& app){

    static Cir c = CXY(1); 
    DRAWANDTOUCH(c);
    
    static double rad,w;
    SET app.gui(rad)(w); END
        
    Pnt p1 = Ro::pnt_cir( c, rad * TWOPI);
    DRAW3(p1,1,0,0);
    
    Vec v = Ro::vec( c, rad * TWOPI );
    DRAW(v);
    Pnt p2 = (p1 + v*w).null();
    DRAW(p2);
    Cir c1 = p2 ^ c.dual();
    DRAW(c1);
}

void GLVApp :: onDraw(){
    //linePoint(*this);
    //circle(*this);
    pointOnCircle(*this);
}

int main(int argc, const char * argv[]) {

        cout << argv[0] << endl; 
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);
    		
	Window * win = new Window(500,500,"MEET OPERATIONS",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
