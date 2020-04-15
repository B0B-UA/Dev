<?php
    class NotReady extends Exception {};
    class OutOfRounds extends Exception {};


    class Gun {
        private $amount;
        private $capacity;
        private $isReady;
        private $model;
        private $totalShots;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($model="Beretta", $capacity=8) {
            $this->model = $model;
            $this->capacity = $capacity;
        }

        public function __get($name) {
            return $this->$name;
        }

        public function prepare() {
            if ( !$this->isReady ) 
                $this->isReady = !$this->isReady;
        }

        public function reload() {
            $this->amount = $this->capacity;
        }

        public function shoot() {
            if ( !$this->isReady ) {
                throw new NotReady();
            }

            if ( $this->amount == 0 ) {
                throw new OutOfRounds();
            }
            $this->amount -= 1;
            $this->totalShots += 1;
            echo "Bang!!!" . PHP_EOL;
        }

        public function __toString() {
            return "Model - " . $this->model . " ( Capacity - " . $this->capacity . ", Amount - " . $this->amount . " )" . PHP_EOL;
        }
    }
    $colt = new Gun("Colt", 3);
    $beretta = new Gun();

    $colt->reload();
    $colt->prepare();
    $colt->shoot();
    $colt->shoot();
    $colt->shoot();
    $beretta->reload();
    $beretta->prepare();
    echo $colt;
    echo $beretta;
?>