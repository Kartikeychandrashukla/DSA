/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    
    return function(x) {
        var result=x;

        for(var t =functions.length-1;t>=0;t--)
        {
            result=functions[t](result);
        }
        return result;
    }
};

