class Solution(object):
    def findAllConcatenatedWordsInADict(self, words):
        def canConcatenate(word):
            if not word:
                return False

            dp = [False] * (len(word) + 1)
            dp[0] = True

            for i in range(1, len(word) + 1):
                for j in range(i):
                    if dp[j] and word[j:i] in word_set:
                        dp[i] = True
                        break

            return dp[-1]

        word_set = set(words)
        concatenated_words = []

        for word in words:
            word_set.remove(word)  # Temporarily remove the current word from the set
            if canConcatenate(word):
                concatenated_words.append(word)
            word_set.add(word)  # Add the word back to the set

        return concatenated_words

if __name__ == "__main__":
    solution = Solution()
    words = input("Enter a list of words separated by spaces: ").split()
    concatenated_words = solution.findAllConcatenatedWordsInADict(words)
    
    if concatenated_words:
        print("Concatenated words:", concatenated_words)
    else:
        print("No concatenated words found in the list.")
