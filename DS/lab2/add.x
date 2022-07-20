struct add_in {         /* arguments of the procedure */
    long arg1;
    long arg2;
};

typedef long add_out;  /* return value of the procedure */

program ADD_PROG {
    version ADD_VERS {
        add_out ADD_PROC(add_in) = 1;   /* procedure number */
    } = 1;                              /* version number */
} = 0x3543000;                          /* program number */