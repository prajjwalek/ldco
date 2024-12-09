class Node:
    def __init__(self, prn, name):
        self.prn = prn
        self.name = name
        self.next = None

# Example of creating a Node (similar to main in C++)
if __name__ == "__main__":
    prn = 12345
    name = "John Doe"
    node = Node(prn, name)
    print(f"Node created with PRN: {node.prn}, Name: {node.name}")
