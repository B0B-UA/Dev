public class PPmain {
    public static void main(String[] args) {
        Complex a = new Complex(2, 7);
        Complex b = new Complex(3, 8);
        Complex c = new Complex();

        System.out.println(a.toString());
        System.out.println(b.toString());
        System.out.println(c.toString());

        System.out.println(a.equals(b));
        System.out.println(b.notEquals(a));
        a.increment(b);
        System.out.println(a.toString());
        a.decrement(b);
        System.out.println(a.toString());

        a.sum(b);
        System.out.println(a.toString());
        a.diff(b);
        System.out.println(a.toString());
        a.multiply(b);
        System.out.println(a.toString());
    }
}