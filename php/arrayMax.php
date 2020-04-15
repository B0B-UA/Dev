<?php
    function arrayMax($array, $size) {
        $max = $array[0];
        for ( $i = 1; $i < $size; $i++ ) {
            if ($max < $array[$i]) {
                $max = $array[$i];
            }
        }
        return $max;
    }
?>