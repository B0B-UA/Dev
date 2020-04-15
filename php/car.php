<?php
    require_once(dirname(dirname(__FILE__)) . '/php/point.php');

    class OutOfFuel extends Exception {};
    class ToMuchFuel extends Exception {};

    class Car {
        private $fuelCapacity;
        private $fuelAmount;
        private $fuelConsumption;
        private Point $location;
        private $model;

        public function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($capacity=70, $consumption=0.6, Point $location=null, $model="BMV") {
            if ( $location == null ) {
                $location = new Point(0, 0);
            }
            $this->fuelCapacity = $this->validate($capacity);
            $this->fuelConsumption = $this->validate($consumption);
            $this->location = $location;
            $this->model = $model;
            $this->fuelAmount = $capacity;
        }

        public function __get($name) {
            return $this->$name;
        }

        public function drive(Point $destination) {
            $distance = $destination->distance($this->location);
            $checkFuel = $distance * $this->fuelConsumption;

            if ( $checkFuel <= $this->fuelAmount ) {
                $this->location = $destination;
                $this->fuelAmount -= $checkFuel;
            } else {
                throw new OutOfFuel("Out Of Fuel");
            }
        }

        public function refill($fuel) {
            if ( $this->fuelAmount <= 0 ) {
                $this->fuelAmount = 0;
                throw new OutOfFuel();
            }

            if ($fuel > $this->fuelCapacity - $this->fuelAmount) {
                throw new ToMuchFuel();
            } else {
                $this->fuelAmount += $fuel;
            }
        }

        public function __toString() {
            return "Model - " . $this->model . ", Location - " . $this->location . ", Amount - " . $this->fuelAmount;
        }
    }

        $a = new Point(1.1, 2.2);
        $b = new Point(3.3, 4.4);

        $volvo = new Car(70, 0.7, new Point(1.2, 3.4), "Volvo");
        echo $volvo . PHP_EOL;
        $volvo->drive($b);
        $volvo->refill(1);
        echo $volvo . PHP_EOL;
       

?>