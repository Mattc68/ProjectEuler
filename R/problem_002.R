problem_002 = function(){
  fib_1 = 1
  fib_2 = 2
  fib_3 = fib_1 + fib_2
  sum = 2
  
  while(fib_3 < 4000000){
    fib_1 = fib_2
    fib_2 = fib_3
    fib_3 = fib_1 + fib_2
    
    if(fib_3 %% 2 == 0){
      sum = sum + fib_3
    }
  }
  return(sum)
}

problem_002()