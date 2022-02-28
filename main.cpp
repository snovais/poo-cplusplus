#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
    Conta conta1 = Conta("12345", "12345678901", "Joao");
    Conta conta2 = Conta("54321", "9876543210", "Maria");

    conta1.depositar(100);
    conta2.depositar(200);

    cout << "Conta 1: " << conta1.recuperaSaldo() << endl;
    //cout << "Conta 2: " << conta2.recuperaSaldo() << endl;

    
    return 0;
}