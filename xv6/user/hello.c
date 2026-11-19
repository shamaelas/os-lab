#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    printf("hello from xv6, my pid is %d\n", getpid());
    exit(0);
}
