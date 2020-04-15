<?php
    echo "Enter int number:".PHP_EOL;
    $a = (int)fgets(STDIN);

        for ( $i = 1; $i < $a; $i++ ) {
            echo $i." ";
        }
        echo $a.PHP_EOL;
?>