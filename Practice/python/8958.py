n = int(input())

for i in range(n) :
    quiz = str(input())
    
    sum = 0
    t = 0
    l = len(quiz)
    
    for j in range(l) :
        if(quiz[j] == 'O') :
            t +=1
            sum = sum + t
        elif(quiz[j] == 'X') :
            t = 0
            
    print(sum)
        
    
