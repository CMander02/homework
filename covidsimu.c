#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct citizen
{
    int type;//0=si;1=sr;2=e;3=i;4=d
    int incu;//incuabtion period;random
    int anti;//antibody level;fixed  with small disturbances;anti_si==0;
    int home;//place to live.evening will be back home.
}
int main()
{
    printf("Hello world!");
    system("pause");
    return 0;
}
