#include "Conta.hpp"
#include <iostream>


Conta::Conta(std::string numero, std::string cpfTitular, std::string nomeTitular)
{
    this->numero = numero;
    this->cpfTitular = cpfTitular;
    this->nomeTitular = nomeTitular;
    this->saldo = 0;
}

void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0)
    {
        std::cout << "Valor invalido" << std::endl;
        return;
    }
    if (valorASacar > conta.saldo)
    {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    else 
    {
        conta.saldo -= valorASacar;
    }
}


void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0)
    {
        std::cout << "Valor invalido" << std::endl;
        return;
    }
    else
    {
        conta.saldo += valorADepositar;
    }
}


float Conta::recuperaSaldo() const
{
    return this -> saldo;
}


Conta::~Conta()
{
    std::cout << "Conta destruida" << std::endl;
}