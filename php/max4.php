<?php
    $max;
    $a = (int)fgets(STDIN);
    $b = (int)fgets(STDIN);
    $c = (int)fgets(STDIN);
    $d = (int)fgets(STDIN);
    
    $max = $a;
    if ($max < $b) {
        $max =  $b;
    }
    if ($max < $c) {
        $max =  $c;
    }
    if ($max < $d) {
        $max = $d;
    }
    echo $max. PHP_EOL;
?>