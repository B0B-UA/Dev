public class PPmain {
    public static void main (String[] args) throws Exception {
        Point a = new Point(1.1, 2.2);
        Point b = new Point(3.3, 4.4);

        Car volvo = new Car(70, 0.7, new Point(1.2, 3.4), "Volvo");
        volvo.show();
        volvo.drive(b);
        volvo.refill(1);
        volvo.getFuelAmount();
        volvo.show();
        Car dfdf = new Car();
        dfdf.drive(10, 10);
        dfdf.refill(2);

        dfdf.show();
    }
}