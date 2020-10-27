#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int i, c, b, a[N], oper, n1 = 0, comp = 1;
    double n2;

    do {
        printf("Write type (1-write 2-random): ");
        scanf_s("%d", &oper);

        switch (oper) {

            case 1:
                printf("Enter %d numbers\n", N);
                for (i = 0; i < N; i++) {
                    printf("%d. ", i);
                    scanf_s("%d", &a[i]);
                }
                for (i = 0; i < N; i++) {
                    printf("%d ", a[i]);
                }
                break;


            case 2 :
                for (i = 0; i < N; i++) {
                    a[i] = rand() % 10;
                    printf("%d ", a[i]);
                }
        }


        for (b = N; b >= 0; b--) {
            if (a[b] == 0) {
                printf("\nNomer poslednego nulevogo elementa %d", b);
                break;
            }
        }
        if (b < 0 || b > N) { printf("\nNulevogo elementa ne naydeno"); }//поиск нулевого элемента



        for (c = 0; c < N; c++) { n1 += (a[c]); }
        printf("\nSumma: %d\n", n1);//сумма элементов массива


        n2 = (double) n1 / N;
        printf("Srednee arifm: %Lf\n", n2);//среднее арифтетическое

        if (b != N - 1 && b > 0 && b < N) {
            for (i = b + 1; i < N; i++) {
                if (a[i] < n2) comp *= a[i];

            }
            printf("Proizvedenie: %d", comp);}//произведение
        else(printf("Netu elementov posle poslednego nulevogo elementa ili netu nulevogo elementa\n"));
    }
    while( b < 0 || b > N || b==N-1);
}
