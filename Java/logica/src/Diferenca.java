import java.util.Locale;
import java.util.Scanner;

public class Diferenca {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int x,y;

        System.out.println("Digite o valor de X: ");
        x = sc.nextInt();
        System.out.println("Digite o valor de Y: ");
        y = sc.nextInt();

        while (x != y){
            if (x < y){
                System.out.println("CRESCENTE!");
            }
            else{
                System.out.println("DECRESCENTE!");
            }
            System.out.println("Digite o valor de X: ");
            x = sc.nextInt();
            System.out.println("Digite o valor de Y: ");
            y = sc.nextInt();
        }

        sc.close();

  }
}
