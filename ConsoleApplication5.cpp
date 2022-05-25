#include<iostream>
using namespace std;

void kod(int n)
{
    long long a = 1, b = 0;
    for (int i = 0; i < n; i++)
    {
        cout << b << " ";
        b += a; 
        a = b - a; 
    }
}

int main()
{
    int n;
    cout << "Ile wyrazow ciagu wypisac: ";
    cin >> n;
    kod(n);
    return 0;
}