
Hashing 
=====

Open Addressing - when a data item cannot be placed at the index calculated by the hash function, another location in the aray is sought.


Linear Probing

Quadratic Probing

Double Hashing

**Chaining***


![image](https://user-images.githubusercontent.com/4705770/159197064-c4605def-cfbe-41e1-bac4-fafc55d824fb.png)



![image](https://user-images.githubusercontent.com/4705770/159197182-6727a973-d246-4924-a927-f3facbe58a1e.png)

**Hashing with Linear Probe**

Loading Factor=n/size



When using a linear probe, the item will be stored in the next available slot in the table, assuming that the table is not already full.

This is implemented via a linear search for an empty slot, from the point of collision. If the physical end of table is reached during the linear search, the search will wrap around to the beginning of the table and continue from there.

If an empty slot is not found before reaching the point of collision, the table is full.


![image](https://user-images.githubusercontent.com/4705770/159196797-bd1810ca-af9d-457c-a7a3-fcc1ef8e27b2.png)


A problem with the linear probe method is that it is possible for blocks of data to form when collisions are resolved. This is known as primary clustering.

This means that any key that hashes into the cluster will require several attempts to resolve the collision.

For example, insert the nodes 89, 18, 49, 58, and 69 into a hash table that holds 10 items using the division method:

![image](https://user-images.githubusercontent.com/4705770/159196766-fe042ce2-a494-4266-a9f9-0fc33f48ab4d.png)



**Hashing with Quadratic Probe**

To resolve the primary clustering problem, quadratic probing can be used. With quadratic probing, rather than always moving one spot, move i2 spots from the point of collision, where i is the number of attempts to resolve the collision.



![image](https://user-images.githubusercontent.com/4705770/159196708-97d24682-239a-43be-ab1a-9d4cd20a32f9.png)


Limitation: at most half of the table can be used as alternative locations to resolve collisions.

This means that once the table is more than half full, it's difficult to find an empty spot. This new problem is known as secondary clustering because elements that hash to the same hash key will always probe the same alternative cells.



