using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C#
{
    public class VetoresEmC#
    {
       CultureInfo CI = CultureInfo.InvariantCulture; 
       int N;
       Console.WriteLine("Quantos número você vai digitar? ");
         N = int.Parse(Console.ReadLine());
         double[] vet = new double[N];

         for (int i = 0; i < N; i++) // o laço vai rodar até o valor de N (quantidade de números que o usuário vai digitar)
         {
             Console.WriteLine("Digite um número: "); // o usuário vai digitar um número até que o laço exceute o valor de N
             vet[i] = double.Parse(Console.ReadLine(), CI); // o valor digitado pelo usuário vai ser armazenado no vetor
         }
            Consoles.WriteLine();
            Console.WriteLine("Números digitados: ");   
            for (int i = 0; i < N; i++) // o laço vai rodar até o valor de N (quantidade de números que o usuário vai digitar)
            {
                Console.WriteLine(vet[i].ToString("F1", CI)); // o valor digitado pelo usuário vai ser armazenado no vetor
            }

    }
}