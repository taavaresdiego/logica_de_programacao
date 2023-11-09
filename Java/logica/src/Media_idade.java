import java.util.Locale;
import java.util.Scanner;

public class Media_idade {
  public static void main(String[] args) {
    
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        String nome1, nome2;
        int idade1, idade2;
        double media;

        System.out.println("Digite o nome da primeira pessoa: ");
        nome1 = sc.nextLine();

        System.out.println("Digite a idade da primeira pessoa: ");
        idade1 = sc.nextInt();

        // Consumir a quebra de linha pendente
        sc.nextLine();

        System.out.println("Digite o nome da segunda pessoa: ");
        nome2 = sc.nextLine();

        System.out.println("Digite a idade da segunda pessoa: ");
        idade2 = sc.nextInt();

        media = (double) (idade1 + idade2) / 2;

        System.out.printf("A idade média de %s e %s é de %.1f anos", nome1, nome2, media);

        sc.close();
  }
}
