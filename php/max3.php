<?php
    $max;
    $a = (int)fgets(STDIN);
    $b = (int)fgets(STDIN);
    $c = (int)fgets(STDIN);
    
    $max = $a;
    if ($max < $b) {
        $max =  $b;
    }
    if ($max < $c) {
        $max =  $c;
    }
    echo $max. PHP_EOL;
?>