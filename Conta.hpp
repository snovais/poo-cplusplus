#pragma once
#include <string>

class Conta {
    private:
        std::string numero;
        std::string cpfTitular;
        std::string nomeTitular;
        float saldo;

    public:
        Conta(std::string numero, std::string cpfTitular, std::string nomeTitular);
        ~Conta();
        void sacar(float valorASacar);
        void depositar(float valorADepositar);
        float recuperaSaldo() const;
        float recuperaNumero() const;
        float recuperaCpfTitular() const;
        float recuperaNomeTitular() const;
};


