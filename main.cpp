#include <iostream>
#include <math.h>
using namespace std;

int main()
{


    //Дана функция y=f(x). Найти значение функции по x:
    /*
    float y;
    int x;
    cout << "x="; cin >> x;
    if (x>0)
        y = 1.5*x+5;
    if (x<0)
        y = 2* abs(x+4)-6;
    if (x==0)
        y = -2;
    cout << "y=" << y;
    */
    /*
    int x;
    float y;
    cout << "x="; cin >> x;
    if (x>5)
        y = 2*(x*x)+10;
    if (x<5)
        y = 2 * abs(x+6)-(x*x);
    if (x==0)
        y = -2;
    cout << "y=" << y;
    */

    //Напишите программу, которая принимает от пользователя координаты точки и
    //определяет, попала ли точка в заштрихованную область.
    /*
    float x, y;
    int s=0;
    cin >> x >> y;
    if (y>x && y<2-(x*x)){
            cout << "yes";
    s++;
    }
    if (y<2-(x*x) && y>0){
        cout << "yes";
        s++;
    }
    if (s=0)
        cout << "no";
    */

    /*
    float x, y, l;
    cin >> x >> y;
    l = sqrt (x*x + y*y);
    if (l<1 && y<2-(x*x))
        cout << "yes";
    else {
        cout << "no";
    }
    */

    return 0;
}
