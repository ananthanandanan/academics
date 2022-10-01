from PG.graph import Graph, Node
from PG.page_rank import pagerank

a = Node()
b = Node()
c = Node()
d = Node()

g = Graph()

g.add_node("a", a)
g.add_node("b", b)
g.add_node("c", c)
g.add_node("d", d)

g.add_edge("b", "a")
g.add_edge("c", "a")
g.add_edge("d", "a")

ranks = pagerank(g)

for node, value in ranks.items():
    print(node.name, value)

"""
Expected output should be:
a: 1.0
b: 0.0
c: 0.0
d: 0.0
"""
