#include "calculator.h"
#include "string.h"
cal_out *cal_proc_1_svc(cal_in *in, struct svc_req *rqstp)
{
    static cal_out out;
    if (strcmp(in->arg1, "add") == 0)
    {
        out = in->arg2 + in->arg3;
    }
    else if (strcmp(in->arg1, "sub") == 0)
    {
        out = in->arg2 - in->arg3;
    }
    else if (strcmp(in->arg1, "mul") == 0)
    {
        out = in->arg2 * in->arg3;
    }
    else if (strcmp(in->arg1, "div") == 0)
    {
        out = in->arg2 / in->arg3;
    }
    return (&out);
}