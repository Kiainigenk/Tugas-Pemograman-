#include <stdio.h>
#include <string.h>

char *nama1 = "JAMES BOND";
char *nama2 = "HERCULE POIROT";

int main()
{
    char *namax;

    puts("SEMULA : ");
    printf("nama1 --> %s\n", nama1);  // nama1: pointer yg menunjuk ke string JAMES BOND
    printf("nama2 --> %s\n", nama2);  // nama2: pointer yg menunjuk ke string HERCULE POIROT

    // Menukarkan isi nama1 dan nama2
    namax = nama1;
    nama1 = nama2;
    nama2 = namax;

    puts("KINI : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);

    return 0;
}
