public class PPmain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Vector a = new Vector(2, 7);
        Vector b = new Vector(6, 8);
        Vector c = b.clone();
        Vector d = new Vector();
        System.out.println(a.toString());
        System.out.println(b.toString());
        System.out.println(c.toString());
        System.out.println(d.toString());
    }
}