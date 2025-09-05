import java.util.*;

class Practice1{

    public static boolean isStobogramatic(int n){
        String number = Integer.toString(n);
        int left = 0, right = number.length() - 1;
        while(left <= right){
            if ( (number.charAt(left) == '0' && number.charAt(right) == '0' )||
                 (number.charAt(left) == '1' && number.charAt(right) == '1' )||
                 (number.charAt(left) == '6' && number.charAt(right) == '9' )||
                 (number.charAt(left) == '8' && number.charAt(right) == '8' )||
                 (number.charAt(left) == '9' && number.charAt(right) == '6' ) ) {
                    left++;
                    right--;
            }
            else{
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        System.out.println(isStobogramatic(num));

    }
}