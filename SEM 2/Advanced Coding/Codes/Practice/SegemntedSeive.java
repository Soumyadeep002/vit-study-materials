import java.util.*;

class SegemntedSeive{

    public static boolean isPrime(int num){
        if (num<=1) {
            return false;
        }
        if(num==2){
            return true;
        }

        if (num%2 == 0) {
            return false;
        }

        for(int i = 3; i<Math.sqrt(num); i++){
            if (num%i == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Lower Bound:");
        int l = scanner.nextInt();
        System.out.print("Enter Upper Bound:");
        int u = scanner.nextInt();

        for(int j = l; j<=u; j++){
            if (isPrime(j)) {
                System.out.println(j);
            }
        }

    }
}