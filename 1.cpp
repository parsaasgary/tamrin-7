#include <iostream>
#include <conio.h>

using namespace std;

int fibo(int number);

int main()
{
    int n = 0;
    while (true)
    {
        
        if (fibo(n) <= 1000)
            cout << fibo(n) << "\t";
        else
            break;
        
        n++;

    }
}

int fibo(int x) {
    if ((x == 0) || (x == 1))
    {
        return x;
    }
    else {
        return fibo(x - 1) + fibo(x - 2);
    }
}
