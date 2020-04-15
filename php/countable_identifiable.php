<?php

    class MyClass {
            private static $Count = 0;
            private $id;

            public function __construct() {
                self::$Count++;
                $this->id = self::$Count;
            }
            
            public function __get($name) {
                return $this->$name;
            }

            public function __toString() {
                return "current id - " . $this->id . PHP_EOL;
            }

    };

        $f = new MyClass();
        echo $f . PHP_EOL;
        $s = new MyClass();
        echo $s . PHP_EOL;

?>