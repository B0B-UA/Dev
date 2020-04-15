<?php
    echo "Enter int size:".PHP_EOL;
    $size = (int)fgets(STDIN);

    for ( $row = 1; $row <= $size; $row++ ) {
        for ( $col = 1; $col < $size; $col++ ) {
            echo $col." ";
        }
        echo $size.PHP_EOL;
    }
?>