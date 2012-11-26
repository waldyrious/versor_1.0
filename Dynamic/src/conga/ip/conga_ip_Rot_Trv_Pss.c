
#include "conga_ip_Rot_Trv_Pss.h"


double * conga_ip_152_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_152_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[0] ;
	
	
	//_e13
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[0] ;
	
	
	//_e1no
	r[4] = a[3] * b[0] ;
	
	
	//_e2no
	r[5] = a[2] * b[0]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[0] ;
	
	
	//_e123no
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_152_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[4]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e123
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_152_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_152_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_152_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0] ;
	
	
	//_e3
	r[2] = a[1] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_152_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	//_e123
	r[7] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_152_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_152_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[11]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[11]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[11]  * -1  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_152_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[5]  + a[6] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_152_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_152_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_152_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_152_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[15]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[15]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[15]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_152_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1  + a[6] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1]  + a[6] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[2] ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  + a[7] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[6] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[5] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[4] * b[15] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1  + a[3] * b[15] ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1  + a[2] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[1] * b[15] ;
	
	
	//_e123no
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[11]  * -1  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[11]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[11]  * -1  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_152_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[11]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_152_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[7]  * -1  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[7]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[7]  * -1  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_152_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[3] ;
	
	
	//_e1no
	r[4] = a[3] * b[3] ;
	
	
	//_e2no
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[14]  * -1  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[14]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[14]  * -1  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_152_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[14] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[10]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[10]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[10]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	//_e123
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[4] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1  + a[3] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1  + a[1] * b[13] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[1] ;
	
	
	//_e13
	r[2] = a[5] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[1] ;
	
	
	//_e1no
	r[4] = a[3] * b[1] ;
	
	
	//_e2no
	r[5] = a[2] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[1] ;
	
	
	//_e123no
	r[7] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[7]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[7]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[7]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_152_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_no
	r[3] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[9] ;
	
	
	//_e13no
	r[5] = a[0] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_152_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[6]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  * -1  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	//_e123
	r[7] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_152_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_152_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[4] ;
	
	
	//_e1no
	r[4] = a[3] * b[4] ;
	
	
	//_e2no
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[4] ;
	
	
	//_e123no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[3] ;
	
	
	//_e13
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[3] ;
	
	
	//_e1no
	r[4] = a[3] * b[3] ;
	
	
	//_e2no
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e1no
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[5] * b[11]  * -1  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[4] * b[11]  + a[6] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_152_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[14] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[10]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[10]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[10]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	//_e123
	r[7] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[4] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e1no
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_152_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e1no
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[9]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[9]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[9]  * -1  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	//_e123
	r[7] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_152_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[7] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e1no
	r[4] = a[3] * b[4] ;
	
	
	//_e2no
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[4] ;
	
	
	//_e123no
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_no
	r[3] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_152_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[4] * b[9] ;
	
	
	//_e1no
	r[4] = a[3] * b[9] ;
	
	
	//_e2no
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[9] ;
	
	
	//_e123no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_152_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[6]  + a[6] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_no
	r[3] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[6] ;
	
	
	//_e13no
	r[5] = a[0] * b[7] ;
	
	
	//_e23no
	r[6] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_152_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_152_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_152_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_152_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_152_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[13]  * -1  + a[5] * b[9]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[13]  + a[4] * b[9]  + a[6] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[13]  * -1  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_no
	r[3] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[9] ;
	
	
	//_e13no
	r[5] = a[0] * b[10] ;
	
	
	//_e23no
	r[6] = a[0] * b[11] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_152_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1  + a[6] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0]  + a[6] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[1] ;
	
	
	//_e23no
	r[6] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_152_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[14]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[14]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[14]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_152_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_152_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_152_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[14]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[14]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[14]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_152_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13]  + a[7] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[6] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[4] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1  + a[3] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[1] * b[14] ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[6] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[4] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[1] * b[9] ;
	
	
	//_e123no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[5] * b[7]  * -1  + a[6] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[4] * b[7]  + a[6] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_152_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_152_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_152_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[7] ;
	
	
	//_e13
	r[2] = a[5] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[3] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[6] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[4] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1  + a[3] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1  + a[1] * b[11] ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_152_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[4] ;
	
	
	//_e23no
	r[6] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_152_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[4] * b[8]  + a[6] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_152_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8]  + a[7] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[6] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[4] * b[10] ;
	
	
	//_e1no
	r[4] = a[3] * b[10] ;
	
	
	//_e2no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[1] * b[10] ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[3] * b[13]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[2] * b[13]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[13]  * -1  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_152_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[6] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[4] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[3] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[1] * b[13] ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[4] * b[10]  + a[6] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_no
	r[3] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_152_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[6] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[6] * b[6] ;
	
	
	//_e13
	r[2] = a[5] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[4] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[3] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[1] * b[6] ;
	
	
	//_e123no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_152_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_152_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[19]  + a[2] * b[20]  + a[3] * b[21]  + a[4] * b[22]  + a[5] * b[23]  + a[6] * b[24]  + a[7] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[3] * b[30]  * -1  + a[5] * b[26]  * -1  + a[6] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[2] * b[30]  + a[4] * b[26]  + a[6] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[30]  * -1  + a[4] * b[27]  + a[5] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[15]  + a[1] * b[26]  * -1  + a[2] * b[27]  * -1  + a[3] * b[28]  * -1 ;
	
	
	//_e12
	r[5] = a[0] * b[19]  * -1  + a[6] * b[31] ;
	
	
	//_e13
	r[6] = a[0] * b[20]  * -1  + a[5] * b[31]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[21]  * -1  + a[4] * b[31] ;
	
	
	//_e1no
	r[8] = a[0] * b[22]  * -1  + a[3] * b[31] ;
	
	
	//_e2no
	r[9] = a[0] * b[23]  * -1  + a[2] * b[31]  * -1 ;
	
	
	//_e3no
	r[10] = a[0] * b[24]  * -1  + a[1] * b[31] ;
	
	
	//_e12no
	r[11] = a[0] * b[26] ;
	
	
	//_e13no
	r[12] = a[0] * b[27] ;
	
	
	//_e23no
	r[13] = a[0] * b[28] ;
	
	
	//_e123
	r[14] = a[0] * b[30] ;
	
	
	//_e123no
	r[15] = a[0] * b[31]  * -1 ;
	
	
	return r;
}

