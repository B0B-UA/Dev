public class Complex {
    private double real;
    private double imaginary;

    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    public Complex() {
        this(0.0, 0.0);
    }

    public double getReal() {
        return this.real;
    }

    public double getImaginary() {
        return this.imaginary;
    }

    public boolean equals(Complex other) {
        return this == other;
    }

    public boolean notEquals(Complex other) {
        return this!= other;
    }

    public void increment(Complex other) {
        this.real += other.real;
        this.imaginary += other.imaginary;
    }

    public void decrement(Complex other) {
        this.real -= other.real;
        this.imaginary -= other.imaginary;
    }

    public Complex sum(Complex other) {
        increment(other);
        return this;
    }

    public Complex diff(Complex other) {
        decrement(other);
        return this;
    }

    public Complex multiply(Complex other) {
        double re = this.real;

        this.real = re*other.real - this.imaginary*other.imaginary;
        this.imaginary = re*other.imaginary + this.imaginary*other.real;
        return this;
    }

    public String toString() {
        return "(" + this.getReal() + (this.getImaginary() > 0 ? " + " : "" ) + this.getImaginary() + "i" + " )";
    }
}