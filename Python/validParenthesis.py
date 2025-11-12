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


s = input()
print(isValid(s))