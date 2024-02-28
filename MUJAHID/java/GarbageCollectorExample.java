public class GarbageCollectorExample {
    public static void main(String[] args) {
        // Creating an object
        MyClass obj1 = new MyClass();
        
        // Assigning null to the object reference
        obj1 = null;
        
        // Explicitly invoking the Garbage Collector (not recommended in regular code)
        System.gc();
    }
}

class MyClass {
    // Constructor
    MyClass() {
        System.out.println("Object created");
    }
    
    // Finalizer method (called by the Garbage Collector before the object is destroyed)
    protected void finalize() {
        System.out.println("Object destroyed");
    }
}