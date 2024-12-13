/*
* Autor: Murilo Alessandro da Silva Moura
* Linguagem: C++
* Data: 13/12/2024
* Descrição: Uma calculadora para contas básicas em C++
* Funcionalidades: Contas de adição, subtração, multiplicação, divisão, porcentagem e potenciação
* Versão: C++
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

/* Cria 3 variáveis, duas double e uma string */
  
    double A = 0, B = 0;
    string conta;

/* Mostra uma imagem na tela para digitar o input */
  
    cout << "Digite o cálculo que deseja fazer: (+, -, x, :, %)" << endl;

/* Define a variavel conta como input */
  
    cin >> conta;

/* Pede um valor para fazer o cálculo */
  
    cout << "Digite o primeiro numero que deseja para fazer a conta" << endl;

/* Define a variavel A como input */
  
    cin >> A;

/* Pede um valor para fazer o cálculo */
  
    cout << "Digite o segundo numero que deseja para fazer a conta" << endl;

/* Define a variavel B como input */
  
    cin >> B;


/* Estrutura de condição que se conta for igual a alguma das operações "+, -, x, :, %, ^", e caso for algum dos caracteres, faz a conta respectiva */

  
    if (conta == "+") {
        cout << fixed << setprecision(2) << A + B << endl;
    }
    else if (conta == "-") {
        cout << fixed << setprecision(2) << A - B << endl;   
    }
    else if (conta == "x") {
        cout << fixed << setprecision(2) << A * B << endl;
    }
    else if (conta == ":") {
        if (B != 0) {
            cout << fixed << setprecision(2) << A / B << endl;
        }
      else {
          cout << "Erro: Divisão por zero não é permitida." << endl;
        }
    }
    else if (conta == "%") {
      cout << fixed << setprecision(2) << (B / 100) * A << endl;
    }
    else {
        cout << "Operação Inválida" << endl;
    }

  
    return 0;



}

