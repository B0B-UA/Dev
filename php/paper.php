<?php
    // class OutOfSpaceException extends Exception {};
    
    class Paper {
        private $content = ""; // = new StringBuffer();
        private $maxSymbols;
        private $symbols = 0;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
    
        public function __construct($maxSymbols=4096) {
            $this->maxSymbols = $this->validate($maxSymbols);
            $this->symbols = 0;
        }

        public function __get($name) {
            return $this->$name;
        }

        public function addContent($message) {
            $total = $this->maxSymbols - $this->symbols;
            $textToAdd = substr($message, 0, $total);
            
            if ( $total == 0 ) {
                throw new OutOfSpaceException();
            }
            
            $this->content .= $textToAdd;
            $this->symbols += strlen($textToAdd);
        }
    
        public function __toString() {
            return $this->content . PHP_EOL;
        
        }
    }
?>