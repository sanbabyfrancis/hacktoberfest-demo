class Queue:
    class Node:
        __slots__ = ["_element", "_next"]

        def __init__(self, data=None, next=None):
            self._element = data
            self._next = next

    def __init__(self):
        self._head = None
        self._tail = None
        self._size = 0

    def len(self):
        return self._size

    def is_empty(self):
        return self._size == 0

    def enqueue(self, data):
        n = self.Node(data, None)
        if self.is_empty():
            self._head = n
            self._tail = n
            self._size += 1
        else:
            (self._tail)._next = n
            self._tail = n
            self._size += 1

    def dequeue(self):
        t = self._head
        self._head = t._next
        self._size -= 1
        return t._element

    def print(self):
        if self.is_empty():
            return None
        else:
            k = self._head
            for i in range(self._size):
                print(k._element)
                k = k._next


t = Queue()
print(t.is_empty())
t.enqueue(1)
t.enqueue(2)
t.enqueue(3)
t.enqueue(4)
t.print()
t.dequeue()
t.print()
