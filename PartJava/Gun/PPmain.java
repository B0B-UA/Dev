public class PPmain {
    public static void main (String[] args) throws Exception {
        Gun colt = new Gun("Colt", 3);
        Gun beretta = new Gun();

        colt.reload();
        colt.prepare();
        colt.shoot();colt.shoot();colt.shoot();
        beretta.reload();
        beretta.prepare();
        colt.show();
        beretta.show();
    }
}