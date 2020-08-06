int Solution::isNumber(const string A) {
    string str=A;
    int i = 0, j = str.length() - 1; 
  
 
    while (i < str.length() && str[i] == ' ') 
        i++; 
    while (j >= 0 && str[j] == ' ') 
        j--; 
  
    if (i > j) 
        return 0; 
  
    
    if (i == j && !(str[i] >= '0' && str[i] <= '9')) 
        return 0; 
  
    
    if (str[i] != '.' && str[i] != '+'
        && str[i] != '-' && !(str[i] >= '0' && str[i] <= '9')) 
        return 0; 
  
 
    bool flagDotOrE = false; 
  
    for (i; i <= j; i++) { 
       
        if (str[i] != 'e' && str[i] != '.'
            && str[i] != '+' && str[i] != '-'
            && !isdigit(str[i])) 
            return 0; 
  
        if (str[i] == '.') { 
            
            if (flagDotOrE == true) 
                return 0; 
  
          
            if (i + 1 > str.length()) 
                return 0; 
  
           
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9')) 
                return 0; 
        } 
  
        else if (str[i] == 'e') { 
            
            flagDotOrE = true; 
            
            if (str[i + 1] != '+' && str[i + 1] != '-'
                && (str[i + 1] >= '0' && str[i] <= '9')) 
                return 0; 
  
    
            if (i + 1 > str.length()) 
                return 0; 
  
            if (!(str[i - 1] >= '0' && str[i - 1] <= '9')) 
                return 0; 
            
        } 
    } 
  
    
    return 1; 
}