#include "types.h"
#include "user.h"


int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        write(1, "enter pid and tikcet\n", sizeof("enter pid and ticket\n"));
        exit();
    }
    int result = set_rem(atoi(argv[1]), atoi(argv[2]));
    if (result != 1) {
        write(1, "dadash set riiiiiid\n", sizeof("dadash set riiiiiid\n"));
    }
}