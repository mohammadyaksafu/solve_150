class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t:
            return ""
        
        char_map = {}
        for ch in t:
            char_map[ch] = char_map.get(ch, 0) + 1
        
        window_map = {}
        require = len(char_map)
        formed = 0

        left = 0
        min_len = float("inf")
        result = ""

        for right in range(len(s)):
            ch = s[right]
            window_map[ch] = window_map.get(ch, 0) + 1

            
            if ch in char_map and window_map[ch] == char_map[ch]:
                formed += 1

           
            while left <= right and formed == require:
                if (right - left + 1) < min_len:
                    min_len = right - left + 1
                    result = s[left:right+1]

                left_char = s[left]
                window_map[left_char] -= 1

                if left_char in char_map and window_map[left_char] < char_map[left_char]:
                    formed -= 1

                left += 1

        return result