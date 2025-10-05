import java.util.Scanner;

public class fact {
    public static long calculateFactorial(int n) {
        if (n <= 1) {
            return 1;
        }

        return n * calculateFactorial(n - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter value of n:");
        int n = sc.nextInt();
        System.out.println(calculateFactorial(n));; 
        sc.close();

        // System.out.println(result);

        
    }
}
    
