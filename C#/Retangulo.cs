using System;
using System.Globalization;

namespace RetanguloApp
{
    public class Retangulo
    {
        public void Calcular()
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            Console.WriteLine("Base do retangulo: ");
            double largura = double.Parse(Console.ReadLine(), CI);
            Console.WriteLine("Altura do retangulo: ");
            double altura = double.Parse(Console.ReadLine(), CI);

            double area = largura * altura;
            double perimetro = 2 * (largura + altura);
            double diagonal = Math.Sqrt(Math.Pow(largura, 2.0) + Math.Pow(altura, 2.0));

            Console.WriteLine("AREA = " + area.ToString("F4", CI));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));
        }
    }
}