import java.util.Locale;
import java.util.Scanner;

public class Diagonal_matriz {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        int[][] mat = new int[N][N];

        for (int i=0; i<mat.length; i++) {
            for (int j=0; j<mat[i].length; j++) {
            	System.out.printf("Elemento [%d,%d]: ", i, j);
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("DIAGONAL PRINCIPAL:");
        for (int i=0; i<mat.length; i++) {
            System.out.println(mat[i][i] + " ");
        }



        int count = 0;

        for (int i=0; i<mat.length; i++) {
            for (int j=0; j<mat[i].length; j++) {
                if (mat[i][j] < 0) {
                    count++;

                }

            }
        }

        System.out.println("QUANTIDADE DE NEGATIVOS = " + count);

        sc.close();
  }
}
