# LAST OCCURANCE REMOVEL

# s = input()
# t = input()
# s =s.split()
# index = -1
# l = len(s)
# for i in range(l):
#     if s[i]==t:
#         index = i

# ans = []
# for i in range (l):
#     if i!=index:
#         ans.append(s[i])

# for i in range(len(ans)):
#     print(ans[i], end=" ")
    

# VALID PARENTHESIS

def isVlaid(s):
    stack = []
    mapping = {")": "(", "}": "{", "]": "["}
    for char in s:
        if char in mapping:
            top_Element = stack.pop() if stack else None
            if top_Element is None or mapping[char] !=top_Element:
                return False
            else :
                stack.append(char)
    return len(stack) == 0

def isValid(s):
    stack = []
    mapping = {")": "(", "}": "{", "]": "["}
    for char in s:
        if char in mapping:
            top_element = stack.pop() if stack else None
            if top_element is None or mapping[char] != top_element:
                return False
        else:
            stack.append(char)

    return len(stack) == 0

print(isValid("[]"))

