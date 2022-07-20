struct cal_in {         /* arguments of the procedure */
    char arg1[5];
    long arg2;
    long arg3;
};

typedef long cal_out;  /* return value of the procedure */

program CAL_PROG {
    version CAL_VERS {
        cal_out CAL_PROC(cal_in) = 1;   /* procedure number */
    } = 1;                              /* version number */
} = 0x3544000;                          /* program number */