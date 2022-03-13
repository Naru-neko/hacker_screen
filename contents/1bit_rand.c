#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
    system("COLOR a");

    int cnt = 0;

    while (1)
    {
        printf("%d", rand() % 2);

        cnt++;

        if(cnt==150000)
        {
            printf("\n\n");
            sleep(1);

            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("_ACCESE_ COMPLETE!");

            scanf("%d",cnt);

            system("cls");
            cnt=0;
        }

    }

    return 0;
}
