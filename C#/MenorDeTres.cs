using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C#
{
    public class MenorDeTres
    {
        CultureInfo CI = CultureInfo.InvariantCulture;

        int a, b, c, menor;

        console.WriteLine("Digite tres numeros: ");
        a = int.Parse(console.ReadLine());
        b = int.Parse(console.ReadLine());
        c = int.Parse(console.ReadLine());

        if (a < b && a < c)
        {
            menor = a;
        }
        else if (b < c)
        {
            menor = b;
        }
        else
        {
            menor = c;
        }
    }
}