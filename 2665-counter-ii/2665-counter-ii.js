/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

var createCounter = function(init) {
   let curr=init;
    let obj={
        increment(){
            return ++init;
        },
    decrement(){
          return --init;
      },
    reset(){
        init=curr;
        return init;
    }
    }
return obj;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */