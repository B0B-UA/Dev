<?php
    $a = (int)fgets(STDIN);
    $check = 1;

        if ( $a % 2 == 0 ) {
            echo "alpha".PHP_EOL;
            $check += 2;
        }
        if ( $a % 3 == 0 ) {
            echo "bravo".PHP_EOL;
            $check += 3;
        }
        if ( $a % 5 == 0 ) {
            echo "charlie".PHP_EOL;
            $check += 5;
        }
        if ( $check == 1 ) {
            echo "zulu".PHP_EOL;
        }
?>