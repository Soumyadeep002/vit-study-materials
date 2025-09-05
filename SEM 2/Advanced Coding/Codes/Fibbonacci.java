import java.util.*;

class Fibbonacci {
  public static void main(String[] args){
    int a = 0, b = 1;
    Scanner sc = new Scanner(System.in); 
    System.out.println("Enter number of terms till: ");
    int terms = sc.nextInt();
    sc.close();

    System.err.println("Fibonnacci Series till "+terms+" terms: \n"+a+ "\n"+b);
    for(int i = 2; i<terms; i++){
        int next = a+b;
        System.out.println(next);
        a = b;
        b = next; 
    }
  }    
}
