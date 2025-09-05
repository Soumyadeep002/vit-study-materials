import java.util.*;

class Euclidean {
    public static void main(String[] args){
        Scanner scaner = new Scanner(System.in);
        System.out.println("Enter 1st number: ");
        int n1 = scaner.nextInt();
        System.out.println("Enter 2nd number: ");
        int n2 = scaner.nextInt();

        int rem;

        while(n2 != 0){
            rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        System.err.println("GCD is: "+n1);
    }
}
