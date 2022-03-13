#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    system("COLOR C");

    int cnt = 0;

    while(1){

        printf("WARNING ");
        usleep(100);
        cnt++;

        if(cnt>900){
            cnt=0;
            sleep(5);
            system("cls");
        }

    }

    return 0;
}
