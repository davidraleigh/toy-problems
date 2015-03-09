var path = require('path');
var expect = require('chai').expect;

var ToyProblemsJs = require(path.join(__dirname, '..', './toyProblemsJs.js'));
var toyProblemsJs = new ToyProblemsJs();
describe('noOdds()', function () {
  'use strict';

  it('exists', function () {
    expect(toyProblemsJs).to.be.a('object');

  });

  it('should return empty', function () {
    expect(toyProblemsJs.noOdds([1]).length).to.equal(0);
  });

  it('should return array with 0 and have length 1', function () {
    expect(toyProblemsJs.noOdds([1, 0]).length).to.equal(1);
  });

  it('should return array with 0', function () {
    expect(toyProblemsJs.noOdds([1, 0])[0]).to.equal(0);
  }); 

  it('should return array with 0 and 2 and have length 2', function () {
    expect(toyProblemsJs.noOdds([1, 0, 2])[1]).to.equal(2);
  }); 

  it('should return array with 0 and 2 and have length 2', function () {
    expect(toyProblemsJs.noOdds([1, 0, 2, 3]).length).to.equal(2);
  }); 
});

describe('isPowerOf4()', function () {
  'use strict';

  it('exists', function () {
    expect(toyProblemsJs).to.be.a('object');

  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(1)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(5)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(12)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(1020)).to.equal(false);
  });  

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(4.1)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4('4')).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(null)).to.equal(false);
  });

  it('should return false', function () {  
    expect(toyProblemsJs.isPowerOf4(undefined)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.isPowerOf4(function() {})).to.equal(false);
  });

  it('should return true', function () {
    expect(toyProblemsJs.isPowerOf4(4)).to.equal(true);
  });

  it('should return true', function () {
    expect(toyProblemsJs.isPowerOf4(16)).to.equal(true);
  });

  it('should return true', function () {
    expect(toyProblemsJs.isPowerOf4(64)).to.equal(true);
  });  

  it('should return true', function () {
    expect(toyProblemsJs.isPowerOf4(1024)).to.equal(true);
  });

  it('should return true', function () {
    expect(toyProblemsJs.isPowerOf4(4096)).to.equal(true);
  });  
});

//nonRecursePow4
describe('nonRecursePow4()', function () {
  'use strict';

  it('exists', function () {
    expect(toyProblemsJs).to.be.a('object');

  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(1)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(5)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(12)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(1020)).to.equal(false);
  });  

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(4.1)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4('4')).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(null)).to.equal(false);
  });

  it('should return false', function () {  
    expect(toyProblemsJs.nonRecursePow4(undefined)).to.equal(false);
  });

  it('should return false', function () {
    expect(toyProblemsJs.nonRecursePow4(function() {})).to.equal(false);
  });

  it('should return true', function () {
    expect(toyProblemsJs.nonRecursePow4(4)).to.equal(true);
  });

  it('should return true', function () {
    expect(toyProblemsJs.nonRecursePow4(16)).to.equal(true);
  });

  it('should return true', function () {
    expect(toyProblemsJs.nonRecursePow4(64)).to.equal(true);
  });  

  it('should return true', function () {
    expect(toyProblemsJs.nonRecursePow4(1024)).to.equal(true);
  });

  it('should return true', function () {
    expect(toyProblemsJs.nonRecursePow4(4096)).to.equal(true);
  });  
});

describe('factorialDivision()', function () {
  'use strict';

  it('exists', function () {
    expect(toyProblemsJs.factorialDivision).to.be.a('function');

  });

  it('should return 20', function () {
    expect(toyProblemsJs.factorialDivision(5, 3)).to.equal(20);
  });

  it('should return 10000', function () {
    expect(toyProblemsJs.factorialDivision(10000, 9999)).to.equal(10000);
  });

  it('should return 6345015248033280', function () {
    expect(toyProblemsJs.factorialDivision(98, 90)).to.equal(6345015248033280);
  });
});

describe('greatestNonAdjacentWeights()', function () {
  'use strict';

  it('exists', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights).to.be.a('function');
  });

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([5])).to.eql([0]);
  });

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 9])).to.eql([0]);
  });

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([9, 10])).to.eql([1]);
  });  

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 10])).to.eql([0]);
  });  

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 10, 1])).to.eql([0, 2]);
  });

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 12, 1])).to.eql([1]);
  });  

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 12, 2, 0])).to.eql([0, 2]);
  });    

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 9, 2, 3])).to.eql([0, 3]);
  });      

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 11, 2, 3])).to.eql([1, 3]);
  });  

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 12, 2, 0, 4])).to.eql([0, 2, 4]);
  });    

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 9, 2, 3, 0])).to.eql([0, 3]);
  });      

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 11, 2, 3, 1])).to.eql([1, 3]);
  });  

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 13, 2, 3, 5])).to.eql([1, 4]);
  });

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([9, 10, 2, 0])).to.eql([0, 2]);
  });  

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 10, 0, 1, 1, 1])).to.eql([0, 3, 5]);
  });

  it('should return proper indices', function () {
    expect(toyProblemsJs.greatestNonAdjacentWeights([10, 10, 0, 1, 1, 1])).to.eql([0, 3, 5]);
  });  
});

describe('sumOfSquaresShortestSet()', function() {
  it('exists', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet).to.be.a('function');
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(0)).to.eql([]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(1)).to.eql([1]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(3)).to.eql([1, 1, 1]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(4)).to.eql([2]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(5)).to.eql([2, 1]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(8)).to.eql([2, 2]);
  });  

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(14)).to.eql([3, 2, 1]);
  });  

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(25+36)).to.eql([6, 5]);
  });  

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresShortestSet(12)).to.eql([2, 2, 2]);
  });  
  
});

describe('sumOfSquaresAllSets()', function() {
  it('exists', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets).to.be.a('function');
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(0)).to.eql([[]]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(1)).to.eql([[1]]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(3)).to.eql([[1, 1, 1]]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(4)).to.eql([[2], [1, 1, 1, 1]]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(5)).to.eql([[2, 1], [1, 1, 1, 1, 1]]);
  });

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(8)).to.eql([[2, 2], [2, 1, 1, 1, 1], [1, 1, 1, 1, 1, 1, 1, 1]]);
  });  

  it('should return proper set', function() {
    expect(toyProblemsJs.sumOfSquaresAllSets(14)).to.eql([ 
      [ 3, 2, 1 ],                                     // 9 + 4+ 1
      [ 3, 1, 1, 1, 1, 1 ],                            // 9 + 1 + 1 + 1 + 1 + 1 
      [ 2, 2, 2, 1, 1 ],                               // 4 + 4 + 4 + 1 + 1 
      [ 2, 2, 1, 1, 1, 1, 1, 1 ],                      // 4 + 4 + 1 + 1 + 1 + 1 + 1 + 1
      [ 2/*4*/, 1/*5*/, 1/*6*/, 1/*7*/, 1/*8*/, 1/*9*/, 1/*10*/, 1/*11*/, 1/*12*/, 1/*13*/, 1/*14*/ ],             // 4 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1
      [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ] ]);
  });
});

describe('diagonalSum()', function() {
  it('exists', function() {
    expect(toyProblemsJs.diagonalSum).to.be.a('function');
  });

  it('should return a sum', function() {
    var matrix = [[1, 0, 0, 0],
                   [0, 1, 0, 0],
                   [0, 0, 1, 0],
                   [0, 0, 0, 1]];
    expect(toyProblemsJs.diagonalSum(matrix)).to.equal(4);
  });

  it('should return a sum', function() {
    var matrix = [[1, 0, 0, 0, 0 ],
                   [0, 1, 0, 0, 0],
                   [0, 0, 1, 0, 0],
                   [0, 0, 0, 1, 0],
                   [0, 0, 0, 1, 4]];
    expect(toyProblemsJs.diagonalSum(matrix)).to.equal(8);
  });  

  it('should return a sum', function() {
    var matrix = [[1]];
    expect(toyProblemsJs.diagonalSum(matrix)).to.equal(1);
  });    
});

describe('levenshtein distance', function() {
  it('exists', function() {
    expect(toyProblemsJs.levenshteinDistance).to.be.a('function');
  });

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('apple', 'apple')).to.eql(0);
  });

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('apple', 'xpple')).to.eql(1);
  });

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('apple', 'xapple')).to.eql(1);
  });

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('apple', 'pple')).to.eql(1);
  });

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('apple', 'xxpple')).to.eql(2);
  });  

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('apple', '')).to.eql(5);
  });    

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('', 'apple')).to.eql(5);
  });      

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('mappalef', 'apple')).to.eql(3);
  });        

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('applemappalef', 'apple')).to.eql(8);
  });    

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('123456789', '987654321')).to.eql(8);
  });

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('1234', 'abcd')).to.eql(4);
  });  

  it('should return the edit count', function() {
    expect(toyProblemsJs.levenshteinDistance('123456789', 'abcdefghi')).to.eql(9);
  });  

  // it('should return the edit count', function() {
  //     expect(toyProblemsJs.levenshteinDistance('123456789123456789', 'abcdefghiabcdefghi')).to.eql(18);
  // });

  // it('should return the edit count', function() {
  //     expect(toyProblemsJs.levenshteinDistance('Carthorse', 'Orchestra')).to.eql(8);
  // });
});

// describe('funtion pointers()', function() {
//   it('exists', function() {
//     expect(toyProblemsJs.make_lazy).to.be.a('function');
//   });

//   it('should properly delay function call', function() {
//     var add = function(first, second) {
//       return first + second;
//     };
//     var func = toyProblemsJs.make_lazy(add, 1, 2);
//     expect(func()).to.eql(3);
//   });
// });



















