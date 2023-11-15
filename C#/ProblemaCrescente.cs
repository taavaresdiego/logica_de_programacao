using System;
using System.Globalization;

namespace ProblemaCrescenteApp
{
    public class ProblemaCrescente
    {
        public void VerificarOrdem()
        {
            CultureInfo culture = new CultureInfo("en-US");

            Console.WriteLine("Digite dois numeros: ");
            int X = int.Parse(Console.ReadLine(), culture);
            int Y = int.Parse(Console.ReadLine(), culture);

            while (X != Y)
            {
                if (X < Y)
                {
                    Console.WriteLine("Crescente");
                }
                else
                {
                    Console.WriteLine("Decrescente");
                }
                Console.WriteLine("Digite dois numeros: ");
                X = int.Parse(Console.ReadLine(), culture);
                Y = int.Parse(Console.ReadLine(), culture);
            }
        }
    }
}