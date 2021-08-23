int atoi(string str) {
    int n = str.size();
    int j = 0, sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == '-') {
            sum -= 2 * sum;
            return sum;
        }
        else if (!isdigit(str[i])) {
            return -1;
        }
        int digit = str[i] - '0';
        sum += (digit * pow(10, j));
        j++;
    }
    return sum;
}