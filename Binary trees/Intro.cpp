
/* 

In programming tree is a non-linear DS in which a node can be connected to multiple nodes.

common terminologies:

node- smallest entity containing data or value
edge- links connecting nodes
root- topmost node, from where tree starts
parent- node which have atleast one child i.e. node which connects to child node
child- node which is connected by other node
sibling- nodes of same parent
ancestor- parent and all the indirect parents of a child node in the same heirarachy  
descendent- all the children+ indirect children of a parent in same heirarchy.
leaf(external) node- node which has no child
internal node- atleast one child
subtree- stand on a node, all the nodes beneath it form a tree called subtree
depth of a node- no. of edges from root node to that node
height of a node- no.of edges from that node to deepest leaf
degree of a node- no. of direct children
degree of a tree- heighest degree of a node

Binary tree- each node having degree<=2. or atmost 2 children for each node

full/strict BT- all nodes have either 0 or 2 children

perfect BT- all internal nodes have 2 children + all leaf nodes on same level

balanced BT- max. height for 'n' nodes could be log(n)

complete BT- all levels completely filled( if empty then possibly the last level only) + last level must have left allignment

degenerate BT- every parent node has exactly one child
left skewed degenerate BT- all children left alligned
right skewed degenerate BT- all children right alligned

*/