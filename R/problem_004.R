problem_004 = function(n){
  is_palindrome = function(number){
    forwards = as.numeric(number)
    backwards = as.character(number)
    backwards = as.numeric(stringi::stri_reverse(backwards))
    if(forwards == backwards){
      return(TRUE)
    }
    return(FALSE)
  }
  largest_palindrome = 0
  for(i in n:0){
    for(j in n:0){
      k = i * j
      if (is_palindrome(k) && k > largest_palindrome) {
        largest_palindrome = k
      }
    }
  }
  return(largest_palindrome)
}