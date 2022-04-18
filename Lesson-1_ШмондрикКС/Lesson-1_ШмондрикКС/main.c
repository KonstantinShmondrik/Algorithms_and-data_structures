//
//  main.c
//  Lesson-1_ШмондрикКС
//
//  Created by Константин Шмондрик on 18.04.2022.
//



#include <stdio.h>
#include <math.h>


void solution1(void);
void solution2(void);
void solution3(void);
void solution4(void);
void menu(void);



int main()
{
    int sel = 0;
    do
    {
        menu();
        scanf("%i", &sel);
        switch (sel)
        {
            case 1:
                solution1();
                break;
            case 2:
                solution2();
                break;
            case 3:
                solution3();
                break;
            case 4:
                solution4();
                break;
            case 0:
                printf("Bye-bye");
                break;
            default:
                printf("Wrong selected\n");
        }
    } while (sel != 0);
    return 0;
}

// Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.

double BMI(double m, double h)
{
    return m/pow(h, 2);
}

void solution1()
{
    printf("Solution 1 Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.\n");
    
    double m; // Вес человека
    double h; // рост человека
    
    printf("Input m: ");
    scanf("%lf", &m);
    printf("Input h: ");
    scanf("%lf", &h);
    
    printf("BMI: %lf\n", BMI(m, h));
    printf("===================\n");
    
}


// Найти максимальное из четырех чисел. Массивы не использовать.
void solution2()
{
    printf("Solution 2 Найти максимальное из четырех чисел. Массивы не использовать.\n");
    
    double a;
    double b;
    double c;
    double d;
    double max;
    
    printf("Input a: ");
    scanf("%lf", &a);
    printf("Input b: ");
    scanf("%lf", &b);
    printf("Input c: ");
    scanf("%lf", &c);
    printf("Input d: ");
    scanf("%lf", &d);
    
    
    if (a > b && a > c && a > d)
        max = a;
    else
        if (b > c && b > d)
            max = b;
        else
            if (c > d)
                max = c;
            else
                max = d;
    
    
    printf("max %lf\n", max);
    printf("===================\n");
    
}

// Написать программу обмена значениями двух целочисленных переменных
void solution3()
{
    printf("Solution 3 Написать программу обмена значениями двух целочисленных переменных.\n");
    
    int a;
    int b;
    int temp;
    
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    
    // с использованием третьей переменной
    temp = a;
    a = b;
    b = temp;
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("===================\n");
    
    // без использования третьей переменной
    
    a += b;
    b = a - b;
    a -= b;
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("===================\n");
    
}

//Написать программу нахождения корней заданного квадратного уравнения
void solution4()
{
    printf("Solution 4 Написать программу нахождения корней заданного квадратного уравнения (ax^2+bx+c=0).\n");
    
    // ax^2+bx+c=0
    
    double a;
    double b;
    double c;
    
    double D;
    double x1;
    double x2;
    
    printf("Input a: ");
    scanf("%lf", &a);
    printf("Input b: ");
    scanf("%lf", &b);
    printf("Input c: ");
    scanf("%lf", &c);
    
    D = pow(b,2) - (a * c * 4); // расчет дискриминанта D=b^2-4ac
    
    if (D < 0)
    {
        printf("D<0 Уравнение не имеет корней\n");
        printf("===================\n");
    }
    if (D == 0)
    {
        x1 = -b / (2 * a);
        
        printf("D = %lf\n", D);
        printf("x1 =  %lf\n", x1);
        printf("===================\n");
    }
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = ( -b - sqrt(D)) / (2 * a);
        
        printf("D = %lf\n", D);
        printf("x1 =  %lf\n", x1);
        printf("x2 =  %lf\n", x2);
        printf("===================\n");
        
    }
}

void menu()
{
    printf("1 - task1\n");
    printf("2 - task2\n");
    printf("3 - task3\n");
    printf("4 - task4\n");
    printf("0 - exit\n");
    printf("===================\n");
}
