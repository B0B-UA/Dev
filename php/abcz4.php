<?php
    echo "Enter int number 1:".PHP_EOL;
    $a = (int)fgets(STDIN);
    echo "Enter int number 2:".PHP_EOL;
    $b = (int)fgets(STDIN);

        if ( $a > $b and $b > 0 ) {
            echo "alpha".PHP_EOL;
        } else if ( $a < 0 and $b == 0 ) {
            echo "bravo".PHP_EOL;
        } else if ( $a == 0 or $b == 0 ) {
            echo "charlie".PHP_EOL;
        } else {
            echo "zulu".PHP_EOL;
        }
?>