problem_001 = function(n){
  sum = 0
  for(i in 0:(n-1)){
    if(i %% 3 == 0 | i %% 5 == 0){
      sum = sum + i
    }
  }
  return(sum)
}

problem_001(1000)
