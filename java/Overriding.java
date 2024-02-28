class Demo{
    public void show(){
        System.out.println("Demo");
    }
}

public class Overriding  extends Demo{
    public void show1() {
        System.out.println("hello");
    }

    public static void main(String[] args) {
        Overriding overriding = new Overriding();
        overriding.show();
    }

}
