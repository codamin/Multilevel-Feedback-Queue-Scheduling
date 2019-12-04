#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        write(1, "enter pid and priority\n", sizeof("enter pid and priority\n"));
        exit();
    }
    write(0, argv[1], strlen(argv[1]));
    write(0, argv[2], strlen(argv[2]));
    int result = setpri(atoi(argv[1]), atoi(argv[2]));
    if (result != 1) {

        write(1, "dadash setpri riiiiiid\n", sizeof("dadash setpri riiiiiid\n"));
    }
}
