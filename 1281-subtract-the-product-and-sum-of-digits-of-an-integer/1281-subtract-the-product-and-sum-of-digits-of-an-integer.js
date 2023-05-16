/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    var prod=1;
    var sum=0;
    while(n){
        var lastDigit=n%10;
        prod=prod*lastDigit;
        sum=sum+lastDigit;
        n=Math.floor(n/10);
    }
    return prod-sum;
};