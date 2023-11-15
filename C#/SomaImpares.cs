using System;
using System.Globalization;

namespace SomaImparesApp
{
    public class SomaImpares
    {
        public void Calcular()
        {
            CultureInfo CI = new CultureInfo("en-US");

            Console.WriteLine("Digite dois numeros: ");
            int X = int.Parse(Console.ReadLine(), CI);
            int Y = int.Parse(Console.ReadLine(), CI);

            if (X > Y)
            {
                int troca = X;
                X = Y;
                Y = troca;
            }

            int soma = 0;
            for (int i = X + 1; i < Y; i++) 
            {
                if (i % 2 != 0)
                {
                    soma += i;
                }
            }

            Console.WriteLine("SOMA DOS IMPARES = " + soma);
        }
    }
}