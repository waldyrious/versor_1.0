		
	#include "conga_assign_Rot_Ori_con.h"
	
		int conga_assign_Rot_Ori_switch[167] = {
	 
	54,  
	0,  
	54,  
	54,  
	1,  
	54,  
	2,  
	54,  
	3,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	4,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	5,  
	54,  
	6,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	7,  
	54,  
	54,  
	8,  
	54,  
	9,  
	10,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	11,  
	12,  
	13,  
	54,  
	14,  
	54,  
	15,  
	54,  
	54,  
	16,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	17,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	18,  
	19,  
	54,  
	54,  
	20,  
	21,  
	54,  
	22,  
	54,  
	54,  
	54,  
	23,  
	54,  
	54,  
	24,  
	54,  
	25,  
	54,  
	54,  
	54,  
	26,  
	54,  
	27,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	28,  
	54,  
	54,  
	54,  
	29,  
	54,  
	30,  
	31,  
	54,  
	32,  
	33,  
	54,  
	34,  
	54,  
	35,  
	54,  
	36,  
	54,  
	37,  
	54,  
	38,  
	39,  
	54,  
	40,  
	41,  
	54,  
	54,  
	42,  
	54,  
	54,  
	54,  
	54,  
	54,  
	54,  
	43,  
	54,  
	44,  
	54,  
	45,  
	46,  
	54,  
	47,  
	54,  
	54,  
	48,  
	54,  
	49,  
	50,  
	54,  
	54,  
	51,  
	52,  
	54,  
	53, 
	};
	
	
		int conga_assign_Rot_Ori_base_index[4] = { 4,16,17,18, };
	
	
	void conga_assign_Rot_Ori_fn(int _idx, double * a, double *r){
	
		conga_assign_Rot_Ori_func[ conga_assign_Rot_Ori_switch [_idx] ](a, r);
	}


	

	