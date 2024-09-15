import java.util.Scanner;

public class javaop {
    static void printMatrix(int a[][]){
        System.out.println();
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int row1,col1,row2,col2;

        // matrix a 
        System.out.println("Enter row of matrix 1");
        row1 = sc.nextInt();
        System.out.println("Enter col of matrix 1");
        col1 = sc.nextInt();
        
        int a[][] = new int[row1][col1];
        System.out.println("Enter elements");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
            // cin>>a[i][j];
            a[i][j]=sc.nextInt();

            }
        
        }
        printMatrix(a);

        // matrix b 
        System.out.println("Enter row of matrix 2");
        row2 = sc.nextInt();
        System.out.println("Enter col of matrix 2");
        col2 = sc.nextInt();
        
        int b[][] = new int[row2][col2];
        System.out.println("Enter elements");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
            // cin>>a[i][j];
            b[i][j]=sc.nextInt();

            }
        
        }
        printMatrix(b);

        if (col1!=row2) {
            System.out.println("Multiplication can't be done ");
            System.exit(0);
        }

        // matrix c 
        int c[][] = new int[row1][col2];

        for (int i = 0; i < c.length; i++) {
            for (int j = 0; j < c[i].length; j++) {
                int temp = 0;
                for (int k = 0; k < col1; k++) {
                    temp = temp + a[i][k]*b[k][j];
                }
                c[i][j] = temp;
            }
        }
        
        // printMatrix(a);
        
        // printMatrix(b);
        
        printMatrix(c);
    }
}
