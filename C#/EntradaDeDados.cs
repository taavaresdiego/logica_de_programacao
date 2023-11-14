using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C#
{
    public class EntradaDeDados
    {
        string nome1, nome2;
        int idade1, idade2;
        double salario1, salario2;
        char sexo;

        Console.WriteLine("Digite o nome da primeira pessoa: ");
        nome1 = Console.ReadLine();
        Console.WriteLine("Digite a idade da primeira pessoa: ");
        idade1 = int.Parse(Console.ReadLine());
        Console.WriteLine("Digite o salário da primeira pessoa: ");
        salario1 = double.Parse(Console.ReadLine());
        Console.WriteLine("Digite o nome da segunda pessoa: ");
        nome2 = Console.ReadLine();
        Console.WriteLine("Digite a idade da segunda pessoa: ");
        idade2 = int.Parse(Console.ReadLine());
        Console.WriteLine("Digite o salário da segunda pessoa: ");
        salario2 = double.Parse(Console.ReadLine());
            

    }
}