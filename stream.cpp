#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    int total = 0;
    int menu = 0;

    do
    {
        cout << "Bem-vindo ao calcsweet" << endl;
        cout << "------Menu principal------" << endl;
        cout << "\t0 - Sair do programa " << endl;
        cout << "\t1 - Calculadora" << endl;
        cout << "menu->";
        cin >>  menu;
        cout << "\t\t>> " << menu << endl;

        if(menu != 0)
        {
            int menuInterno = 0;
            do
            {
                int valor = 0;
                system("CLS");
                cout << "\t0 - Voltar ao menu principal" << endl;
                cout << "\t1 - somar com" << endl;
                cout << "\t2 - Subtrair de" << endl;
                cout << "\t4 - multiplicar com " << endl;
                cout << "\t5 - multiplicar com " << endl;
                cout << "\total " << total << endl;
                cout << "Digite a opcao desejada: " << endl;
                cout << "Menu> " << endl;
                cin >> menuInterno;

                if(menuInterno != 5 && menuInterno != 0)
                {
                    cout << "Calc>" << total << ((menuInterno == 1)? "+" : (menuInterno == 2)? "-":(menuInterno == 3)? "*": "/");
                    cin >> valor;
                }
                if(menuInterno != 0)
                {
                    switch(menuInterno)
                    {
                        case 1:
                            total += valor;
                            break;
                        case 2:
                            total -= valor;
                        case 3:
                            total *= valor;
                        case 4:
                            total /= valor;
                            break;
                        case 5:
                            cout << "\t\t-----------------------------------" << endl;
                            cout << "\t\tValor total: " << total << endl;
                            cout << "---------------------------------------" << endl;
                            break;
                    }
                }

            }while(menuInterno != 0);
        }

    }while(menu != 0);
    
    return 0;
}
