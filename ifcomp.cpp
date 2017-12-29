// 13:
#include <iostream>
using namespace std;

int main(void)
{
  int idade;
  char sexo;

  cout << "Qual a sua idade?" << endl;
  cin >> idade;
  cout << "Digite (m)para Masculino, (f)para Feminino" << endl;
  cin >> sexo;

  if (idade >= 18)
  {
    cout << "Você pode dirigir" << endl;

    if (sexo == 'm')
    {

      cout << "Você precisa ir no Serviço Militar" << endl;
    }
  }
  else
  {
    if (idade > 16)
    {
      cout << "Você já pode votar" << endl;
    }
    else
    {
      cout << "Você não pode votar nem dirigir" << endl;
    }
  }

  return 0;
}
