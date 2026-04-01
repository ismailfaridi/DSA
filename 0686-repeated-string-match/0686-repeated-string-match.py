class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        n = (len(b) // len(a)) + 2  # Repeat enough times a's to cover b's length plus up to 2 extra for overlap.
        superset = ""

        for i in range(1, n + 1): # range exclude end, so +1
            superset += a

            if (b in superset) and (len(superset) >= len(b)):
                return i

        return -1