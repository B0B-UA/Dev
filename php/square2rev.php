<?php
    echo "Enter int size:".PHP_EOL;
    $size = (int)fgets(STDIN);

    for ( $row = 1, $counter = 1; $row <= $size; $row++ ) {
        $i = $size * ( $size - $row) + 1;
        
        for ( $col = 1; $col < $size; $col++ ) {
            echo $i." ";
            $i += 1;
        }
        echo $i.PHP_EOL;
    }
?>