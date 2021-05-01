//Matheus Toledo

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, tamanho;
    string palavra;
    
    cout << "Quantos casos de testes?"<< endl;
    cin >> n;
    
   for(int i = 0; i <= n; ++i)
   {
         cout << "\nDigite uma palavra\n";

         getline(cin, palavra);

         if(i == 0)
         continue;

         tamanho = palavra.length();
         vector<char> vetor(tamanho);

        //Primeira passada.	

        for(int j = 0; j < tamanho; j++)
        {
            vetor[j] = palavra[j];
        }

        for(int j = 0; j < tamanho; j++)
        {
            if((vetor[j] >= 'a' && vetor[j] <= 'z') || (vetor[j] >= 'A' && vetor[j] <= 'Z'))
            {
                vetor[j] = vetor[j] + 3; //três posições para à direita
            }
        }

        //Segunda passada.

         reverse(vetor.begin(), vetor.begin() + tamanho); //reverso

        //Terceira passada.

        for(int j = (tamanho/2); j < tamanho; j++)
        {
               if(vetor[j] != ' ')
                vetor[j] = vetor[j] - 1; //trunca e uma posição a esquerda
        }

        for(int j = 0; j < (tamanho/2); j++)
        {

            for(int j = (tamanho/2); j < tamanho; j++)
            {
                if(vetor[j] != ' ')
                    cout << vetor[j];
            }

            cout << endl;
        }
   }
    
    return 0;
}
