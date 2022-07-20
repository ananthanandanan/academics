import random
import time


class Chord:

	def __init__(self, m):
		self.no_of_bits = m ## no of bits
		self.no_of_nodes = random.randint(5, 15)
		self.maxNode = 2**self.no_of_bits
		self.ring = {}
		self.nodes = []


	def create_ring(self):
		# l = list(range(0, self.no_of_bits))
		# nodes = []
		for i in range(self.no_of_nodes):
			k = random.randint(0,self.maxNode)
			if k not in self.nodes:
				self.nodes.append(k)
				# self.ring[k] = []
			self.nodes = sorted(self.nodes)
		# self.ring = sorted(self.ring)
		self.add_fingerTable()

	def add_fingerTable(self):
		# print(self.nodes)
		for node in self.nodes:
			self.ring[node] = [self.succ(node, i) for i in range(1, self.no_of_bits + 1)]
		# for key, value in self.ring.items():
		# 	print(key, value)
		# print()
		# print(self.ring)

	def succ(self,p, i):
		num = (p + 2**(i-1))%(self.maxNode)
		# print(str(num) + "," + str(p), end = " ")
		for i in range(len(self.nodes)):
			if self.nodes[i] >= num:
				# print()
				return i
		return 0

	def add_node(self, k):
		# self.nodes.append(k)
		inserted = False
		for i in range(len(self.nodes)-1):
			if self.nodes[i] == k:
				return
			elif i == 0 and self.nodes[i] > k:
				self.nodes.insert(0, k)
				inserted = True
			elif self.nodes[i] < k and  k < self.nodes[i+1]:
				self.nodes.insert(i+1, k)
				inserted = True
		# self.nodes = sorted(self.nodes)
		if not inserted:
			self.nodes.append(k)
		self.ring.clear()
		self.add_fingerTable()


	def remove_node(self, k):
		i = next(iter(self.ring))
		loop = True
		while loop:
			prev = -1
			if i == k:
				self.nodes.remove(i)
				self.ring.clear()
				self.add_fingerTable()
				break

			for index in range(len(self.ring[i])):
				if self.nodes[self.ring[i][index]] == k :
					self.nodes.pop(self.ring[i][index])
					self.ring.clear()
					self.add_fingerTable()
					loop = False
					break
				elif index == len(self.ring) - 1:
					i = self.nodes[self.ring[i][index]]
					break
				elif self.nodes[self.ring[i][index]] < k:
					prev = self.nodes[self.ring[i][index]]
				elif self.nodes[self.ring[i][index]] > k:
					if prev != -1:
						i = prev
					else:
						i = self.nodes[self.ring[i][index]]
						loop = False
						print("Node not found")
					break

	def lookUp(self, k, node):
		i = node
		loop = True
		print()
		print(node, end = " ")
		while loop:
			prev = -1
			if i == k:
				print(node)
				print("Found node :      ", k)
				break
			l = (self.ring[i])
			for index in range(len(self.ring[i])):
				if self.nodes[l[index]] == k :
					print("-> ", k) 
					print("Found key ", k, " at node ", k)
					loop = False
					break
				elif index == 0 and self.nodes[l[index]] > k :
					print("-> ", self.nodes[l[index]])
					print("Found key ", k, " at node ", self.nodes[l[index]])
					loop = False
					break
				elif self.nodes[l[index]] < k:
					prev = self.nodes[l[index]]
				elif self.nodes[l[index]] > k:
					if prev != -1:
						i = prev
						print("-> ", i, end = " ")
					else:
						i = self.nodes[l[index]]
						print("-> ", i, end = " ")
					break
				if index == (len(l) - 1):
					i = self.nodes[l[index]]
					print("-> ", i, end = " ")
					break

				# print(self.nodes[l[index]], index, len(l)-1)


	def print_ring(self):
		print(self.nodes)
		print("\n\n")

	def display_fingerTable(self, k):
		if k not in self.nodes:
			print("Node not found\n")
			return
		for i in range(len(self.ring[k])):
			print(str(i + 1) + " : ", self.nodes[self.ring[k][i]])
		print("\n\n")



c = Chord(8) ## 8 bit so 255 
c.create_ring()
c.print_ring()
choice = 0

while choice != 5:
	print(" 1.  key to look up\n 2. Insert a node\n 3. Remove a node \n 4. Display the finger table\n 5. Exit \n\n K N Anantha nandanan \
    \n AM.EN.U4CSE19326")
	choice = int(input("\n\nEnter choice : "))

	if(choice == 1):
		k = int(input("Key to look up : "))
		node = int(input("Starting Node : "))		
		c.lookUp(k, node)
	elif(choice == 2):
		k = int(input("Node to add : "))
		c.add_node(k)
		c.print_ring()
	elif(choice == 3):
		k = int(input("Node to remove : "))
		c.remove_node(k)
		c.print_ring()
	elif(choice == 4):
		k = int(input("Node : "))
		c.display_fingerTable(k)
	elif(choice == 5):
		break