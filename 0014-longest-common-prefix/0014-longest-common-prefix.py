class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        prefix = strs[0]

        for string in strs[1:]:
            # shrink prefix until the string starts with the prefix
            while not string.startswith(prefix):
                prefix = prefix[:-1]  # remove last char

                if not prefix:
                    return ""

        return prefix

# TC: O(N Ã M)
# SC: O(1) â if we ignore temporary slicing and prefix copies