
#include "conga_ip_Trv_Biv.h"


double * conga_ip_95_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_6(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[6] * b[0] ;
	
	
	//_e12no
	r[1] = a[5] * b[0]  * -1 ;
	
	
	//_e13no
	r[2] = a[4] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[0] ;
	
	
	//_e3noni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_95_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[4] ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1  + a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  + a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_95_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_95_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[0] ;
	
	
	//_e13
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[0] ;
	
	
	//_e3ni
	r[6] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_16(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_17(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1no
	r[4] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1ni
	r[7] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[3] ;
	
	
	//_e3ni
	r[9] = a[0] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_95_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_95_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_95_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1ni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[7] ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[5]  + a[5] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[6]  + a[4] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7] ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_95_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e1no
	r[1] = a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[15] ;
	
	
	//_e13
	r[2] = a[4] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[15] ;
	
	
	//_e1no
	r[4] = a[2] * b[14]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  + a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[7] = a[2] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[15] ;
	
	
	//_e3ni
	r[9] = a[0] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[1]  + a[5] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[2]  + a[4] * b[3] ;
	
	
	//_noni
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[3] ;
	
	
	//_e12no
	r[1] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[2] = a[4] * b[3] ;
	
	
	//_e23no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[3] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[6] * b[15] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[15] ;
	
	
	//_e23no
	r[7] = a[3] * b[15]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[15] ;
	
	
	//_e3noni
	r[10] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  + a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[10] ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[3] ;
	
	
	//_e3no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[3] ;
	
	
	//_e3noni
	r[10] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[10] ;
	
	
	//_e12no
	r[4] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[10] ;
	
	
	//_e23no
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[10] ;
	
	
	//_e3noni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1ni
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[6] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[1] ;
	
	
	//_e12no
	r[4] = a[5] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[1] ;
	
	
	//_e23no
	r[6] = a[3] * b[1]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e1no
	r[1] = a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_noni
	r[4] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1ni
	r[7] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[6] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[4] ;
	
	
	//_e12no
	r[4] = a[5] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[4] ;
	
	
	//_e23no
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[11] ;
	
	
	//_e12no
	r[4] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[11] ;
	
	
	//_e23no
	r[6] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[11] ;
	
	
	//_e3noni
	r[9] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[11]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[11]  + a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[11]  * -1  + a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_95_87(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3] ;
	
	
	//_e12no
	r[1] = a[5] * b[3]  * -1 ;
	
	
	//_e13no
	r[2] = a[4] * b[3] ;
	
	
	//_e23no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[3] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e1no
	r[1] = a[2] * b[14]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[14]  + a[3] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[14]  * -1  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_noni
	r[4] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_94(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[9]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[9]  + a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e1ni
	r[7] = a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[4] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[4]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[4] ;
	
	
	//_e23no
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[4] ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[4] ;
	
	
	//_e13
	r[2] = a[4] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[3] ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[6]  + a[5] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	//_e1ni
	r[4] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[1] ;
	
	
	//_e13
	r[2] = a[4] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[1] ;
	
	
	//_e1no
	r[4] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[0] ;
	
	
	//_e3no
	r[6] = a[0] * b[0]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[1] ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_95_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[12]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[12]  + a[3] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[7] ;
	
	
	//_e23no
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[7] ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_95_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_125(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[3]  * -1  + a[4] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[3]  + a[3] * b[0]  + a[5] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[3]  * -1  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_95_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_95_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2
	r[1] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[14] ;
	
	
	//_e23no
	r[7] = a[3] * b[14]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[14] ;
	
	
	//_e3noni
	r[10] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[9] ;
	
	
	//_e23no
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[7]  + a[5] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[7] ;
	
	
	//_e12no
	r[4] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[5] = a[4] * b[7] ;
	
	
	//_e23no
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_95_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[6] ;
	
	
	//_e23no
	r[7] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[6] ;
	
	
	//_e3noni
	r[10] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_150(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[7]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[7]  + a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[7]  * -1  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7] ;
	
	
	//_e12no
	r[1] = a[5] * b[7]  * -1 ;
	
	
	//_e13no
	r[2] = a[4] * b[7] ;
	
	
	//_e23no
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[7] ;
	
	
	//_e3noni
	r[6] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[11] ;
	
	
	//_e23no
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[11] ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[1] * b[6] ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[1] * b[6]  + a[3] * b[3]  + a[5] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_noni
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[3] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[10] ;
	
	
	//_e23no
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[10] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e1ni
	r[7] = a[2] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2
	r[1] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[5] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[4] * b[13] ;
	
	
	//_e23no
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[9] = a[1] * b[13] ;
	
	
	//_e3noni
	r[10] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e1no
	r[1] = a[2] * b[13]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[13]  + a[3] * b[10]  + a[5] * b[12]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[13]  * -1  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_noni
	r[4] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e2no
	r[1] = a[3] * b[4]  + a[5] * b[6]  * -1 ;
	
	
	//_e3no
	r[2] = a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_164(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6] ;
	
	
	//_e12no
	r[1] = a[5] * b[6]  * -1 ;
	
	
	//_e13no
	r[2] = a[4] * b[6] ;
	
	
	//_e23no
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[1] * b[6] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_95_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_95_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[12]  + a[4] * b[13]  + a[5] * b[14]  + a[6] * b[30]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[4] * b[19]  + a[5] * b[20] ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[3] * b[19]  * -1  + a[5] * b[21] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[20]  * -1  + a[4] * b[21]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1  + a[3] * b[22]  * -1  + a[4] * b[23]  * -1  + a[5] * b[24]  * -1  + a[6] * b[31] ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1 ;
	
	
	//_e12
	r[6] = a[5] * b[30] ;
	
	
	//_e13
	r[7] = a[4] * b[30]  * -1 ;
	
	
	//_e23
	r[8] = a[3] * b[30] ;
	
	
	//_e1no
	r[9] = a[2] * b[29]  * -1  + a[4] * b[26]  * -1  + a[5] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[1] * b[29]  + a[3] * b[26]  + a[5] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[29]  * -1  + a[3] * b[27]  + a[4] * b[28] ;
	
	
	//_e1ni
	r[12] = a[2] * b[30]  * -1 ;
	
	
	//_e2ni
	r[13] = a[1] * b[30] ;
	
	
	//_e3ni
	r[14] = a[0] * b[30]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1 ;
	
	
	//_e12no
	r[16] = a[5] * b[31]  * -1 ;
	
	
	//_e13no
	r[17] = a[4] * b[31] ;
	
	
	//_e23no
	r[18] = a[3] * b[31]  * -1 ;
	
	
	//_e1noni
	r[19] = a[2] * b[31]  * -1 ;
	
	
	//_e2noni
	r[20] = a[1] * b[31] ;
	
	
	//_e3noni
	r[21] = a[0] * b[31]  * -1 ;
	
	
	return r;
}

