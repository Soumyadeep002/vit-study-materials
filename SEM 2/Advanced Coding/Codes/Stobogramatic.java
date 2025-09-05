class Stobogramatic{
    public static boolean isStobogramatic(String n){
        int left=0, right=n.length() - 1;
        while(left<=right){
            char leftChar = n.charAt(left);
            char rightChar = n.charAt(right);
            if ((leftChar == '0' && rightChar == '0') ||
                (leftChar == '1' && rightChar == '1') ||
                (leftChar == '6' && rightChar == '9') ||
                (leftChar == '8' && rightChar == '8') ||
                (leftChar == '9' && rightChar == '6')) {
                // Valid case, move pointers
                left++;
                right--;
            } else {
                // Invalid case
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        String n = "69";
        System.out.println(isStobogramatic(n));
    }
}