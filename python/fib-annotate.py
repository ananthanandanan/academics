def fib(n:'int', output:'list'= [])-> 'list': 
    if n == 0: 
        return output 
    else: 
        if len(output)< 2: 
            output.append(1) 
            fib(n-1, output) 
        else: 
            last = output[-1] 
            second_last = output[-2] 
            output.append(last + second_last) 
            fib(n-1, output) 
        return output 
print(fib(5)) 