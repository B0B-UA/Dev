<?php
    echo "Enter int number > 0:".PHP_EOL;
    $max = (int)fgets(STDIN);
    
    echo "0";

        for ( $i = 2; $i <= $max; $i += 2 ) {
            echo " ".$i;
        }
        echo PHP_EOL;
?>