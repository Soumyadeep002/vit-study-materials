import java.util.*;

class Palindrome{

    public static boolean BinaryPalindrome(int n){
        String s = Integer.toBinaryString(n);
        int i = 0, j = s.length() - 1;
        while(i<j){
            if(s.charAt(i) != s.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int x = sc.nextInt();
        System.out.println(BinaryPalindrome(x));
    }
}