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
