var rng = require('arc4random');

var colour = (rng.arc4random_uniform(2) == 0) ? '#0000FF' : '#FF0000';
console.log(colour);
