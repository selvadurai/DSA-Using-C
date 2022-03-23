Graphs
=====

**Edges Vs Vertices**






**Undirected Graphs**

1. An undirected graph is a set of nodes and a set of links between the nodes.

2. Each node is called a vertex, each link is called an edge, and each edge connects two vertices.

3. The order of the two connected vertices is unimportant.

4. An undirected graph is a finite set of vertices together with a finite set of edges. Both sets might be empty, which is called the empty graph.


![image](https://user-images.githubusercontent.com/4705770/159599392-de33f59b-814f-4965-8e57-ca0253ee0807.png)


**Directed Graphs**

1. A directed graph is a finite set of vertices together with a finite set of edges. Both sets might be empty, which is called the empty graph.
2. Each edge is associated with two vertices, called its source and target vertices.
3. We say that the edge connects its source to its target.
4. The order of the two connected vertices is important.


![image](https://user-images.githubusercontent.com/4705770/159599610-a9a89adf-7316-4ecd-be63-8e5211fd9284.png)


**More Graph Terminology:**

**Loop:** an edge that connects a vertex to itself.

**Path**: a sequence of vertices, p0, p1, ..., pm, such that each adjacent pair of vertices  pi and pi+1 are connected by an edge.

**Cycle**: a simple path with no repeated vertices or edges other than the starting and ending vertices. A cycle in a directed graph is called a directed cycle.

**Multiple edges:** in principle, a graph can have two or more edges connecting the same two vertices in the same direction.

**Simple graphs:** the graphs that have no loops and no multiple edges. In fact, many applications require only simple directed graphs or even simple undirected graphs.
