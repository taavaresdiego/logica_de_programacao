using System;
using System.Globalization;

namespace Matrizes
{
    public class MatrizesEmCSharp
    {
        public void Executar()
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            Console.WriteLine("Quantas linhas vai ter a matriz? ");
            int M = int.Parse(Console.ReadLine());
            Console.WriteLine("Quantas colunas vai ter a matriz? ");
            int N = int.Parse(Console.ReadLine());

            int[,] mat = new int[M, N];

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.WriteLine("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                }
            }
            Console.WriteLine();
            Console.WriteLine("Matriz digitada: ");
            for (int i = 0; i < M; i++) // o laço vai rodar até o valor de N (quantidade de números que o usuário vai digitar)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write(mat[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}