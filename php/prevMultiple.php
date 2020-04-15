<?php
    echo "Enter int dividend:".PHP_EOL;
    $dividend = (int)fgets(STDIN);
    
    echo "Enter int divisor != 0:".PHP_EOL;
    $divisor = (int)fgets(STDIN);
    
    if ( $dividend > 0 or ($dividend % $divisor) == 0 ) {
        echo $dividend - ($dividend % $divisor).PHP_EOL;
    } elseif ( $divisor > 0 and ($dividend % $divisor) != 0 ) {
        echo $dividend - ($dividend % $divisor) - $divisor.PHP_EOL;
    } elseif ( ($dividend % $divisor) != 0 ) {
        echo $dividend - ($dividend % $divisor) + $divisor.PHP_EOL;
    }
?>