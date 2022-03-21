#include <iostream>

using namespace std;

int main()
{
 cout << "Ile liczb pierwszych chcesz wyświetlić?: ";
 unsigned int n, liczbap, liczbyt, dzielnik;
 bool t;  
 cin >> n;
 liczbap = 0;
 liczbyt = 2;
 while (liczbap < n)
 {
    t = true;
    for (dzielnik = 2; dzielnik < liczbyt; dzielnik++)
        if (liczbyt % dzielnik == 0)
        {
            t = false;
            break;
            }
    
if (t)
{
cout << liczbyt << " ";
liczbap++;
}
liczbyt++;
 }
cout << endl;
return 0;
}