public class parameterizedconstructor {
    int id;
    int id1;
    parameterizedconstructor(int a,int b){
    id=a;
    id1=b;
    }
    void dispaly()
    {
        System.out.println(id+id1);
    }
public static void main(String args[]){
    parameterizedconstructor para = new parameterizedconstructor(4,6);
    para.dispaly();

}
}
