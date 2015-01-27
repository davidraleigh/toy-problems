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

if ( typeof module !== "undefined" ) {
  module.exports = toyProblemsJs;
}