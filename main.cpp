#include <iostream>
#include <random>
#include <stdlib.h>
#include <time.h>


using namespace std;

//Сгенерировать массив со случайными числами в диапазоне
void int_massiv(){
    srand(time(0));
    int a[10];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-10,10);



    for (int i = 0; i < 10; ++i) {
        a[i] = dist(gen);
        cout << a[i] << " ";
    }
    //cout << a[1,10] << " ";

}

//Вычислить сумму элементов массива:
//меньших 5, больших 6, меньших 4
void sym_massiv(){
    srand(time(NULL));
    int a[50];
    int sym =0, sym2 =0, sym3 =0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-25,25);
    for(int i=0; i<=50; i++){
        a[i]=dist(gen);
        if (a[i]> 6)
            sym = sym +a[i];
        if (a[i]<5)
            sym2 = sym2 +a[i];
        if (a[i]<4)
            sym3 = sym3 +a[i];

    }
    cout << sym << " " << sym2 << " " << sym3;

}


//Найти наибольший/наименьший элемент массива и его номер по порядку
void max_massiv(){
    srand(time(NULL));
    int a[50];
    int max = 0, min = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-100,100);
    for(int i=0; i<=50; i++){
        a[i]=dist(gen);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << max  << " " << min;
}



//Вычислить произведение отрицательных/положительных элементов массива
void ymn_massiv(){
    srand(time(NULL));
    int a[10];
    int max = 1, min = 1;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-100,100);
    for(int i=0; i<=10; i++){
        a[i]=dist(gen);
        if (a[i] > 0)
            max = a[i] * max;
        if (a[i] < 0)
            min = a[i] * min;
    }
    cout << max  << " " << min;
}


//Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
void massiv12(){
    srand(time(NULL));
    int a[10];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-100,100);
    for(int i=0; i<=10; i++){
        a[i]=dist(gen);
        if (a[i] % 2 == 0)
            a[i] = a[i] + 3;
        if (a[i] % 2 == 1)
            a[i] = a[i] * 2;
    }
    for (int i=0; i<=10; i++){
        cout << a[i] << " ";
    }
}

//Создать новый массив из двух других массивов путём операций над элементами
//массивов:сложения
void sym_2massiv(){
    srand(time(NULL));
    int a[10], b[10], c[10];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-100,100);
    for(int i=0; i<=10; i++){
        a[i]=dist(gen);
    }
    for(int i=0; i<=10; i++){
        b[i]=dist(gen);
    }
    for (int i = 0; i < 10; i++)
            c[i] = a[i] + b[i];
    cout << "Summ: ";
    for (int i = 0; i < 10; i++)
        cout << c[i] << " ";
    cout << endl;

}


struct Student {
        char name[20];
        int mark[3];
    };


int main()
{
    //int_massiv();
    //sym_massiv();
    //max_massiv();
    //ymn_massiv();
    //massiv12();
    //sym_2massiv();

    /*
. Имеется информация по итогам экзаменов в институте всего в списке N человек. По
каждому из студентов имеются следующие сведения: фамилия, оценка по
математике, оценка по информатике и оценка по физике
    */

    int n, count = 0, count1 = 0, sym = 0;
    cout << "n = ";
    cin >> n;
    Student* obj = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ": ";
        cin >> obj[i].name
            >> obj[i].mark[0]
            >> obj[i].mark[1]
            >> obj[i].mark[2];
    }

    for (int i=0;i < n; i++){
        cout << obj[i] << " " << obj[i].mark[0]
             << " " << obj[i].mark[1] << " "
             << obj[i].mark[2] << endl;

    }


    for (int i = 0; i < n; i++) {
        if ((obj[i].mark[0] == 5 && obj[i].mark[1] == 5 && obj[i].mark[2] == 5)) {
            count++;
            cout << obj[i].name << endl;
        }
        cout << count << endl;


     for (int i = 0; i < n; i++) {
         if ((obj[i].mark[0] == 2 || obj[i].mark[1] == 5 || obj[i].mark[2] == 2)) {
             count1++;
             cout << obj[i].name << endl;
         }
         cout << count1 << endl;

      for (int i = 0; i < n; i++) {
         sum = 0;
         sym = (obj[i].mark[0] + obj[i].mark[1] + obj[i].mark[2])/2;
         cout << obj[i].name << " "<< sym << endl;
         }


    }
    delete [] obj;
    system("pause");
    return 0;




    return 0;
}
