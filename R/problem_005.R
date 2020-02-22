problem_005 = function(n){
  i = n
  while(TRUE){
    i = i + 1
    fail = FALSE
    for(j in n:1){
      if (fail == TRUE) {
        break
      }
      if(i %% j == 0 && fail == FALSE){
        if(j == 1){
          return(i)
        }
        next
      }else{
        fail = TRUE
      }
    }
  }
}

problem_005(20)