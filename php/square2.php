<?php
    echo "Enter int size:".PHP_EOL;
    $size = (int)fgets(STDIN);

    for ( $row = 1, $counter = 1; $row <= $size; $row++ ) {
        for ( $col = 1; $col < $size; $col++ ) {
            echo $counter." ";
            $counter += 1;
        }
        echo $counter.PHP_EOL;
        $counter += 1;
    }
?>