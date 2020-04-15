public class Car {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;

    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.location = location;
        this.model = model;
        this.fuelAmount = capacity;
    }

    public Car() {
        this(60, 0.7, new Point(0.0, 0.0),"Zaz");
    }

    public double getFuelAmount() {
        return this.fuelAmount;
    }

    public double getFuelCapacity() {
        return this.fuelCapacity;
    }

    public double getFuelConsumption() {
        return this.fuelConsumption;
    }

    public Point getLocation() {
        return this.location;
    }

    public String getModel() {
        return this.model;
    }

    public void drive(Point destination) throws OutOfFuel {
        double distance = destination.distance(location);
        double checkFuel = distance*fuelConsumption;

        if ( checkFuel <= fuelAmount ) {
            location = destination;
            fuelAmount -= checkFuel;
        } else {
            throw new OutOfFuel();
        }
    }

    public void drive(double x, double y) throws OutOfFuel {
        Point destination;
        destination = new Point (x, y);

        double distance = destination.distance(location);
        double checkFuel = distance*fuelConsumption;

        if ( checkFuel <= fuelAmount ) {
            location = destination;
            fuelAmount -= checkFuel;
        } else {
            throw new OutOfFuel();
        }
    }
    public void refill(double fuel) throws OutOfFuel, ToMuchFuel {
        if ( fuelAmount <= 0 ) {
            fuelAmount = 0;
            throw new OutOfFuel();
        }

        if (fuel > fuelCapacity - fuelAmount) {
            // fuelAmount = fuelCapacity;
            throw new ToMuchFuel();
        } else {
            fuelAmount += fuel;
        }
    }

    public void show() {
        System.out.println("Model - " + this.getModel() + " Location - " + this.getLocation() + " Amount - " + this.getFuelAmount());
    }
}