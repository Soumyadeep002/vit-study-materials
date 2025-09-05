import java.util.*;
class BinaryPalindrome {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a Number: ");
        int s = scanner.nextInt();
        String bins = Integer.toBinaryString(s);


        int i = 0;
        int j = bins.length() - 1;

        boolean flag=false;

        while (i<j){
            if (bins.charAt(i) != bins.charAt(j)) {
                flag = false;
                break;
            } else {
                i++;
                j--;
                flag = true;
            }
        }

        if (flag) {
            System.out.println("It is a Palindrome Number");
        } else {
            System.out.println("It is not a Palindrome Number");
        }
    }    
}
