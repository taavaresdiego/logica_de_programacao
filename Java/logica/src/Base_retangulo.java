import java.util.Locale;
import java.util.Scanner;
import java.lang.Math;

public class Base_retangulo {
  
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double base, altura, area, perimetro, diagonal;

        System.out.print("Digite a base do retângulo: ");
        base = sc.nextDouble();
        System.out.print("Digite a altura do retângulo: ");
        altura = sc.nextDouble();

        area = base * altura;
        perimetro = 2 * (base + altura);

        diagonal = Math.sqrt(Math.pow(base, 2) + Math.pow(altura, 2));

        System.out.printf("AREA = %.4f%n", area);
        System.out.printf("PERIMETRO = %.4f%n", perimetro);
        System.out.printf("DIAGONAL = %.4f%n", diagonal);

        sc.close();

  }
}
