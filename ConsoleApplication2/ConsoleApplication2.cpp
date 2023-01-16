#include <iostream>
using namespace std;

int main()
{
    int a[] = { 9,4,4,5,6,6,9,12 };
    int lewo = 0;
    int prawo = 1;
    do{
        int tmp = a[lewo];
        a[lewo] = a[prawo]; 
        a[prawo] = tmp;
        lewo++;
        prawo++;
    } while (a[lewo] > a[prawo]);


    for (int i = 0;i < 8;i++) {
        cout << a[i] << " ";
    }

    return 0;
}