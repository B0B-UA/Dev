<?php
    function arrayPrint($out, $array, $size) {
        $slot = $size - 1;
        for ( $i = 0; $i < $slot; $i++ ) {
            fprintf($out, $array[$i]." " );
        }
        fprintf( $out, $array[$slot].PHP_EOL );
    }
?>