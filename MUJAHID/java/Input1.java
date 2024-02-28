import java.util.Scanner;

public class Input1{
    
    public int x= 10;

    public void show(){
        System.out.println("Hello");
    }
    
    public static void main(String[] args) {
        int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter values : ");
        a=sc.nextInt();
        b=sc.nextInt();

        System.out.println(a+b);

    }

}
