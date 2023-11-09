import java.util.Locale;
import java.util.Scanner;

public class Vetores {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        System.out.print("Quantos quartos serão alugados? ");
        N = sc.nextInt();

        int[] vet = new int[N];

        for (int i = 0; i < N; i++) {
            System.out.print("Digite um número: ");
            vet[i] = sc.nextInt();
        }

        System.out.println("Números digitados: ");
        for (int i = 0; i < N; i++) {
            System.out.println(vet[i]);
        }

        sc.close();
    }
}
