
#include <stdio.h>

int main()
{
    /*1. Летните олимпийски игри се провеждат на 
    всеки 4 години през всяка година, която се дели точно на 4.
    Преброяването на населението в САЩ се извършва на всеки 10 години,
    през всяка която се дели на 10.Да се напише програма която проверява
    година въведена от потребителя дали съвпада с провеждането на 
    олимпийските игри или с преброяването на населението в САЩ.*/
    int yearLength;
    scanf_s("%d", &yearLength);
    unsigned int last2digits = yearLength % 100;

    //Example Year 1999
    // if 1999 % 100 = 99
    if (last2digits % 4 == 0)
    {
        printf("This year has Olympic Games!");
    }
    else if (last2digits % 10 == 0)
    {
        printf("This year USA is counting their people!");
    }
}
