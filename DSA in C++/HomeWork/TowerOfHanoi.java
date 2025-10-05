// here I'm using recursive function to solve tower of hanoi
public class TowerOfHanoi{
    public static void solveTowerOfHanoi(int n, String Src, String Helper, String Destination){
        if (n==1) {    // base case 
          System.out.println("Transfer disk "+n+" from "+Src+" to "+Destination);
          return;  
        }
        solveTowerOfHanoi(n-1, Src, Destination, Helper); // transfer n-1 disk from source to helper
        System.out.println("Transfer disk "+n+" from "+Src+" to "+Destination);
        solveTowerOfHanoi(n-1, Helper,  Src, Destination); // transfer remaining n-1 disk from helper to destination. Values for src , dest and helper keep changing

    }
    public static void main(String[] args) {
        int n=2;
        solveTowerOfHanoi(n, "S", "H", "D");
    }
  
}