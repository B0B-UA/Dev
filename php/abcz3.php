<?php
    echo "Enter int number 1:".PHP_EOL;
    $a = (int)fgets(STDIN);
    while ( $a == 0 ) {
        $a = (int)fgets(STDIN);
    }
    echo "Enter int number 2:".PHP_EOL;
    $b = (int)fgets(STDIN);
    while ( $b == 0 ) {
        $b = (int)fgets(STDIN);
    }
    echo "Enter int number 3:".PHP_EOL;
    $c = (int)fgets(STDIN);
    while ( $c == 0 ) {
        $c = (int)fgets(STDIN);
    }

        if ( $a + $b > $c ) {
            echo "alpha".PHP_EOL;
        } else if ( $a < $b + $c ) {
            echo "bravo".PHP_EOL;
        } else if ( $b % $c == 0 ) {
            echo "charlie".PHP_EOL;
        } else {
            echo "zulu".PHP_EOL;
        }
?>