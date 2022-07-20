#include "calculator.h"
#include "string.h"
int main(int argc, char **argv)
{
    CLIENT *cl;
    cal_in in;
    cal_out *out;

    if (argc != 5)
    {
        printf("Usage: client <machine> <string> <int1> <int2>\n\n");
        return 1;
    }
    cl = clnt_create(argv[1], CAL_PROG, CAL_VERS, "tcp");
    strcpy(in.arg1, argv[2]);
    in.arg2 = atol(argv[3]);
    in.arg3 = atol(argv[4]);
    out = cal_proc_1(&in, cl);
    printf("Name: K N Anantha nandanan\nRollno: AM.EN.U4CSE19326\n");
    if (out == NULL)
    {
        printf("Error: %s\n", clnt_sperror(cl, argv[1]));
    }
    else
    {
        printf("The result is: %ld\n", *out);
    }
    clnt_destroy(cl);
}
