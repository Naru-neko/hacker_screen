#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void datsleep(int second)
{
    for(int i=0;i<second;i++){
        printf(".");
        sleep(1);
    }
}
int main(int argc, char const *argv[])
{

    system("COLOR a");

    int fin_flags;

    printf("NETWORK STATS ETH ADAPTOR:\n\n");
    sleep(1);
    printf("  IPv6 Network Addres ----- : fe60::f9a5:7550:2724:4e74\n");
    printf("  IPv4 Network Addres ----- : 192.168.120.1\n\n");
    sleep(2);

    printf("SYSTEM STAT:\n");
    sleep(2);
    printf("                            ./+o+-       Anonymous@DESKTOP-454fa4\n");
    printf("                    yyyyy- -yyyyyy+      OS: Hbuntu 30.04 focal\n");
    printf("             .++ .:/++++++/-.+sss/`      Uptime: 2m\n");
    printf("           .:++o:  /++++++++/:--:/-      Packages: 623\n");
    printf("          o:+o+:++.`..```.-/oo+++++/     Shell: bash 4.60.3\n");
    printf("         .:+o:+o/.          `+sssoo+/    Disk: 1.1T / 1.7T (68%)\n");
    printf("    .++/+:+oo+o:`             /sssooo.   CPU: Entel Core i10-XXXX @ 6x 2.90GHz\n");
    printf("   /+++//+:`oo+o               /::--:.   RAM: 7389MiB / 16303MiB\n");
    printf("   |+/+o+++`o++o               ++////.\n");
    printf("    .++.o+++oo+:`             /dddhhh.\n");
    printf("        |.+.o+oo:.          `oddhhhh+\n");
    printf("            +.++o+o``-````.:ohdhhhhh+\n");
    printf("            `:o+++ `ohhhhhhhhyo++os:\n");
    printf("              .o:`.syhhhhhhh/.oo++o`\n");
    printf("                 /osyyyyyyo++ooo+++/\n");
    printf("                    ````` +oo+++o:\n");
    printf("                            `oo++.\n");


    while (1)
    {
        scanf("%d", fin_flags);

    }

    return 0;
}