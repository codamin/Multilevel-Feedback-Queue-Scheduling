#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
    int pid;
    pid = fork();
    if(pid == 0) {
        while(1);
    }
    else {
        return 0;
    }
}
