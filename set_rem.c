#include "types.h"
#include "user.h"

// float stof(char* str) {
//     float ans = 0;
//     int it = 0;
//     while(it<strlen(str) && str[it] != '.') {
//         ans = (ans * 10) + (str[it] - '0');
//         it++;
//     }
//     if(it == strlen(str))
//         return ans;
//     it++;
//     float tmp = 0.1;
//     while(it<strlen(str)) {
//         ans += tmp * (str[it] - '0');
//         tmp = tmp * 0.1;
//         it++;
//     }
//     return ans;
// }

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        write(1, "enter pid and tikcet\n", sizeof("enter pid and ticket\n"));
        exit();
    }
    int result = set_rem(atoi(argv[1]), argv[2]);
    if (result != 1) {
        write(1, "system call failed\n", sizeof("system call failed\n"));
    }
}