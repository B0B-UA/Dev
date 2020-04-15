<?php
function gcd($a, $b) {
    if ( $b == 0 ) {
        return $a;
    }
    return gcd($b, $a%$b);
}

function main() {

    $in = fopen("task.in", "r");
    $out = fopen("task.out", "w");
    
    fscanf($in, "%d %d", $a, $b);
    
    $x = $a / gcd($a, $b) * $b;
    
    fprintf($out, "%d".PHP_EOL, $x);
    
    fclose($in);
    fclose($out);
}

main();

?>