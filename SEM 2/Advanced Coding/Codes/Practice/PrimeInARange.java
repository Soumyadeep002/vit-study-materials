import java.util.*;

public class PrimeInARange {

    public static boolean isPrime(int num){
        if (num <= 1) {
            return false;
        }
        if (num == 2) {
            return true;
        }

        if (num%2 == 0) {
            return false;
        }
        for(int i = 3; i<=Math.sqrt(num); i++){
            if (num%i == 0) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Max Range: ");
        int num = scanner.nextInt();

        for(int i= 2; i<=num; i++){
            if (isPrime(i)) {
                System.out.println(i);
            }
        }
    }
}
