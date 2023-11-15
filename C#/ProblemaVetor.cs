using System;
using System.Globalization;

namespace ProblemaVetorApp
{
    public class ProblemaVetor
    {
        public void CalcularMedia()
        {
            CultureInfo CI = new CultureInfo("en-US");

            Console.WriteLine("Digite o tamanho do vetor: ");
            int N = int.Parse(Console.ReadLine(), CI);

            double[] vet = new double[N];

            for (int i = 0; i < N; i++) {
                Console.WriteLine("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }

            Console.WriteLine();
            Console.WriteLine("VALORES = ");
            for (int i = 0; i < N; i++) {
                Console.WriteLine(vet[i]);
            }
            Console.WriteLine();

            double soma = 0;
            for (int i = 0; i < N; i++) {
                soma += vet[i];
            }

            double media = soma / N;

            Console.WriteLine("SOMA = " + soma.ToString("F2", CI));
            Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
        }
    }
}