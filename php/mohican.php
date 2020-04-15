<?php
    class Mohican {
        private static $Counter = 0;
        private $id;
        private static $last = null;
        public function __construct() {
            self::$last = $this;
            self::$Counter++;
            $this->id = self::$Counter;
        }
        public function __get($name) {
            return $this->$name;
        }

        public static function getMohican() { return self::$last;}

        public function __toString() {
            return "Last Mohican id - " . $this->id . PHP_EOL;
        }

    };

    $a = new Mohican();
    $b = new Mohican();
    // $c = new Mohican();
    $d = new Mohican();
    $e = new Mohican();
    $f = new Mohican();
    echo Mohican::getMohican();
    unset($a, $b, $c, $d, $e, $f);
?>