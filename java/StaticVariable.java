class Student{
    int rollno;
    String  name;
    static String college ="VVP";
    
    Student(int r,String n)
    {
        rollno=r;
        name=n;
    }
    void display(){
        System.out.println(rollno+" "+name+" "+college);
    }
}
public class StaticVariable {
    public static void main(String[] args) {
        Student s1 = new Student(101,"karan");
        Student s2 = new Student(102,"aryan");
        s1.display();
        s2.display();
    }    
}
