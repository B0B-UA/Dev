<?php
    echo "Enter int number > 0:".PHP_EOL;
    $max = (int)fgets(STDIN);
    
    echo "0";

        for ( $i = 5; $i <= $max; $i += 5 ) {
            echo " ".$i;
        }
        echo PHP_EOL;
?>