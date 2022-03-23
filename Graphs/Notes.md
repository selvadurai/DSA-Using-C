Graphs
=====

**Edges Vs Vertices**

![image](https://user-images.githubusercontent.com/4705770/159599884-2bab9149-738e-48c1-b48f-76ff373848a0.png)





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


**Directed Vs Undirected**

![image](https://user-images.githubusercontent.com/4705770/159600014-45be4a14-2084-48c1-8102-91e3a33562d6.png)


**More Graph Terminology:**

**Loop:** an edge that connects a vertex to itself.

**Path**: a sequence of vertices, p0, p1, ..., pm, such that each adjacent pair of vertices  pi and pi+1 are connected by an edge.

**Cycle**: a simple path with no repeated vertices or edges other than the starting and ending vertices. A cycle in a directed graph is called a directed cycle.

**Multiple edges:** in principle, a graph can have two or more edges connecting the same two vertices in the same direction.

**Simple graphs:** the graphs that have no loops and no multiple edges. In fact, many applications require only simple directed graphs or even simple undirected graphs.





**Representing Graphs with an Adjacency Matrix**


![image](https://user-images.githubusercontent.com/4705770/159600615-350cbb0d-52a9-43df-a07d-f6aacdb2af67.png)

Definition:

1. An adjacency matrix is a square grid of true/false values that represent the edges of a graph.

2. If the graph contains n vertices, then the grid contains n rows and n columns.

3. For two vertex numbers i and j, the component at row i and column j is true if there is an edge from vertex i to vertex j; otherwise, the component is 
   false.


We can use a two-dimensional array to store an adjacency matrix:



**Representing Graphs with Edge Lists**

![image](https://user-images.githubusercontent.com/4705770/159600774-871988fb-5ae4-4b6f-b377-31de07f15dd3.png)


Definition:

1. A directed graph with n vertices can be represented by n different linked lists.

2. List number i provides the connections for vertex i.

3. For each entry j in list number i, there is an edge from i to j.


**Depth-First Search (DFS)**

  Expand the deepest unexpanded (unmarked) node.  
  
  Implementation: stack or recursion.


**Breadth-First Search (BFS)**

Expand the shallowest unexpanded (unmarked) node.

Implementation: queue.


**Spanning Trees**

A spanning tree is a subset of Graph G, which has all the vertices covered with minimum possible number of edges. Hence, a spanning tree does not have cycles and it cannot be disconnected..

By this definition, we can draw a conclusion that every connected and undirected Graph G has at least one spanning tree. A disconnected graph does not have any spanning tree, as it cannot be spanned to all its vertices.

![image](https://user-images.githubusercontent.com/4705770/159602302-4d29d30a-1b0e-440e-b02f-f0f80a2b185c.png)


 A complete undirected graph can have maximum n^(n-2) number of spanning trees, where n is the number of nodes. In the above addressed example, n is 3, hence 3^3−2 = 3 spanning trees are possible.
 
 
 ![image](https://user-images.githubusercontent.com/4705770/159603232-dcf2a66b-d6e7-4aa5-be98-746bd7960886.png)

**Prim's Algorithm**

Prim's algorithm is a greedy algorithm that finds a minimum spanning tree for a weighted undirected graph

![image](https://user-images.githubusercontent.com/4705770/159603491-9740a8b1-911b-4c42-b29a-10aa843c8c87.png)



**Kruskal Algorthim**

Kruskal's algorithm finds a minimum spanning forest of an undirected edge-weighted graph. If the graph is connected, it finds a minimum spanning tree. 

![image](https://user-images.githubusercontent.com/4705770/159604526-f6605727-3a29-4fff-8a8c-1ad4d45f29c3.png)


![image](https://user-images.githubusercontent.com/4705770/159604661-dffc72cf-64f3-496f-b049-4d17a2de4949.png)


Flow Chart

![image](https://user-images.githubusercontent.com/4705770/159604938-7905c5fa-5aca-47d1-a156-0e505e94c217.png)


![image](https://user-images.githubusercontent.com/4705770/159605360-328c7cf0-a06d-41f2-91a2-1813df882482.png)

