import java.util.Locale;
import java.util.Scanner;

public class Soma_media_vetor {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        double soma, media;

        System.out.print("Quantos números inteiros serão lidos? ");
        N = sc.nextInt();

        double[] vet = new double[N];

        for (int i = 0; i < N; i++) {
            System.out.print("Digite um número: ");
            vet[i] = sc.nextDouble();
        }

        System.out.println("Números digitados: ");
        for (int i = 0; i < N; i++) {
            System.out.println(vet[i]);
        }

        soma = 0;

        for (int i = 0; i < N; i++) {
            soma = soma + vet[i];
        }

        System.out.printf("SOMA = %.2f%n", soma);

        media = soma / N;

        System.out.printf("MEDIA = %.2f%n", media);


        sc.close();
  }
}
