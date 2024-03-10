abstract class Animal {
    abstract void eat();

    abstract void sleep();
}

class Lion extends Animal {
    @Override
    void eat() {
        System.out.println("The lion is eating meat.");
    }

    @Override
    void sleep() {
        System.out.println("The lion is sleeping in the den.");
    }
}

class Tiger extends Animal {
    @Override
    void eat() {
        System.out.println("The tiger is hunting for prey.");
    }

    @Override
    void sleep() {
        System.out.println("The tiger is sleeping in the jungle.");
    }
}

class Deer extends Animal {
    @Override
    void eat() {
        System.out.println("The deer is grazing on grass.");
    }

    @Override
    void sleep() {
        System.out.println("The deer is sleeping in the meadow.");
    }
}

public class AnimalTest {
    public static void main(String[] args) {
        Lion lion = new Lion();
        Tiger tiger = new Tiger();
        Deer deer = new Deer();
        lion.eat();
        lion.sleep();

        tiger.eat();
        tiger.sleep();

        deer.eat();
        deer.sleep();
    }
}
