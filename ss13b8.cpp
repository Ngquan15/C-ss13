#include <stdio.h>

int timUCLN(int a, int b) {
    while (b != 0) {
        int tam = b;
        b = a % b;
        a = tam;
    }
    return a;
}

int main() {
    int s1, s2;
    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &s1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &s2);
    
    int ucln = timUCLN(s1, s2);
    printf("UCLN cua %d va %d la: %d\n", s1, s2, ucln);
    
    return 0;
}
