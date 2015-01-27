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
