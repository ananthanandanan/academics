getLine'::IO [Char]

getLine' = do {
        c <- getChar ;
            if c =='\n' then
                return []
                
            else
                do {
                    cs <- getLine' ;
                    return (c:cs)
                }
}

main::IO ()

main = do 
        a <- getLine'
        print a