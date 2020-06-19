class Person {
    int id;
    String name;

    Person(int id, String name){
        this.id = id;
        this.name = name;
    }
}

public class PassBy {
    public static void main(String... args) {
        Person p1 = new Person(1, "Person1.0");
        Person p2 = new Person(2, "Person2.0");
        Person p3 = new Person(3, "Person3.0");
        Person p4 = new Person(4, "Person4.0");
        int a = 1, b = 2;

        System.out.println();
        System.out.println("*-----Swap By Value-----*");
        System.out.println("Before : a is "+a+", b is "+b);
        swapByValue(a, b);
        System.out.println("After  : a is "+a+", b is "+b);
        System.out.println();

        System.out.println("*-----Swap By Reference Type-----*");
        System.out.println("Before : p1 is "+p1+", p2 is "+p2);
        System.out.println("Before : p1 id is "+p1.id+", p1 name is "+p1.name+"; p2 id is "+p2.id+", p2 name is "+p2.name);
        swapByReferenceType(p1, p2);
        System.out.println("After  : p1 is "+p1+", p2 is "+p2);
        System.out.println("After : p1 id is "+p1.id+", p1 name is "+p1.name+"; p2 id is "+p2.id+", p2 name is "+p2.name);
        System.out.println();

        System.out.println("*-----Swap By Object Manipulation-----*");
        System.out.println("Before : p3 is "+p3+", p4 is "+p4);
        System.out.println("Before : p3 id is "+p3.id+", p3 name is "+p3.name+"; p4 id is "+p4.id+", p4 name is "+p4.name);
        swapByObjectManipulation(p3, p4);
        System.out.println("After  : p3 is "+p3+", p4 is "+p4);
        System.out.println("After  : p3 id is "+p3.id+", p3 name is "+p3.name+"; p4 id is "+p4.id+", p4 name is "+p4.name);
        
    }

    static void swapByValue(int a, int b) {
        System.out.println("Enters : a is "+a+", b is "+b);
        int temp = a;
        a = b;
        b = temp;
        System.out.println("Exits  : a is "+a+", b is "+b);
    }

    static void swapByReferenceType(Person p1, Person p2) {
        System.out.println("Enters : p1 is "+p1+", p2 is "+p2);
        Person temp = p1;
        p1 = p2;
        p2 = temp;
        System.out.println("Exits  : p1 is "+p1+", p2 is "+p2);
    }

    static void swapByObjectManipulation(Person p3, Person p4) {
        System.out.println("Enters : p3 is "+p3+", p4 is "+p4);
        Person temp = p3;
        p3.id = p3.id;
        p3.name = p3.name;
        p4.id = temp.id;
        p4.name = temp.name;
        System.out.println("Exits  : p3 is "+p3+", p4 is "+p4);
    }
}