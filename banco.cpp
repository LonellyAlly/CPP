#include <iostream>
using namespace std;

int main() {
    char op;
    float valor, total = 0, saque;

    do {
        cout << "Selecione uma das seguintes opcoes: " << endl;
        cout << "1-Deposito" << endl;
        cout << "2-Saque" << endl;
        cout << "3-Saldo" << endl;
        cout << "x-Sair" << endl;
        cin >> op;

        switch (op) {
            case '1':
                cout << "Insira um valor para deposito: ";
                cin >> valor;
                if (valor <= 0) {
                    cout << "Valor invalido" << endl;
                } else {
                    total += valor;
                }
                break;
            case '2':
                cout << "Insira um valor para saque: ";
                cin >> saque;
                if (saque <= 0 || (total - saque) < 0) {
                    cout << "Valor invalido ou maior do que disponivel na conta" << endl;
                } else {
                    total -= saque;
                    cout << "Saldo: " << total << endl;
                }
                break;
            case '3':
                cout << "Saldo: " << total << endl;
                break;
            case 'x':
                break;
            default:
                cout << "Opcao invalida" << endl;
        }

    } while (op != 'x');

    return 0;
}

