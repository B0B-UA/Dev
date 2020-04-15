public class Vector implements Cloneable {
    private double x;
    private double y;

    public Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Vector() {
        this(0.0, 0.0);
    }

    public double getX() {
        return this.x;
    }

    public double getY() {
        return this.y;
    }

    public void setX(double value) {
        this.x = value;
    }

    public void setY(double value) {
        this.y = value;
    }

    public double len() {
        return Math.hypot(this.x,this.y);
    }

    public boolean equals(Vector other) {
        return this.x == other.x && this.y == other.y;
    }

    public boolean notEquals(Vector other) {
        return this.x != other.x || this.y != other.y;
    }

    public void increment(Vector other) {
        this.x += other.x;
        this.y += other.y;
    }
    
    public void decrement(Vector other) {
        this.x -= other.x;
        this.y -= other.y;
    }

    public Vector sum(Vector other) {
        increment(other);
        return this;
    }

    public Vector diff(Vector other) {
        decrement(other);
        return this;
    }

    public Vector clone() throws CloneNotSupportedException {
        return (Vector) super.clone();
    }

    public String toString() {
        return "(" + this.x + ", " + this.y + ")";
    }
}