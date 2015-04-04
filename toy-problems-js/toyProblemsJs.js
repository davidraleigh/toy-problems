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

// Given a set of numeric values in an array, 
// find a subset that maxmizes the sum of weights 
// without any two weights coming from adjacent indices. 
// Solution assumes all input values are positive.
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

// Deferring a function execution can sometimes save a lot of execution time
// in our programs by postponing the execution to the latest possible instant
// of time, when we're sure that the time spent while executing it is worth it.

// Write a method make_lazy that takes in a function and the arguments to the
// function and returns another function which when invoked, returns the result
// of the original function invoked with the supplied arguments.

// For example:

// Given a function add

// function add (a, b) {
//   return a + b;
// }
// One could make it lazy as:

// var lazy_value = make_lazy(add, 2, 3);
// The expression does not get evaluated at the moment, but only when you invoke lazy_value as:

// lazy_value() => 5
// The above invokation then performs the sum.

// Please note: The functions that are passed to make_lazy may take one or
// more arguments and the number of arguments is not fixed.
toyProblemsJs.prototype.make_lazy = function(func) {
  var args = Array.prototype.slice.call(arguments, 2);
  return function() {
    func(1, 2);
  }.bind(this);
}

// given 2 strings compute the minimum number of edits to change the first into the second
// an edit is a deletion, a character swap or an insertion
// worst case should be no more than 
toyProblemsJs.prototype.levenshteinDistance = function(stringToEdit, stringGoal) {
  var callCount = 0;
  var recurse = function(eIndex, gIndex, count) {
    callCount++;
    if (eIndex < 0 || gIndex < 0) {
      return count;
    }

    if (stringToEdit[eIndex] === stringGoal[gIndex]) {
      count--;
      return recurse(eIndex - 1, gIndex - 1, count);
    } else {
      var decrementedEdit = recurse(eIndex - 1, gIndex, count);
      var decrementedGoal = recurse(eIndex, gIndex - 1, count);
      var decrementedBoth = recurse(eIndex - 1, gIndex - 1, count);
      if (decrementedEdit < decrementedBoth && decrementedEdit < decrementedGoal) {
        return decrementedEdit;
      } else if (decrementedBoth < decrementedGoal) {
        return decrementedBoth;
      } else {
        return decrementedGoal;
      }
    }
  }

  var editCount = stringToEdit.length > stringGoal.length ? stringToEdit.length : stringGoal.length;
  var count = recurse(stringToEdit.length - 1, stringGoal.length - 1, editCount);
  console.log('edit count', editCount);
  console.log('call count', callCount);
  return count;
}

// Given a "square" array of subarrays, find the sum of values 
// from the first value of the first array, the second value 
// of the second array, the third value of the third array, and so on...
// var exampleArray = [[1, 0, 0, 0],
//                    [0, 1, 0, 0],
//                    [0, 0, 1, 0],
//                    [0, 0, 0, 1]]

// diagonalSum(exampleArray) // => 4
// var exampleArray = [[1, 0, 0, 0, 0],
//                    [0, 1, 0, 0, 0],
//                    [0, 0, 1, 0, 0],
//                    [0, 0, 0, 1, 0],
//                    [0, 0, 0, 0, 1]]

// diagonalSum(exampleArray) // => 5
toyProblemsJs.prototype.diagonalSum = function(matrix) {
  return matrix.reduce(function(prev, current, index, array) { 
    return prev + current[index]; 
  }, 0);
}

// assumes all keys start and end with '
toyProblemsJs.prototype.objectifyString = function(str, allowableKeySet) {
  // remove all whitespace
  str = str.replace(/ /g,'');
  if (str[0] !== '{' || str[str.length - 1] !== '}') {
    return null;
  }

  var obj = {};
  var currentKey = "";
  var currentValue = null;
  var stringSep = "'";

  var bReadKey = true;
  var bReadValue = false;
  var bReadString = false;
  var bReadObject = false;
  for (var i = 1; i < str.length; i++) {
    if (str[i] === ',') {
      continue;
    }

    if (bReadKey) {
      if (str[i] === ":") {
        bReadKey = false;
        if (str[i + 1] === "{") {
          bReadObject = true;
        } else if (str[i + 1] === "'" || str[i + 1] === '"') {
          bReadString = true;
        } else {
          bReadValue = true;
        }
      } else {
        // maybe put in regular expression for allowable key characters?
        if (str[i] === "'") {
          continue;
        }
        currentKey += str[i];
      }
    } else if (bReadValue) {
      if (str[i] === '}' || str[i] === ",") {
        obj[currentKey] = currentValue;
      }
    } else if (bReadString) {
      if (currentValue === null) {
        stringSep = str[i];
        currentValue = "";
      } else if (str[i] === stringSep) {
        obj[currentKey] = currentValue;
        currentKey = "";
        currentValue = null;
        bReadValue = false;
        bReadKey = true;
      } else {
        currentValue += str[i];
      }
    } else if (bReadObject) {

    }
  }
  return obj;
}

var stringifyObject = function(obj) {
  var output = "";
  if (Array.isArray(obj)) {
    output += "[";
    if (obj.length > 0) {
      output += stringifyObject(obj[0]);
      // in order to avoid a comma check we don't use foreach
      for (var i = 1; i < obj.length; i++) {
        output += "," + stringifyObject(obj[i]);
      }
    }
    output += "]";
  } else if (typeof obj === "string" ||
             typeof obj !== "object") {
    var str = "" + obj;
    output += str;
  } else {
    output += "{";
    var bComma = false;
    for (var key in obj) {
      if (bComma) {
        output += ",";
      }
      output += "'" + key + "':";
      output += stringifyObject(obj[key]);
      bComma = true;
    }
    output += "}";
  }
  return output;
}

// Write a function that stringifies a binary tree. 
// JSON.stringify is cheating. Then write a function 
// that parses that string (again native parse JSON is cheating)
toyProblemsJs.prototype.stringifyBinaryTree = function(binaryTree) {
  if (binaryTree === undefined || 
    Array.isArray(binaryTree) || 
    binaryTree === null ||
    typeof binaryTree !== 'object')
    return null;

  return stringifyObject(binaryTree);
}

toyProblemsJs.prototype.binaryTreeifyString = function(binaryTreeString) {
  // remove all whitespace
  binaryTreeString = binaryTreeString.replace(/ /g,'');
  if (binaryTreeString[0] !== '{' || binaryTreeString[binaryTreeString.length - 1] !== '}') {
    return null;
  }
  console.log(binaryTreeString);

  var stuff = JSON.parse(binaryTreeString);
  console.log(stuff);
  return stuff;
}



if ( typeof module !== "undefined" ) {
  module.exports = toyProblemsJs;
}