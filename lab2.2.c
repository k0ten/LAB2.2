#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,c,b,a[10],oper,n1=0,comp=1;
    double n2;

    printf("Write type (1-write 2-random): ");
    scanf_s("%d", &oper);

    switch (oper){

        case 1:   printf("Enter 10 numbers\n");
               for (i = 0; i < 10; i++){
                     printf("%d. ", i);
                     scanf_s("%d", &a[i]);}
               for (i = 0; i < 10; i++){
                     printf("%d  ", a[i]);}
               break;


        case 2 :
               for (i = 0; i < 10; i++){
                     a[i] = rand() %10;
                     printf("%d  ", a[i]);}}


        for (b = 10; b >= 0; b--) {
               if (a[b] == 0) {printf("\nNomer nulevogo elementa %d",b);
               break;}}///поиск нулевого элемента


        for(c=0; c<10 ;c++){  n1 += (a[c]);}
        printf("\nSumma: %d\n",n1);///сумма элементов массива


        n2 =(double) n1/10;
        printf("Srednee arifm: %Lf\n",n2);///среднее арифтетическое


    for (i=b+1; i<10; i++){
        if (a[i] < n2) comp *= a[i];}
printf("Proizvedenie: %d",comp);///произведение
}
