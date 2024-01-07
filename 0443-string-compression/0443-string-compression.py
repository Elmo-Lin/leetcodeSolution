class Solution:
    def compress(self, chars: List[str]) -> int:
        read=0
        write=0
        
        while read < len(chars):
            char = chars[read]
            count = 0
            
            while read<len(chars) and char == chars[read]:
                read += 1
                count += 1
                
            chars[write] = char
            write += 1
            if count > 1:
                for digit in str(count):
                    chars[write] = digit
                    write += 1
 
        return write