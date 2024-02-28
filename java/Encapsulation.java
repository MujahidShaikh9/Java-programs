public class Encapsulation {
    private int x;
    public void setX(int a){
        x=a;
    }

    public int getX(){
        return x;
    }

    public static void main(String[] args) {
        Encapsulation e = new Encapsulation();
        e.setX(100);
        System.out.println(e.getX());
    }
}
