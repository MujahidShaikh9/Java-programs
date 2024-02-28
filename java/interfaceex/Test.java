package interfaceex;

interface A {

    void show();
    
    public static void display(){
        System.out.println("okay");
    }
} 


public class Test implements A {

    public void show() {
        System.out.println("bol");
    }

    public static void main(String[] args) {
        Test test = new Test();
        test.show();
        A.display();
    }
    
}
