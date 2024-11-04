class Node:
    def __init__(self, data, priority):
        self.data = data
        self.priority = priority
        self.next = None

class PriorityQueue:
    def __init__(self):
        self._front = None

    # Menyisipkan node baru sesuai urutan prioritas
    def insert(self, data, priority):
        new_node = Node(data, priority)
        if self._front is None or self._front.priority < priority:
            new_node.next = self._front
            self._front = new_node
        else:
            temp = self._front
            while temp.next and temp.next.priority >= priority:
                temp = temp.next
            new_node.next = temp.next
            temp.next = new_node

    # Mengubah prioritas data tertentu
    def change_priority(self, data, new_priority):
        prev, temp = None, self._front
        while temp and temp.data != data:
            prev, temp = temp, temp.next

        # Jika data ditemukan, hapus dan tambahkan kembali dengan prioritas baru
        if temp:
            if prev:
                prev.next = temp.next
            else:
                self._front = temp.next
            self.insert(data, new_priority)
        else:
            print("Data tidak ditemukan dalam antrian.")

    # Menghapus data pada indeks tertentu (dengan asumsi index dari depan)
    def remove_at_index(self, index):
        if index < 0 or self._front is None:
            print("Index tidak valid atau antrian kosong.")
            return
        
        temp = self._front
        if index == 0:
            self._front = temp.next
            return temp.data

        for i in range(index - 1):
            if temp is None or temp.next is None:
                print("Index tidak valid.")
                return
            temp = temp.next

        if temp.next is None:
            print("Index tidak valid.")
            return
        temp.next = temp.next.next

    # Menyisipkan data pada indeks tertentu dengan prioritas tertentu
    def insert_at_index(self, data, priority, index):
        new_node = Node(data, priority)
        if index == 0:
            new_node.next = self._front
            self._front = new_node
            return
        
        temp = self._front
        for i in range(index - 1):
            if temp is None:
                print("Index tidak valid.")
                return
            temp = temp.next

        new_node.next = temp.next
        temp.next = new_node

    # Mengambil dan menampilkan isi queue
    def display(self):
        temp = self._front
        while temp:
            print(f"Data: {temp.data}, Priority: {temp.priority}")
            temp = temp.next

    # Method to seize the front position
    def seize_front(self, data):
        # First, find and remove the node with the given data
        prev, temp = None, self._front
        while temp and temp.data != data:
            prev, temp = temp, temp.next

        if not temp:
            print("Data tidak ditemukan dalam antrian.")
            return

        # Remove the node from its current position
        if prev:
            prev.next = temp.next
        else:
            self._front = temp.next

        # Insert the node at the front with the highest priority
        temp.next = self._front
        self._front = temp

    # Menyisipkan node baru dengan prioritas dibalik
    def insert_reversed(self, data, priority):
        new_node = Node(data, priority)
        if self._front is None or self._front.priority > priority:
            new_node.next = self._front
            self._front = new_node
        else:
            temp = self._front
            while temp.next and temp.next.priority <= priority:
                temp = temp.next
            new_node.next = temp.next
            temp.next = new_node

    # Method to reverse the queue
    def reverse_queue(self):
        prev = None
        current = self._front
        while current is not None:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
        self._front = prev
    
# Testing PriorityQueue with various operations
pq = PriorityQueue()
pq.insert("Task 1", 3)
pq.insert("Task 2", 2)
pq.insert("Task 3", 1)
pq.insert("Task 4", 4)

print("Queue after insertion:")
pq.display()

# Change priority of an element
pq.change_priority("Task 2", 5)
print("\nQueue after changing priority of 'Task 2' to 5:")
pq.display()

# Remove data at index 1
pq.remove_at_index(1)
print("\nQueue after removing element at index 1:")
pq.display()

# Insert data at index 2 with specific priority
pq.insert_at_index("Task 5", 2, 2)
print("\nQueue after inserting 'Task 5' with priority 2 at index 2:")
pq.display()

# Seize front with specific data
pq.seize_front("Task 3")
print("\nQueue after seizing front with 'Task 3':")
pq.display()


# Testing PriorityQueue with various operations
print("\nInsert reversed dimulai dari priority 1 :")
pq.insert_reversed("Task 1", 5)
pq.insert_reversed("Task 2", 2)
pq.insert_reversed("Task 3", 1)
pq.insert_reversed("Task 4", 4)
pq.display()

# Reverse the queue
pq.reverse_queue()
print("\nQueue after reversing:")
pq.display()