using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C#
{
    public class Idades
    {
        CultureInfo CI = CultureInfo.InvariantCulture;

        string nome1, nome2;
        int idade1, idade2;
        double media;

        console.WriteLine("Dados da primeira pessoa: ");
        console.WriteLine("Nome: ");
        nome1 = console.ReadLine();
        console.WriteLine("Idade: ");
        idade1 = int.Parse(console.ReadLine());

        console.WriteLine("Dados da segunda pessoa: ");
        console.WriteLine("Nome: ");
        nome2 = console.ReadLine();
        console.WriteLine("Idade: ");
        idade2 = int.Parse(console.ReadLine());

        media = (idade1 + idade2) / 2.0;

        console.WriteLine("A idade media de " + nome1 + " e " + nome2 + " eh de " + media.ToString("F1", CI) + " anos.");

        
    }
}