{
	{
		const int N = 80000;
		const double eps = 1e-4;
		Curve<double,double> c(N, 0,-0.5);
		assert(!c.done());
		assert(c.end() == -0.5);
		
		for(int i=0; i<N; ++i){
			double v = c();
//			printf("%g ?= %g\n", v, double(i)/N*c.end());
			assert(scl::abs(v - double(i)/N*c.end()) < eps);
			assert(v == c.value());
		}
		
		c(); // cannot hit end point exactly
		assert(c.done());

		c.reset();
		for(int i=0; i<N; ++i){
			double v = c();
			assert(scl::abs(v - double(i)/N*c.end()) < eps);
			assert(v == c.value());
		}
	}

	{
		const int N = 80000;
		const float eps = 1e-1;
		Curve<float> c(N, 0,-0.5);
		assert(!c.done());
		assert(c.end() == -0.5);
		
		for(int i=0; i<N; ++i){
			double v = c();
//			printf("%g ?= %g\n", v, float(i)/N*c.end());
			assert(scl::abs(v - float(i)/N*c.end()) < eps);
			assert(v == c.value());
		}
		
		c(); // cannot hit end point exactly
		assert(c.done());
	}
	
	{
		Env<3> e;
		assert(e.size() == 3);
		assert(!e.done());
		assert(!e.released());
		
		e.levels(0, -0.2, 0.5, 0.1);
		e.maxLevel(2);
		assert(near(e.levels()[0], 0  ));
		assert(near(e.levels()[1],-0.8));
		assert(near(e.levels()[2], 2.0));
		assert(near(e.levels()[3], 0.4));
		
		e.lengths(1,2,3);
		assert(near(e.totalLength(), 6));
		
		e.totalLength(2);
		assert(near(e.lengths()[0], 1./6 * 2));
		assert(near(e.lengths()[1], 2./6 * 2));
		assert(near(e.lengths()[2], 3./6 * 2));

		e.lengths(1,3,1);
		e.totalLength(10, 1);
		assert(near(e.lengths()[0], 1));
		assert(near(e.lengths()[1], 8));
		assert(near(e.lengths()[2], 1));		
	}
	
	{
		//typedef Vec<2,double> vec;
		#define vec Vec<2,double> 
		Env<2, vec> e;
		
		assert(!e.done());
		
		e.levels(vec(0, -0.1), vec(0.5, 1), vec(0.1, 0));
		e.maxLevel(vec(2,3));
		assert(near(e.levels()[0][0], 0  ));
		assert(near(e.levels()[1][0], 2.0));
		assert(near(e.levels()[2][0], 0.4));
		assert(near(e.levels()[0][1],-0.3));
		assert(near(e.levels()[1][1], 3.0));
		assert(near(e.levels()[2][1], 0.0));
	}
}