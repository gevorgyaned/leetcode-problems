bool isIsomorphic(char* s, char* t) {
    if (s == NULL || t == NULL) return false;
    int len1 = strlen(s);
    int len2 = strlen(t);

    if (len1 != len2) return false;

    char map[127];
    char map1[127];
    memset(map, 0, sizeof(map));
    memset(map1, 0, sizeof(map1));

    for (int i = 0; i < len1; ++i) {
        if (map[s[i]] == 0 && map1[t[i]] == 0) { 
            map[s[i]] = t[i];
            map1[t[i]] = s[i];
        } else {
            if (map[s[i]] != t[i] || map1[t[i]] != s[i]) {
                return false;
            }
        }
    }

    return true;
}
