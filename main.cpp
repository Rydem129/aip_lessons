#include <iostream>
#include <math.h>

using namespace std;



float Calc (float A, float B, int Op)
{
    switch (Op){
    case 1:
        return A-B;
        break;
    case 2:
        return A*B;
        break;
    case 3:
        return A/B;
        break;
    default:
        return A+B;
    }
};


float Leng (float xA, float yA, float xB, float yB){
    float R;
     R = sqrt (sqr((xA-xB))+sqr ((yA-yB)));
}

float Tabyl (int n1, int n2, float i,float x){
    float y;
    for (n1; n2<=n1; n1=n1+i){
        if (x>-8)
            y = sqr (((2+x))+7;
        if (x<-8)
            y = abs(2*x-1)-1;
        if (x==-8)
            y = 5;
    }
}


int main()
{
    /*Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y (X и Y
— вещественные параметры, являющиеся одновременно входными и выходными).
С ее помощью для данных переменных A, B, C, D последовательно поменять
содержимое следующих пар: A и B, C и D, B и C и вывести новые значения A, B, C,
D.
*/

    /*
   int a, b, c, d;
   cout << "a ="; cin >> a;
   cout << "b ="; cin >> b;
   cout << "c ="; cin >> c;
   cout << "d ="; cin >> d;
   swap(a,b);
   swap(c,d);
   swap(b,c);
   cout << "a =" << a << endl
        << "b =" << b << endl
        << "c =" << c << endl
        << "d =" << d << endl;
    */

    /*
Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
ненулевыми вещественными числами A и B одну из арифметических операций и
возвращающую ее результат. Вид операции определяется целым параметром Op: 1
60
— вычитание, 2 — умножение, 3 — деление, остальные значения — сложение. С
помощью Calc выполнить для данных A и B операции, определяемые данными
целыми N1, N2, N3.
     */


        float A, B;
        int N1, N2, N3;
        cout << "A ="; cin >> A;
        cout << "B ="; cin >> B;
        cout << "N1 ="; cin >> N1;
        cout << "N2 ="; cin >> N2;
        cout << "N3 ="; cin >> N3;
        cout<<"N1 = "<<Calc (A, B, N1)<< endl
            <<"N2 = "<<Calc (A, B, N2)<< endl
            <<"N3 = "<<Calc (A, B, N3)<< endl;

        /*
Описать функцию Leng(xA, yA, xB, yB) вещественного типа, находящую длину
отрезка AB на плоскости по координатам его концов: |ܤܣ= |
஻ݔ − ஺ݔ)ඥ
)
஻ݕ − ஺ݕ) + ଶ
)
ଶ, (xA, yA, xB, yB — вещественные параметры). С
помощью этой функции найти длины отрезков AB, AC, AD, если даны координаты
точек A, B, C, D.
         */

        float xa,xb,xc,xd,ya,yb,yc,yd;
        cout << "xa ="; cin >> xa;
        cout << "xb ="; cin >> xb;
        cout << "xc ="; cin >> xc;
        cout << "xd ="; cin >> xd;
        cout << "ya ="; cin >> ya;
        cout << "yb ="; cin >> yb;
        cout << "yc ="; cin >> yc;
        cout << "yd ="; cin >> yd;
        cout << "AB = " << Leng(xa, ya, xb, yb) << endl
             << "AC = " << Leng(xa, ya, xc, yc) << endl
             << "AD = " << Leng(xa, ya, xd, yd) << endl;



        /*
Реализовать функцию ݕ)݂ = ݔ .(Протабулировать функцию.

         */

        int n1, n2;
        float i, x, y;
        cout << "n1 ="; cin >> n1;
        cout << "n2 ="; cin >> n2;
        cout << "i ="; cin >> i;
        cout << "x ="; cin >> x;
        cout << Tabyl(n1,n2,i,x);

    return 0;
}
