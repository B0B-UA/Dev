<?php
    echo "Enter int number > 0:".PHP_EOL;
    $max = (int)fgets(STDIN);
    
    echo "Enter int divisor > 0:".PHP_EOL;
    $divisor = (int)fgets(STDIN);
    
    if ( $divisor < 0 ) {
        $divisor *= -1;
    }
    $max -= $max % $divisor;

    for ( $i = 0; $i < $max; $i += $divisor ) {
        echo $i." ";
    }
    echo $max.PHP_EOL;
?>