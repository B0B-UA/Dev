<?php
    function arrayScan($in, $array, $limit) {
        $quantity = 0;
        
        for ( ; $quantity < $limit and $in[$quantity] != PHP_EOL ; $quantity++ ) {
            $array[$quantity] = $in[$quantity];
        }
        return $quantity;
    }

?>  
