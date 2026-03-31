class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()  # split string by whitespaces
        rev_words = []

        for word in words:
            rev_words.append(word[::-1])  # reverse the word

        return " ".join(rev_words)