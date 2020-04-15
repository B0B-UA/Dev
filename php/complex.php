<?php
    class Complex {
        private $real;
        private $imaginary;


        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($real=0, $imaginary=0) {
            $this->real = $this->validate($real);
            $this->imaginary = $this->validate($imaginary);
        }

        public function __get($name) {
            return $this->$name;
        }

        public function __toString() {
            if ( $this->imaginary == 0 ) {
                return sprintf("%g", $this->real);
            } else if ( $this->real == 0 ) {
                return sprintf("%g", $this->imaginary) . 'i';
            }
            return sprintf("%g%+g", $this->real, $this->imaginary) . 'i';
        }

    

    public function increment(Complex $other) {
        $this->real += $other->real;
        $this->imaginary += $other->imaginary;
    }

    public function decrement(Complex $other) {
        $this->real -= $other->real;
        $this->imaginary -= $other->imaginary;
    }

    public function plus(Complex $other) {
        $result = new Complex;
        
        $result->real += $other->real;
        $result->imaginary += $other->imaginary;
        
        return $result;
    }

    public function minus(Complex $other) {
        $result = new Complex;
        
        $result->real -= $other->real;
        $result->imaginary -= $other->imaginary;
        
        return $result;
    }

    public function multiply(Complex $other) {
        $result = new Complex;
        
        $result->real = $this->real * $other->real - $this->imaginary * $other->imaginary;
        $result->imaginary = $this->real * $other->imaginary + $this->imaginary * $other->real;
        
        return $result;
    }
}
    function compare($real, $imaginary) {
        if ( $real == $imaginary ) {
            echo $real . " is equal to " . $imaginary . PHP_EOL;
        } else {
            echo $real . " is not equal to " . $imaginary . PHP_EOL;
        }
    }

    function isTheSameInstance($real, $imaginary) {
        if ( $real === $imaginary ) {
            echo $real . " and " . $imaginary . " is references to the same instance" . PHP_EOL;
        } else {
            echo $real . " and " . $imaginary . " is different instances" . PHP_EOL;
        }
    }
    $a = new Complex(2.1, 5.1);
    $b = new Complex(3.5, 7.3);
    $c = new Complex(3.5, 7.3);
    $d = $a;
    $e = clone $a;

    echo "a: " . $a . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;

    compare($a, $b);
    compare($b, $c);

    isTheSameInstance($a, $b);
    isTheSameInstance($a, $d);

    $a->increment($b);
    $c->decrement($d);
    $b->multiply($e);

    echo "a: " . $a . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;

?>