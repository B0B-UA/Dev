<?php
    function arrayShiftRight($array, $size) {
        $i = $size - 1;
        $tmp = $array[$i];
        
        for ( $j = $i - 1; $i > 0; $i--, $j-- ) {
            $array[$i] = $array[$j];
        }
        $array[0] = $tmp;
    }
?>