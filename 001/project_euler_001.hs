main ::  IO ()
main = print $ sum [i | i <- [1..999], or [(i `mod` 3 == 0), (i `mod` 5 == 0)]]