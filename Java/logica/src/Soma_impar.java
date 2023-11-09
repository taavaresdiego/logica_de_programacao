import java.util.Locale;
import java.util.Scanner;

public class Soma_impar {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int y, x, troca, soma;

        System.out.print("Digite o primeiro valor: ");
        x = sc.nextInt();
        System.out.print("Digite o segundo valor: ");
        y = sc.nextInt();

        if (x > y) {
            troca = x;
            x = y;
            y = troca;
        }

        soma = 0;

        for (int i = x+1; i < y; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }

        System.out.println("SOMA DOS IMPARES = " + soma);

        sc.close();
  }
}
