public class Gun {
    private int amount;
    private int capacity;
    private boolean isReady;
    private String model;
    private int totalShots;

    Gun(String model, int capacity) {
        this.model = model;
        this.capacity = capacity;
    }

    public Gun () {
        this("Beretta", 8);
    }

    public int getAmount() {
        return this.amount;
    }

    public int getCapacity() {
        return this.capacity;
    }

    public boolean ready() {
        return this.isReady;
    }

    public String getModel() {
        return this.model;
    }

    public int getTotalShots() {
        return this.totalShots;
    }

    public void prepare() {
        if ( !this.isReady ) 
            this.isReady = !isReady;
    }

    public void reload() {
        this.amount = this.capacity;
    }

    public void shoot() throws OutOfRounds, NotReady{
        if ( !this.ready() ) {
            throw new NotReady();
        }

        if ( amount == 0 ) {
            throw new OutOfRounds();
        }
        this.amount -= 1;
        this.totalShots += 1;
        System.out.println("Bang!!!");
    }

    public void show() {
        System.out.println("Model - " + this.getModel() + " ( Capacity - " + this.getCapacity() + ", Amount - " + this.getAmount() + " )");
    }
}