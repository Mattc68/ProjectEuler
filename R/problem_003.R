problem_003 = function(n){
  sqrt_n = round(sqrt(n))
  primes = c(1,2)
  potentials = seq(from = 3, to = sqrt_n, by=2)
  potentials = cbind(potentials, isPrime = TRUE)
  
  while(!is.null(potentials)){

    current = as.numeric(potentials[1,1])
    potentials[1,2] = 0
    primes = c(primes, current)
    
    for(i in 2:nrow(potentials)){
      if(as.numeric(potentials[i,1]) %% current == 0){
        potentials[i,2] = 0
      }
    }

    potentials = subset(potentials, potentials[,2]==T, drop = FALSE)
    print(nrow(potentials))
    if (nrow(potentials)==1) {
      primes = c(primes, as.numeric(potentials[1,1]))
      potentials = NULL
    }
  }

  for(i in length(primes):1){
    if(n %% primes[i] == 0){
      return(primes[i])
    }
  }
}

problem_003(13195)
problem_003(600851475143)
