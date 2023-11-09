import java.util.Locale;
import java.util.Scanner;

public class Matriz {
  public static void main(String[] args) {
   
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, N;
        System.out.print("Quantas linhas vai ter a matriz? ");
        M = sc.nextInt();
        System.out.print("Quantas colunas vai ter a matriz? ");
        N = sc.nextInt();

        int[][] mat = new int[M][N];

        System.out.println("Digite os valores da matriz:");
            for (int i=0; i<M; i++) {
                for (int j=0; j<N; j++) {
                    System.out.print("Elemento [" + i + "," + j + "]: ");
                    mat[i][j] = sc.nextInt();

                }
            }

        System.out.println("VALORES DIGITADOS:");
            for (int i=0; i<M; i++) {
                for (int j=0; j<N; j++) {
                    System.out.print(mat[i][j] + " ");
                }
                System.out.println();
            }


        sc.close();


  }
}
