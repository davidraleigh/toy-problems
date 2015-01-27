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

if ( typeof module !== "undefined" ) {
  module.exports = toyProblemsJs;
}