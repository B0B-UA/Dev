<?php
    $max;
    $a = (int)fgets(STDIN);
    $b = (int)fgets(STDIN);
    $c = (int)fgets(STDIN);
    $d = (int)fgets(STDIN);
    $e = (int)fgets(STDIN);
    
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
    if ($max < $e) {
        $max = $e;
    }
    echo $max. PHP_EOL;
?>