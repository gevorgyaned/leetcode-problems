int next(int n)
{
    int res = 0;
    while (n) {
        res += (n % 10) * (n % 10);
        n /= 10;
    }

    return res;
}

bool isHappy(int n) {
    int slow = next(n);
    int fast = next(slow);

    while (slow != fast) {
        if (fast == 1)
            return true;

        slow = next(slow);
        fast = next(next(fast));
    }

    return slow == 1;
}
