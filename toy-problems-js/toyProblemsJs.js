/*! toyProblemsJs v0.0.0 - MIT license */
'use strict';

var toyProblemsJs = function() {

}

toyProblemsJs.prototype.noOdds = function(array) {
  var results = [];
  for (var i = 0; i < array.length; i++) {
    if ((array[i] & 1) === 0) {
      results.push(array[i]);
    }
  }
  return results;
}

toyProblemsJs.prototype.isPowerOf4 = function(number) {
  if (Number(number) !== number || number % 1 !== 0) {
    return false;
  }

  if (number % 4 !== 0) {
    return false;
  } else if (number / 4 === 1) {
    return true
  }

  return toyProblemsJs.prototype.isPowerOf4(number / 4);
};

toyProblemsJs.prototype.nonRecursePow4 = function(number) {
  //http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
  var bitCount = function(value) {
    var c; // store the total here
    var S = [1, 2, 4, 8, 16]; // Magic Binary Numbers
    var B = [0x55555555, 0x33333333, 0x0F0F0F0F, 0x00FF00FF, 0x0000FFFF];
    
    c = value - ((value >> 1) & B[0]);
    c = ((c >> S[1]) & B[1]) + (c & B[1]);
    c = ((c >> S[2]) + c) & B[2];
    c = ((c >> S[3]) + c) & B[3];
    c = ((c >> S[4]) + c) & B[4];
    
    return c;
  }

  var msb32 = function(x)
  {
    var bval = [0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4];
    
    var r = 0;
    if (x & 0xFFFF0000) { r += 16/1; x >>= 16/1; }
    if (x & 0x0000FF00) { r += 16/2; x >>= 16/2; }
    if (x & 0x000000F0) { r += 16/4; x >>= 16/4; }
    return r + bval[x];
  }

  if (Number(number) !== number || number % 1 !== 0) {
    return false;
  }

  var bCount = bitCount(number);
  var msbPosition = msb32(number);
  if (bCount === 1 && msbPosition > 2 && (msbPosition - 1) % 2 === 0) {
    return true;
  }
  return false;
};

toyProblemsJs.prototype.factorialDivision = function(n, d) {
  if (d <= 0 || n < 0 || n < d) {
    return undefined;
  } else if (n === 0) {
    return 0;
  } else if (n === d) {
    return 1;
  }
  
  var factorialDivided = 1;
  for (var i = d + 1; i <= n; i++) {
    factorialDivided *= i;
  }
  
  return factorialDivided;
}

//Given a set of vertices V that describes a path in a graph, 
//with each vertex assigned a weight. Find a subset of V that 
//maximizes the sum of vertex weights without any two vertices 
//in that subset being adjacent.

// this solution assumes no negative numbers (maybe that doesn't matter?)
toyProblemsJs.prototype.greatestNonAdjacentWeights = function(vertices) {
  // input should be an array
  if (!Array.isArray(vertices)) {
    return null;
  }

  var heaviestWeight = 0;
  var heaviestIndices = [];
  var currentWeight = 0;
  var currentIndices = [];

  var recurse = function(currentIndex) {
    // end case
    if (currentIndex != undefined && currentIndex >= vertices.length) {
      if (currentWeight > heaviestWeight) {
        // make a copy of the current indices?
        heaviestIndices = currentIndices.slice();
        heaviestWeight = currentWeight;
      }
      return;      
    }
    // push new info on for current index
    if (currentIndex != undefined) {
      currentIndices.push(currentIndex);
      currentWeight += vertices[currentIndex];

      // recurse into oneStep
      recurse(currentIndex + 2);
      // recurse into twoStep
      recurse(currentIndex + 3);

      // pull info off for current index
      currentIndices.pop();
      currentWeight -= vertices[currentIndex];
    } else {
      // recurse at index 0
      recurse(0);
      // recurse at index 1;
      recurse(1);
    }
  };
  recurse();

  return heaviestIndices;
}


// problem: get the smallest set of numbers that when squared and
// summed equal the totalValue
toyProblemsJs.prototype.sumOfSquaresShortestSet = function(totalInteger) {
  var set = [];
  var setOut = [];

  var recurse = function(value, maxValue, set) {
    if (value === 0 && set.length > 0 && set.length < 5 ) {
      if (setOut.length > set.length || setOut.length === 0)  {
        setOut = set;
      }
    }

    var biggestSqrt = Math.floor(Math.sqrt(value));
    if (maxValue !== undefined && biggestSqrt > maxValue) {
      biggestSqrt = maxValue;
    }

    while (biggestSqrt > 0) {
      var copiedSet = set.slice();
      copiedSet.push(biggestSqrt);
      var remainder = value - (biggestSqrt * biggestSqrt);
      recurse(remainder, biggestSqrt, copiedSet);
      biggestSqrt--;
    }
  }

  recurse(totalInteger, totalInteger, set);
  return setOut;
}

toyProblemsJs.prototype.sumOfSquaresAllSets = function(totalInteger) {
  // there will be multiple ways to create a sum of squares that equal the totalInteger
  // therefore there is an array--setList--that contains all of the sets of integers that
  // can be squared and summed up to equal the totalInteger
  var setList = [];

  var recurse = function(value, set, maxValue) {
    var set = set || [];
    if (value === 0) {
      setList.push(set);
      return;
    }

    // should be an integer
    var biggestSqrt = Math.floor(Math.sqrt(value));

    if (maxValue !== undefined && biggestSqrt > maxValue) {
      biggestSqrt = maxValue;
    }
    
    while(biggestSqrt > 0) {
      var copiedSet = set.slice();
      copiedSet.push(biggestSqrt);
      var remainder = value - Math.pow(biggestSqrt, 2);
      recurse(remainder, copiedSet, biggestSqrt);
      biggestSqrt--;
    }
  }

  recurse(totalInteger)
  return setList;
}


if ( typeof module !== "undefined" ) {
  module.exports = toyProblemsJs;
}