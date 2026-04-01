/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
      var cached={};
    return function(...args) {
      
        if(cached[args]!=undefined)
        {
            return cached[args];
        }
  cached[args]=fn(...args);
  return cached[args];
    }
}


