#include <iostream>
using namespace std;
int main(){
    int calif;
    cout << "Ingresa la calificacion: ";
    cin >> calif;
    if (calif >= 7){
        cout << "El alumno esta aprobado.";
    } else {
        cout << "El alumno ha reprobado." << endl;
    }
    system("pause");
    return 0;
}