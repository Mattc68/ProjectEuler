problem_007 = function(primeTarget){
  n = 1
  i = 3
  while(n < primeTarget){
    prime = T
    for(j in (i-1):2){
      if(i %% j == 0){
        prime = F
      }
    }
    if(prime == T){
      n = n + 1
    }
    i = i + 1
    print(n)
  }
  return(i-1)
}

problem_007(10001)
 