import java.util.*;
class SwapNibble{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();
        int swapnum;
        swapnum = ((num & 0x0F)<< 4 | (num & 0x0F)>>4);
        System.out.println("Before swapping the nibble: "+num);
        System.out.println("After swapping the nibble: "+swapnum);
        sc.close();
    }
}