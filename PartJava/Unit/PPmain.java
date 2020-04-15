public class PPmain {
    public static void main (String[] args) throws Exception {

        Unit a = new Unit("T34", 600, 130);
        Unit b = new Unit();
        a.attack(b);
        a.attack(b);
        a.attack(b);
        a.attack(b);
        a.attack(b);
        a.attack(b);
        a.attack(b);


        a.show();
        b.show();
    }
}