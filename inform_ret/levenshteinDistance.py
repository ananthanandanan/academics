def levenshteinDistance(s1, s2):
    if len(s1) < len(s2):
        return levenshteinDistance(s2, s1)

    # len(s1) >= len(s2)
    if len(s2) == 0:
        return len(s1)

    previous_row = range(len(s2) + 1)
    for i, c1 in enumerate(s1):
        # print("S1",i,c1)
        current_row = [i + 1]
        for j, c2 in enumerate(s2):
            # print("S2",j,c2)
            insertions = previous_row[j + 1] + 1 # j+1 instead of j since previous_row and current_row are one character longer
            deletions = current_row[j] + 1       # than s2
            substitutions = previous_row[j] + (c1 != c2) # if c1 == c2 else 1
            current_row.append(min(insertions, deletions, substitutions))
        previous_row = current_row

    return previous_row[-1]

def main():
    print(levenshteinDistance("kitten", "sitting"))

if __name__ == "__main__":
    main()