#include <iostream>
#include <string>

/*
procedural impede o controle de estado de um programa
*/

using namespace std;


struct Conta
{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;
};


void sacar(Conta& conta, float valorASacar)
{
    if (valorASacar < 0)
    {
        cout << "Valor invalido" << endl;
        return;
    }
    if (valorASacar > conta.saldo)
    {
        cout << "Saldo insuficiente" << endl;
        return;
    }
    else 
    {
        conta.saldo -= valorASacar;
    }
}


void depositar(Conta& conta, float valorADepositar)
{
    if (valorADepositar < 0)
    {
        cout << "Valor invalido" << endl;
        return;
    }
    else
    {
        conta.saldo += valorADepositar;
    }
}


int main()
{
    Conta conta1;
    Conta conta2;

    conta1.numero = "12345-6";
    conta1.cpfTitular = "123.456.789-10";
    conta1.nomeTitular = "Joao da Silva";
    conta1.saldo = 1000.00;

    depositar(conta1, 500.00);    

    conta2.numero = "54321-2";
    conta2.cpfTitular = "987.654.321-20";
    conta2.nomeTitular = "Maria da Silva";
    conta2.saldo = 2000.00;

    sacar(conta2, 500.00);

    cout << "Conta 1: " << conta1.numero << endl;
    cout << "Titular: " << conta1.nomeTitular << endl;
    cout << "Saldo: " << conta1.saldo << endl;

    cout << "Conta 2: " << conta2.numero << endl;
    cout << "Titular: " << conta2.nomeTitular << endl;
    cout << "Saldo: " << conta2.saldo << endl;

    return 0;
}