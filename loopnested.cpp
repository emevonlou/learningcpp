 // loop dentro de outro loop
 #include <iostream>
 using namespace std;

 int main(int argc, char *argv[])
 {
     int n = 1;

     while(n <= 10) // a cada interação do n, vamos contar 10 vezes o i
     {
         int i = 1;

        cout << "\nn: " << n << endl;
        n++;

         while(i <= 10)
         {
            cout << "i: " << i << endl;
            i++;    
         }
        cout << endl;
     }

     return 0;
 }