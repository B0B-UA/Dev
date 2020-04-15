<?php
    class UnitIsDead extends Exception {};

    class Unit {
        private $damage;
        private $hitPoints;
        private $hitPointsLimit;
        private $name;

        private function ensureIsAlive() {
            if ( $this->hitPoints < 0 ) {
                $this->hitPoints = 0;
                throw new UnitIsDead();
            }
        }
        
        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($name="HellCat", $hp=670, $dmg=190) {
            $this->name = $name;
            $this->hitPoints = $this->validate($hp);
            $this->hitPointsLimit = $this->validate($hp);
            $this->damage = $this->validate($dmg);
        }

        public function __get($name) {
            return $this->$name;
        }

        public function addHitPoints($hp) {
            $this->ensureIsAlive();

            if ($this->hitPoints + $hp > $this->hitPointsLimit ) {
                $this->hitPoints = $this->hitPointsLimit;
            } else {
                $this->hitPoints += $hp;
            }
        }

        public function takeDamage($dmg) {
            $this->ensureIsAlive();

            $this->hitPoints -= $dmg;
        }

        public function attack(Unit $enemy) {
            $this->ensureIsAlive();

            $enemy->takeDamage($this->damage);
            $this->counterAttack($enemy);
        }

        public function counterAttack(Unit $enemy) {
            $this->ensureIsAlive();

            $this->takeDamage($enemy->damage/2);
        }

        public function __toString() {
            return "(" . $this->name . ") - " . $this->hitPoints;
        }
    }

    $a = new Unit("T34", 600, 130);
    $b = new Unit();
    $a->attack($b);
    $a->attack($b);
    $a->attack($b);
    // $a->attack($b);
    // $a->attack($b);
    // $a->attack($b);
    // $a->attack($b);


    echo $a . PHP_EOL;
    echo $b . PHP_EOL;
?>