bool isPalindrome(int x) {
    if (x < 0)
        return false;

    long y = x;
    long reversed = 0;
    while (y) {
        reversed *= 10;
        reversed += y % 10;
        y /= 10;
    }

    return reversed == x;
}
