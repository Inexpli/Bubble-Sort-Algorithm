#include <iostream>
#include <iomanip>

using namespace std;

int const rozm = 10;
int a[rozm];
int k = 0;

void generujListe() {
    srand(time(NULL));
    for (int i = 0; i < rozm; i++) {
        a[i] = rand() % 100;
    }
}

int main()
{
    generujListe();
    do {
        k = 0;
        for (int i = 0; i < rozm-1; i++) {
            if (a[i] > a[i + 1]) {
                int p = a[i + 1]; 
                a[i+1] = a[i];
                a[i] = p;     
                k++;
            }
            for (int i = 0; i < rozm; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
        cout << '\n';
    } while (k > 0);
    
    cout << "\n";

    for (int i = 0; i < rozm; i++) {
        cout << a[i]<<" ";
    }
}