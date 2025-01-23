def wordPattern(self, pattern: str, s: str) -> bool:
    words = s.split()
    mp = {}

    if len(set(words)) != len(set(pattern)) or len(words) != len(pattern):
        return False

    for word, letter in zip(words, pattern):
        if letter not in mp:
            mp[letter] = word
        else:
            if mp[letter] != word:
                return False

    return True
