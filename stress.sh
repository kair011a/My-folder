for((i = 1; ; ++i)); do
    echo $i
    ./gen $i > int
    ./B < int > brute
    ./A < int > fast
    # diff -w out1 out2 || break
    diff -w <(./B < int) <(./A < int) || break
done

