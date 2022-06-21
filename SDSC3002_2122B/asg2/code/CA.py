import networkx as nx
import time

start = time.time()

f = open("DBLP.txt",'r')
lines = f.readlines()[1:]
f.close()

G = nx.Graph()

for line in lines:
    node = line.split()
    G.add_edge(int(node[0]), int(node[1]))
result = nx.core_number(G)

f = open("output.txt", "w")
for k,v in result.items():
    f.write(str(k) + "\t" + str(v) + "\n")
f.close()

end = time.time()
print("Run time (s): " + str(end - start))
