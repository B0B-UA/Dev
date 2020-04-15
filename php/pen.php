<?php
    class OutOfInkException extends Exception {};
    class OutOfSpaceException extends Exception {};

    class Pen {
        private $inkAmount;
        private $inkCapacity;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($inkCapacity=4096) {
            $this->inkAmount = $this->validate($inkCapacity);
            $this->inkCapacity = $inkCapacity;
        }

        public function __get($name) {
            return $this->$name;
        }

        public function refill() {
            $this->inkAmount = $this->inkCapacity;
        }

        public function write(Paper $paper, $content) {
            if ( $this->inkAmount == 0 ) {
                throw new OutOfInkException();
            }
            if ( strlen($content) > $this->inkAmount ) {
                $paper->addContent($content->substring(0, $this->inkAmount));
                return;
            }
            $paper->addContent($content);
        }
    }

?>