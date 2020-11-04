#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int s = 0;

    printf("Ievadiet 1. skaitli! \n");
    scanf("%d" ,&a);
    printf("Ievadiet 2. skaitli!\n");
    scanf("%d" ,&b);
    printf("Ievadiet 3. skaitli!\n");
    scanf("%d" ,&c);
    printf("Lai attēlotu skaitļus augošā secībā ievadiet 1, bet dilstošā - 2\n");
    scanf("%d" ,&s);

    if (s == 1) {
        printf("%d %d %d \n" ,a,b,c);
    }
    else {
        printf("%d %d %d \n" ,c,b,a);
    }
    return 0;
}
