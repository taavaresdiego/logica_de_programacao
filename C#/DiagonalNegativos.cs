using System;
using System.Globalization;

namespace DiagonalNegativosApp
{
    public class DiagonalNegativos
    {
        public void ContarNegativos()
        {
            CultureInfo CI = new CultureInfo("en-US");

            Console.WriteLine("Qual a ordem da matriz? ");
            int N = int.Parse(Console.ReadLine(), CI);

            int[,] mat = new int[N, N];

            for (int i = 0; i < N; i++){
                for (int j = 0; j < N; j++){
                    Console.WriteLine("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine(), CI);
                }
            } 

            Console.WriteLine("DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < N; i++){
                Console.Write(mat[i, i] + " ");
            }
            Console.WriteLine();

            int negativos = 0;
            for (int i = 0; i < N; i++){
                for (int j = 0; j < N; j++){
                    if (mat[i, j] < 0){
                        negativos++;
                    }
                }
            }
            Console.WriteLine("QUANTIDADE DE NEGATIVOS = " + negativos);
        }
    }
}