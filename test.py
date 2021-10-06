class BaseA:
	base = 0

class BaseB:
	base = 22

class BaseSearch:
	x = 999
	def search():
		print("base search\n")


class A(BaseA):
	a = 1
	def search(self):
		print("A search\n")

class B(BaseB):
	b = 2
	def search(self):
		print("B search\n")


l = []
l.append(A())
l.append(B())

for i in l:
	i.search()