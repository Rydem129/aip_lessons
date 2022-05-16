#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /*
    //Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
    //равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
    int i, H, count = 1, j;
    cout << "H="; cin >> H;
    for (i = 1; i <= H; i++){
       for(j = 0;j < count; j++)
           cout << "0";
       cout << endl;
       count++;
    }
    */


    /*
    //Протабулировать функцию
    float x,y;
    int n, N, i;
    cout << "i="; cin >> i;
    cout << "n="; cin >> n;
    cout << "N="; cin >> N;
     for (x=n; x<=N; x=x+i)
     {
        y=-2.4*(x*x)+(3*x)-1;
        //y=sqrt(15+(4/x))+(13*x)+sin((3*x)+13)
        cout << " x = " << x << endl << " y = " << y << endl << endl;
    }
    */

    /*
    //Вывести на экран ряд натуральных чисел от n до N с шагом i
    int n, N, i, j;
    cout << "i="; cin >> i;
    cout << "n="; cin >> n;
    cout << "N="; cin >> N;
    for (j=n;j<=N;j=j+i)
        cout << j << " ";
    */


    /*
    //Составить алгоритм, определяющий количество трёхзначных натуральных чисел,
    //сумма цифр которого равна n.
    int n, count = 0, i = 99;

      cout << "n=";cin >> n;

      while(++i < 1000)
          if(i % 10 + i / 10 % 10 + i / 100 == n)
              cout << i % 10 << i / 10 % 10 << i / 100 << endl;
              ++count;
      cout << count << endl;
    */


    //Пользователь задаёт число i и Х. Посчитать y:

    /*
    int i,j;
    float x, y=0;
    cout << "i="; cin >> i;
    cout << "x="; cin >> x;
    for (j=1;j<=i;j++)
        y = y+(1/(j*x));
    cout << "y=" << y;
    */

    /*
    int i,j;
    float x, y=0;
    cout << "i="; cin >> i;
    cout << "x="; cin >> x;
    for (j=1;j<=i;j++){
        if (j%2==0)
            y=y-(j*x);
        else
           y=y+(j*x);
    }
    cout << "y=" << y;
    */


    return 0;
}
