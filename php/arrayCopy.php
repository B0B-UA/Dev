<?php
    function arrayCopy($destination, $source, $size) {
        for ( $i = 0; $i < $size; $i++ ) {
            $destination[$i] = $source[$i];
        }
    }
?>