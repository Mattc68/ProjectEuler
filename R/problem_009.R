problem_009 = function(n){
  a = 2
  b = 3
  c = n - 4
  
  is_triplet = function(a, b, c){
    return(ifelse((a^2 + b^2) == c^2, TRUE, FALSE)) 
  }

  for(i in c:0){
    b = n - i
    for(j in (b-1):3){
      k = n - i - j
      if(k > j) break
      if(is_triplet(k, j, i)){
        return(i*j*k)
      } 
    }
  }
  return(FALSE)
}

problem_009(1000)
