var path = require('path');
var expect = require('chai').expect;

var ToyProblemsJs = require(path.join(__dirname, '..', './toyProblemsJs.js'));
var toyProblemsJs = new ToyProblemsJs();

describe('alphabetPosition()', function() {
  it('should return empty', function () {
    expect(toyProblemsJs.alphabetPosition("abcdefghijk")).to.equal("1 2 3 4 5 6 7 8 9 10 11");
  });

  it('should return empty', function () {
    expect(toyProblemsJs.alphabetPosition("The sunset sets at twelve o' clock.")).to.equal("20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11");
  });

  it('should return empty', function () {
    expect(toyProblemsJs.alphabetPosition("The narwhal bacons at midnight.")).to.equal("20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20");
  });  

  it('should return empty', function () {
    expect(toyProblemsJs.alphabetPosition('@$3|5v(k')).to.equal("22 11");
  });  
  
});

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

describe('stringifyBinaryTree', function() {
  it('no input null', function() {
    expect(toyProblemsJs.stringifyBinaryTree()).to.equal(null);
  });

  it('array is null', function() {
    expect(toyProblemsJs.stringifyBinaryTree([])).to.equal(null);
  });

  it('string is null', function() {
    expect(toyProblemsJs.stringifyBinaryTree("")).to.equal(null);
  });

  it('null is null', function() {
    expect(toyProblemsJs.stringifyBinaryTree(null)).to.equal(null);
  });  

  it('int is null', function() {
    expect(toyProblemsJs.stringifyBinaryTree(8)).to.equal(null);
  });

  it('object is not null', function() {
    expect(toyProblemsJs.stringifyBinaryTree({})).to.equal("{}");
  });  

  it('object has left', function() {
    expect(toyProblemsJs.stringifyBinaryTree({left:2})).to.equal("{'left':2}");
  });

  it('object has right', function() {
    expect(toyProblemsJs.stringifyBinaryTree({right:2})).to.equal("{'right':2}");
  });

  it('object has left and right and nested', function() {
    expect(toyProblemsJs.stringifyBinaryTree({left:{left:2, right:4},right:8})).to.equal("{'left':{'left':2,'right':4},'right':8}");
  });

  it('object has left and right and nested', function() {
    expect(toyProblemsJs.stringifyBinaryTree({left:{left:2, right:4},right:{left:25, right:{left:88, right:99}}})).to.equal("{'left':{'left':2,'right':4},'right':{'left':25,'right':{'left':88,'right':99}}}");
  });  

});

describe('var objectifyString = function(str, allowableKeySet)', function() {
  it('string without left bracket', function() {
    expect(toyProblemsJs.objectifyString("}")).to.equal(null);
  });

  it('string without right bracket', function() {
    expect(toyProblemsJs.objectifyString("{")).to.equal(null);
  });

  it('string with brackets out of order', function() {
    expect(toyProblemsJs.objectifyString("}{")).to.equal(null);
  });

  it('simple string object', function() {
    expect(toyProblemsJs.objectifyString("{}")).to.eql({});
  });  

  it('simple string object with spaces', function() {
    expect(toyProblemsJs.objectifyString(" { } ")).to.eql({});
  });

  it('simple string object with spaces', function() {
    expect(toyProblemsJs.binaryTreeifyString('{"left":2}')).to.eql({"left":2});
  });

  it('simple string object with spaces', function() {
    expect(toyProblemsJs.binaryTreeifyString('{"left":{"left":2,"right":4},"right":{"left":25,"right":{"left":88,"right":99}}}')).to.eql({"left":{"left":2,"right":4},"right":{"left":25,"right":{"left":88,"right":99}}});
  });
});

describe('function fibonacciSequence', function() {
  it('exists', function() {
    expect(toyProblemsJs.fibonacciSequence).to.be.a('function');
  });

  it('first two of zero based', function() {
    expect(toyProblemsJs.fibonacciSequence(0, 2, false)).to.eql([0, 1]);
  });

  it('first two of one based', function() {
    expect(toyProblemsJs.fibonacciSequence(0, 2, true)).to.eql([1, 1]);
  });

  it('first two of zero based', function() {
    // 0 1 1 2 3 5 8 13 21
    expect(toyProblemsJs.fibonacciSequence(4, 7, false)).to.eql([3, 5, 8]);
  });

  it('first two of zero based', function() {
    // 0 1 1 2 3 5 8 13 21
    expect(toyProblemsJs.fibonacciSequence(4, 7, true)).to.eql([5, 8, 13]);
  });

  it('first two of one based', function() {
    expect(toyProblemsJs.fibonacciSequence(0, 2, true)).to.eql([1, 1]);
  });  
});

describe('function fibonacci', function() {
  it('exists', function() {
    expect(toyProblemsJs.fibonacciAtIndex).to.be.a('function');
  });

  it('test 0', function() {
    expect(toyProblemsJs.fibonacciAtIndex(0)).to.eql(0);
  });

  it('test 1', function() {
    expect(toyProblemsJs.fibonacciAtIndex(1)).to.eql(1);
  });  

  it('test 2', function() {
    expect(toyProblemsJs.fibonacciAtIndex(2)).to.eql(1);
  });    

  it('test 3', function() {
    expect(toyProblemsJs.fibonacciAtIndex(3)).to.eql(2);
  });      

  it('test 4', function() {
    expect(toyProblemsJs.fibonacciAtIndex(4)).to.eql(3);
  });        

  it('test 5', function() {
    expect(toyProblemsJs.fibonacciAtIndex(5)).to.eql(5);
  });          

  it('test 6', function() {
    expect(toyProblemsJs.fibonacciAtIndex(6)).to.eql(8);
  });            
});

describe('function isPrime', function() {

  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(4)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(0)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(1)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(2)).to.eql(true);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(3)).to.eql(true);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(5)).to.eql(true);
  });

  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(6)).to.eql(false);
  });
  it('test isPrime', function() {
  expect(toyProblemsJs.isPrime(7)).to.eql(true); //true
      });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(8)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(9)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(10)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(11)).to.eql(true);  //true
  });

  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(12)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(13)).to.eql(true); //true
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(14)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(15)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(16)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(17)).to.eql(true); //true
  });

  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(18)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(19)).to.eql(true); //true
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(20)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(21)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(22)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(23)).to.eql(true); //true
  });

  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(24)).to.eql(false);
  });

  // pattern changes here because 5 squared?
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(25)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(26)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(27)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(28)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(29)).to.eql(true);  //true
  });
  
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(30)).to.eql(false);
  });
  // pattern changes here because 5 squared?
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(31)).to.eql(true); // true
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(32)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(33)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(34)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(35)).to.eql(false);
  });
  
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(36)).to.eql(false);
  });
  // pattern changes here because 5 squared?
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(37)).to.eql(true); // true
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(38)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(39)).to.eql(false);
  });
  it('test isPrime', function() {
    expect(toyProblemsJs.isPrime(40)).to.eql(false);
  });
  it('test isPrime', function() {
  expect(toyProblemsJs.isPrime(41)).to.eql(true); // true
});

    });
    
    // void testGetPrimes(void)
    // {
    //     unsigned int emptyExpected [] = {};
    //     TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 3).data(), emptyExpected, sizeof(emptyExpected));
        
    //     unsigned int aExpected [] = {2, 3, 5};
    //     TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 6).data(), aExpected, sizeof(aExpected));
        
    //     unsigned int bExpected [] = {2, 3};
    //     TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 5).data(), bExpected, sizeof(bExpected));
        
    //     unsigned int cExpected [] = {2};
    //     TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 3).data(), cExpected, sizeof(cExpected));
        
    //     unsigned int dExpected [] = {};
    //     TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(4, 5).data(), dExpected, sizeof(dExpected));
        
    //     unsigned int eExpected [] = {7, 11, 13, 17, 19, 23};
    //     TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(6, 29).data(), eExpected, sizeof(eExpected));
    // }
// describe('funtion pointers()', function() {
//   it('exists', function() {
//     expect(toyProblemsJs.make_lazy).to.be.a('function');
//   });

//   it('should properly delay function call', function() {
//     var add = function(first, second) {
//       return first + second;
//     };
//     var test = toyProblemsJs.make_lazy(add, 1, 2);
//     expect(test()).to.eql(3);
//   });
// });



















