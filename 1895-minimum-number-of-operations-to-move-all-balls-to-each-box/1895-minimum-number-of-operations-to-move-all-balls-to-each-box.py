from typing import List

class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        answer = [0] * n

        # Pass 1: Left to right
        count = 0  # Number of balls encountered
        operations = 0  # Operations needed to move all balls so far
        for i in range(n):
            answer[i] += operations
            if boxes[i] == '1':
                count += 1
            operations += count

        # Pass 2: Right to left
        count = 0
        operations = 0
        for i in range(n - 1, -1, -1):
            answer[i] += operations
            if boxes[i] == '1':
                count += 1
            operations += count

        return answer
