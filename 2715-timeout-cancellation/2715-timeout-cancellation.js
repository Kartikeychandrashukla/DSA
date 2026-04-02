/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */


var cancellable = function(fn, args, t) {
    const timeid = setTimeout(() => {
        fn(...args);
    }, t);

    return function cancelFn() {  // ← just RETURNS it
        clearTimeout(timeid);      //   does NOT call it
    }
};