
public class FibonacciRecursion {

    static int fibonacci(int n) {
        if (n == 0) {
            return 0; // base case 1
        } else if (n == 1) {
            return 1; // base case 2
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
        }
    }

    public static void main(String[] args) {
        int terms = 10; 

        System.out.println("Fibonacci Series up to " + terms + " terms:");

        for (int i = 0; i < terms; i++) {
            System.out.print(fibonacci(i) + " ");
        }
    }
}