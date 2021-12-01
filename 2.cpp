#include <iostream>
#include <conio.h>

using namespace std;

int fibo(int number);

int main()
{
    int n;
    cout << "ta chand jomle mohasebe shavad?";
    cin >> n;
    for (int i = 0; i <= n; i++)
          cout << fibo(i) << "\t";
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
