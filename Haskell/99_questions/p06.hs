
isPalindrome [] = True
isPalindrome [_] = True
isPalindrome xs = ((head xs) == (last xs)) && (isPalindrome $ init $ tail xs) 
