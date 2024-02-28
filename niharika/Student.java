public class Student {
    int id;
    int id1;
    Student(int a,int b){
    id=a;
    id1=b;
    }
    void dispaly()
    {
        System.out.println(id+id1);
    }
public static void main(String args[]){
    Student s1 = new Student(4,6);
    s1.dispaly();

}
}
