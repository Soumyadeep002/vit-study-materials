import java.util.*;
public class ElularsPhi {

    public static int gcd(int a, int b){
        int rem;
        while(b != 0){
            rem = a % b;
            a = b;
            b = rem;
        }
        return a; 
    }    

    public static int phi(int n){
        int result = 0;
        for(int j = 2; j<=n; j++){
            if (gcd(j, n) == 1) {
                result++;
            }
        }
        return result;
    }


    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = scanner.nextInt();

        System.out.println("No of Phi: "+phi(n));
    }
}
