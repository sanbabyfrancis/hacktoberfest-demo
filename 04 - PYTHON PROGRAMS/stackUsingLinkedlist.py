class Stack:
    class Node:
        __slots__ = ["_element", "_next"]

        def __init__(self, data=None, next=None):
            self._element = data
            self._next = next

    def __init__(self):
        self._head = None
        self._tail = None
        self._size = 0

    def is_empty(self):
        return self._size == 0

    def len(self):
        return self._size

    def print(self):
        if not self.is_empty():
            k = self._head
            for i in range(self._size):
                print(k._element)
                k = k._next
        else:
            return None

    def push(self, data):
        n = self.Node(data, None)
        if self.is_empty():
            self._head = n
            self._tail = n
            self._size += 1
        else:
            (self._tail)._next = n
            self._tail = n
            self._size += 1

    def pop(self):
        if self.is_empty():
            return None
        else:
            t = self._tail
            k = self._head
            for i in range(self._size - 2):
                k = k._next
            k._next = None
            self._size -= 1
            return t._element


t = Stack()
print(t.is_empty())
t.push(1)
print(t.is_empty())
t.push(2)
t.push(3)
t.push(4)
t.print()
t.pop()
t.print()
