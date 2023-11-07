#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

void printDataDead(){
    printf("Введено непонятно что, но явно не число!\n");
    printf("main.c - R.I.P. 30.10.2023\n");
}


int main() {
    char userChoose;

    while (1) {
        printf("Почему бы не найти корни какого-нибудь квадратного уравнения?\n");
        printf("y - Да, давай!\n");
        printf("n - В другой раз.\n");
        scanf("%c", &userChoose);
        if ((userChoose == 'y') || (userChoose == 'n')) {
            break;
        } else {
            printf("Программа глупая, программа не понимает, что хочет от нее пользователь!\n");
            printf("Попробуй еще раз!\n");
        }
    }
    double a;
    if ((userChoose == 'д') || (userChoose == 'y')) {
        printf("!** Attention **!\nДальше права на ошибку не будет!\nВведите коэффициенты квадратного уравнения\n");
        printf("a = ");

        if (!scanf("%lf", &a)) {
            printDataDead();
            return -1;
        }
        if (a == 0) {
            printf("a не может быть равно нулю!\n");
            printf("main.c - R.I.P. 30.10.2023\n");
            return -1;
        }
        double b;
        printf("А ты хорош! b = ");
        if (!scanf("%lf", &b)) {
            printDataDead();
            return -1;
        }
        double c;
        printf("Финишный рывок! c = ");
        if (!scanf("%lf", &c)) {
            printDataDead();
            return -1;
        }

        double *result = findRootQuadraticEquation(a, b, c);
        int sum = (int) (abs(result[0]) + abs(result[1]));
        printf("\nИнтересный факт! В последовательности Фибоначчи %d элемент это %d\n", sum+1, fibonachi(sum));
    }
    printf("! FREEDOM !\n");
}
