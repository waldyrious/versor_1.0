		
	#include "conga_assign_Trs_Sph_con.h"
	
		int conga_assign_Trs_Sph_switch[167] = {
	 
	77,  
	77,  
	77,  
	77,  
	77,  
	77,  
	77,  
	0,  
	77,  
	1,  
	2,  
	3,  
	77,  
	4,  
	77,  
	77,  
	5,  
	77,  
	6,  
	7,  
	8,  
	77,  
	77,  
	9,  
	77,  
	77,  
	10,  
	77,  
	11,  
	12,  
	77,  
	13,  
	77,  
	14,  
	15,  
	16,  
	17,  
	18,  
	77,  
	19,  
	77,  
	77,  
	20,  
	77,  
	77,  
	77,  
	77,  
	21,  
	22,  
	23,  
	24,  
	77,  
	25,  
	77,  
	77,  
	77,  
	77,  
	77,  
	77,  
	77,  
	26,  
	77,  
	27,  
	28,  
	77,  
	29,  
	77,  
	30,  
	31,  
	77,  
	77,  
	77,  
	77,  
	32,  
	33,  
	77,  
	34,  
	35,  
	77,  
	77,  
	36,  
	37,  
	77,  
	77,  
	38,  
	77,  
	77,  
	77,  
	39,  
	77,  
	40,  
	41,  
	77,  
	77,  
	42,  
	77,  
	77,  
	43,  
	77,  
	77,  
	44,  
	77,  
	77,  
	45,  
	77,  
	46,  
	47,  
	77,  
	48,  
	49,  
	77,  
	77,  
	50,  
	77,  
	51,  
	52,  
	53,  
	77,  
	54,  
	77,  
	77,  
	55,  
	77,  
	77,  
	56,  
	77,  
	57,  
	77,  
	58,  
	77,  
	59,  
	77,  
	60,  
	77,  
	77,  
	61,  
	77,  
	77,  
	62,  
	63,  
	77,  
	77,  
	64,  
	77,  
	65,  
	77,  
	66,  
	77,  
	67,  
	77,  
	68,  
	77,  
	77,  
	69,  
	77,  
	70,  
	71,  
	77,  
	72,  
	77,  
	77,  
	73,  
	74,  
	77,  
	77,  
	75,  
	76, 
	};
	
	
		int conga_assign_Trs_Sph_base_index[11] = { 6,7,8,12,13,14,26,27,28,29,30, };
	
	
	void conga_assign_Trs_Sph_fn(int _idx, double * a, double *r){
	
		conga_assign_Trs_Sph_func[ conga_assign_Trs_Sph_switch [_idx] ](a, r);
	}


	

	