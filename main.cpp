#include <iostream>

using namespace std;

int liczba, cyfra;
int main()
{
    cout << "Podaj liczbe calkowita dodatnia: " << endl;
    cin >> liczba;

    if(liczba%2==0)
    {
        cout <<"Podales liczbe parzysta, ";
    }
    else
    {
        cout << "Podales liczbe nieparzysta, ";
    }

    bool prawdziwosc = true;
        while(liczba > 10){
    int cyfra = liczba % 10;
        if(cyfra% 2 == 1){
    prawdziwosc = false;
        break;
    }
    liczba /= 10;
    }
    if(prawdziwosc){
        cout << "TAK" << endl;
}
    else{
        cout << "NIE" << endl;
}
    return 0;
}
