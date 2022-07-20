#include "add.h"
add_out *add_proc_1_svc(add_in *in, struct svc_req *rqstp)
{
    static add_out out;
    out = in->arg1 + in->arg2;
    return (&out);
}