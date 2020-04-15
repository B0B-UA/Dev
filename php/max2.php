<?php
    $a = (int)fgets(STDIN);
    $b = (int)fgets(STDIN);
    
    if ($a > $b) {
        echo $a. PHP_EOL;
    } else {
        echo $b. PHP_EOL;
    }
?>