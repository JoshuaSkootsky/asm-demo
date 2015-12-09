animals = 1000;
dollars = 1000;
max = 1000;

var t1 = new Date().getTime();
for (h=0; h < max; h++) {
    for (p = 0; p < max; p++) {
        for (r = 0; r < max; r++) {
            if (h + r + p === animals) {
                if( (10*h) + (3*p) + (0.5*r) === dollars) {
                    console.log("Pigs = " + p +", horses = " + h
                                + ", rabbits = " + r);
                }
            }
        }
    }
}

var t2 = new Date().getTime();
var time = t2 - t1;
var seconds = time/1000;
console.log(seconds + " seconds");

