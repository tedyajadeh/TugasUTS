# TugasUTS

##Soal1.cpp : A Diinputkan 2, dan B diinputkan 4

**Alur algoritma**
1. mendeklarasikan int A,B,X,Y;
2. mengisi nilai Masukan Bilangan X dan Y
3. menghitung 
    X = A;
    Y = B;
    {if(X != Y )
        {if ( X < Y  )
                {  X = X + A;}
        else
                { Y = Y + B;}

**code program lengkap**
'''c++
#include <iostream>

using namespace std;

int main()
{
    int A,B,X,Y;

    cout << "masukan bilangan X: ";
    cin >> A;
    cout << "masukan bilangan Y: ";
    cin >> B;

    X = A;
    Y = B;
    {if(X != Y )
        {if ( X < Y  )
                {  X = X + A;}
        else
                { Y = Y + B;}
    }

    cout << X;

    }



###Soal2.cpp : Apa yg Tercetak oleh algoritma disamping, bila variable N diisi dengan 2 digit terakhir NIM Saudara.

**Alur algoritma**
1. mendeklarasikan int N,X,T,Batas;
2. mengisi nilai N,Batas,X,Y
3. menghitung while( T <= Batas)
    {   T = T + X;
        X = X + 10;

    }
    cout << T;


**code program lengkap**
'''c++
#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 78;
Batas = 78 + 100;
X = 20;
T = 78;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;

    }
    cout << T;
}
