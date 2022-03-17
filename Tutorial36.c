 int start, end;
    start = 0;
    end = num - 1;

    while (start < end) {
        i = arr[start];
        arr[start] = arr[end];
        arr[end] = i;
        ++start;
        --end;
    }