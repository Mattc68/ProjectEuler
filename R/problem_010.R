problem_010 = function(limit){
  seive = function(limit){
    primes = vector(length = limit)
    primes[] = TRUE
    primes[1] = FALSE
    
    for(i in 2:sqrt(limit)){
      if(primes[i]==TRUE){
        primes[seq(i*2, limit, i)] = FALSE
      }
    }
    return(which(primes == TRUE))
  }
  return(sum(seive(limit)))
}

problem_010(2000000)