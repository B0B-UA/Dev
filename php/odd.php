<?php
    echo "Enter int number > 0:".PHP_EOL;
    $max = (int)fgets(STDIN);
    
    echo "1";

        for ( $i = 3; $i <= $max; $i += 2 ) {
            echo " ".$i;
        }
        echo PHP_EOL;
?>