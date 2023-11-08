#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca (std::string titular, double saldo, double taxaJuros): ContaBancaria(titular , saldo), _taxaJuros(taxaJuros) {}

void ContaPoupanca::calcularJuros() {
    double saldo = Get_saldo();
    double juros = saldo * _taxaJuros / 100;
    saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}


