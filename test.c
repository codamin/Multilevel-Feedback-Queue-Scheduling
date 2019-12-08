#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
    if(fork() == 0)
    {
        while(1);
    }
    else
    {
        if(fork() == 0)
        {
            while(1);
        }

        else {
            if(fork() == 0)
            {
                while(1);
            }
            else{
                wait();
            }
        }
        wait();
    }
    wait();
}
