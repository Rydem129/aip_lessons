#include <iostream>
#include <math.h>

using namespace std;

struct Time
{
    int clok, mints, seconds;
};
struct komlekt
{
    float a,b;
};

float Komlekt (float a,float b){
    float i = sqrt(-1);
    return sqrt(a*a + b*b) * (a/sqrt(a*a + b*b) + i*(b/sqrt(a*a + b*b)));
}

struct robot
{
    float wt, sizes, speed;
};

float Robot(float a, float b, float c){
    float s;
    if (a<b<c || a<c<b )
        s=a;
    if (a>b>c || b>a>c)
        s=c;
    if (b<c<a || b<a<c)
        s=b;

    cout << s;
}


float Robot2(float a, float b, float c){
    float s;
    if (a<b<c || b<a<c )
        s=c;
    if (a>b>c || a>c>b)
        s=a;
    if (a<c<b || c<a<b)
        s=b;

    cout << s;
}

struct plane
{
    float speed,radiys,koow;
};
float Plane(float s, float r, float k){
    return s*r*k;
}


int main()
{
    //Создайте структуру, которая хранит время: часы, минуты, секунды
    /*
    Time time;
    cout << "clock =";cin >> time.clok;
    cout << "minutes =";cin >> time.mints;
    cout << "seconds =";cin >> time.seconds;
    cout << "syms seconds =" << time.clok * 3600 + time.mints * 60 + time.seconds;
    */

    //Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
    //мнимая части. Объявите два числа и получите их значения от пользователя.
    /*
    komlekt komlekt;
    cout << "a =";cin >> komlekt.a;
    cout << "b =";cin >> komlekt.b;
    cout << Komlekt(komlekt.a,komlekt.b);
    */


    //Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
    //данные о самом маленьком роботе.
    /*
    robot robot;
    cout << "wt =";cin >> robot.wt;
    cout << "sizes =";cin >> robot.sizes;
    cout << "speed =";cin >> robot.speed;

    robot robot2;
    cout << "wt =";cin >> robot2.wt;
    cout << "sizes =";cin >> robot2.sizes;
    cout << "speed =";cin >> robot2.speed;

    robot robotn;
    cout << "wt =";cin >> robotn.wt;
    cout << "sizes =";cin >> robotn.sizes;
    cout << "speed =";cin >> robotn.speed;

    cout << "sizes.min =" << Robot(robot.sizes,robot2.sizes,robotn.sizes);
    */


    //Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
    //данные о самом быстром роботе.
    /*
    robot robot;
    cout << "wt =";cin >> robot.wt;
    cout << "sizes =";cin >> robot.sizes;
    cout << "speed =";cin >> robot.speed;

    robot robot2;
    cout << "wt =";cin >> robot2.wt;
    cout << "sizes =";cin >> robot2.sizes;
    cout << "speed =";cin >> robot2.speed;

    robot robotn;
    cout << "wt =";cin >> robotn.wt;
    cout << "sizes =";cin >> robotn.sizes;
    cout << "speed =";cin >> robotn.speed;

    cout << "speed.max =" << Robot2(robot.speed, robot2.speed, robotn.speed);
    */

    /*
    Робот-самолёт описывается как структура с полями: скорость вращения винта,
    радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги,
    создаваемую винтом (произведение всех характеристик).*/
    plane plane;
    cout << "speed =";cin >> plane.speed;
    cout << "radiys =";cin >> plane.radiys;
    cout << "koow =";cin >> plane.koow;

    cout << "powered =" << Plane(plane.speed,plane.radiys, plane.koow);



    return 0;
}

