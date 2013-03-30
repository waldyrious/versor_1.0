css: style0.css

VERSOR
===
   
Various Notes (in progress)
---

Points and Lines

`Point` is also `Pnt`  
`Line` is also `Lin`  
`DualLine` is also `Dll`  

	Pnt <= Dll returns the shared DualPlane.  	
		The dot() of the DualPlane is the squared distance betwen point and line.
	
	Pnt ^ Dll returns the Direct Circle about the DualLine through the Point.  
		The Ro::size(Circle,false) returns the squared radius of the Circle.
		
	Pnt ^ Inf <= Dll returns the Dual Plane through the point orthogonal to the Dual Line
		Pnt ^ Inf is a Flat Point, often used for "potentialities", e.g. a flat point is ready-to-be converted . . .
		

DualLines and Lines
	
	Dll <= Dll is a (reversed) scalar dot product.  Zero when Orthogonal. Positive when pointing in opposite directions
	Dll ^ Dll is a Direction Trivector and specfies Relative Chirality.  Is ZERO when they intersect OR are parellel. 
		Increases in Magnitude as closest point gets farther away (except for parallel lines)

Rounds

'Point' is also 'Pnt' is also 'DualSphere' is also 'Dls'
'PointPair' is also 'Par'
'Circle' is also 'Cir'

	Pnt p <= Cir k returns the Tangent to Circle k at Point p
	Pnt p ^ k.dual() returns the orthogonal "plunge" of k through p and the inversion of p in k
	
Extendors

	Group theory includes the notion of an Extendor (i.e. a Glide Plane or a Roto-inversion)
	A GLD (glide plane) is a Reflection followed by a Translation (or vice versa): a Line * FlatPoint

	
TO DO
---

* 