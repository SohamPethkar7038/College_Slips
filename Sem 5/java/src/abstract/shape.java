abstract class Shape {
    abstract void printArea();
}

class Rectangle extends Shape {
    int l, b;

    Rectangle(int l, int b) {
        this.l = l;
        this.b = b;
    }

    void printArea() {
        System.out.println("Rectangle Area: " + (l * b));
    }
}

class Circle extends Shape {
    int radius;

    Circle(int radius) {
        this.radius = radius;
    }

    void printArea() {
        System.out.println("Circle Area: " + (Math.PI * radius * radius));
    }
}

class Triangle extends Shape {
    int base, height;

    Triangle(int base, int height) {
        this.base = base;
        this.height = height;
    }

    void printArea() {
        System.out.println("Triangle Area: " + (0.5 * base * height));
    }
}

public class shape{
    public static void main(String[] args) {
        Shape rectangle = new Rectangle(5, 10);
        rectangle.printArea();

        Shape circle = new Circle(7);
        circle.printArea();

        Shape triangle = new Triangle(6, 8);
        triangle.printArea();
    }
}
