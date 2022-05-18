#include <iostream>
#include <iomanip>

using namespace std;



int main()
{
    int hora, minuto, dia, mes;
    string ano;
    cin >> hora >> minuto >> dia >> mes >> ano;
    cout << setfill('0') << setw(2) << hora % 12<< ":" ;
    cout << setfill('0') << setw(2) <<  minuto << " " ;
    cout << setfill('0') << setw(2) <<  dia << "/" ;
    cout << setfill('0') << setw(2) << mes << "/";
    cout << ano.substr(2);
}

// hh:mm dd/mm/aa, sendo hora de 0 a 11.
//cout << setfill('0) << setw(2) << variavel;