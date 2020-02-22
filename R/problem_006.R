problem_006 = function(n){
  nums = 1:n
  sumOfSquares = sum(nums^2)
  squareOfSums = (sum(nums))^2
  return(squareOfSums - sumOfSquares)
}

problem_006(100)