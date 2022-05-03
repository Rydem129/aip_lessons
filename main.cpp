#include <iostream>
#include <cmath>
#include <windows.h>
#include <clocale>
int main()
{    
    float a, b, c, h, S, P, r, x, privat;
    char Q, Z;
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    using namespace std;
    setlocale(LC_ALL,"Russian");
    /*
    cout << "*******" << endl
         << "*     *" << endl
         << "*******" << endl
         << "*      " << endl
         << "*      " << endl;
    */

    //периметр и площадь Ромба
    /*
    cout << "a = ";
    cin >> a;
    cout << "h = ";
    cin >> h;
    S = a*h;
    cout << "S = " << S << endl;
    P = 4 * a;
    cout << "P = " << P;
    */

    //разность и частное
    /*
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    r = a-b;
    privat = a/b;
    cout << "Raznost = " << r << endl
         << "private = " << privat << endl;
    */

    //поменять значения
    /*
    cin >> a >> b;
    c = a;
    a = b;
    cout << b << endl << c;
    */

    //найдите сумму новых трех чисел
    /*
    cin >> a >> b >> c;
    a = 2*a;
    b = b/3;
    c = c*c;
    h = a + b + c;
    cout << h << endl;
    */

    //среднее арифметическое этих чисел
    /*
    cin >> a >> b >> c;
    S = (a + b + c)/3;
    h = (a*2)-(c*2)-(b*3);
    cout << "Sridnee = " << S << endl << "Symma = " << h;
    */

    //квадрат, куб
    /*
    cin >> a;
    b = a*a;
    c = pow(a,3);
    cout << b << endl << c;
    */


    //Вычислите значение выражения:
    /*
    cin >> x;
    a = pow((x+1),2)+3*(x+1);
    cout << a;
    */

    //Сделать конвертер величин
    /*
    cout << "Введите величину:метры, гектар, акры";
    cin >> Q;
    cont << "Введите число";
    cin >> b;
    cout << "Введите величину для перевода:метры, гектар, акры";
    cin >> Z;
    if (Q == "гектар"){
            b = b*10000;}
    if (Z == "акры")
            a = b*4046.86;
    */

    /*Вводятся два целых числа. Проверить делится ли первое на второе. Вывести на
    экран сообщение об этом, а также остаток (если он есть) и частное (в любом
    случае)*/
int e, t;
    cin >> e >> t;
    c = e % t;
    x = e / t;
    if (c == 0)
        cout << "yes";
    else
        cout << "no" << endl<<"ostatok = " << c << endl;
    cout << x;


    //system("PAUSE");
    return 0;
}
