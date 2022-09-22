def soundex_algorithm(word):
    """Return the soundex code for a word."""
    # Remove all vowels except the first one
    word = word[0] + ''.join([c for c in word[1:] if c not in 'aeiouy'])
    # Replace all consonants with digits
    word = word[0] + ''.join([c if c in 'aeiouy' else '01230120022455012623010202'[ord(c) - ord('a')] for c in word[1:]])
    # Remove all consecutive duplicates
    word = word[0] + ''.join([c for i, c in enumerate(word[1:]) if c != word[i]])
    # Remove all 0s
    word = word.replace('0', '')
    # Pad with 0s
    word = word + '0000'
    # Return the first four characters
    return word[:4]