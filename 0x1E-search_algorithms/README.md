<h1>Search Algorithms</h1>
<h2>Linear Search</h2>
    <p>
        <strong>Description:</strong> Linear search, also known as sequential search, involves scanning through each element in a data structure (usually an array or list) one by one until the target element is found or the entire data structure is exhausted.
    </p>
    <p>
       Time Complexity:O(n) in the worst case, where 'n' is the number of elements.
      Binary Search
         Description: Binary search is a more efficient search algorithm that works on sorted data. It repeatedly divides the search space in half and compares the middle element with the target value.
      Time Complexity: O(log n) in the worst case, where 'n' is the number of elements.
    </p>
        
     <h2>Hashing</h2>
    <p>
        Description: Hashing is a technique that uses a hash function to map keys or values to an index in an array, allowing for efficient retrieval and storage of data.
    <p>
        Time Complexity: O(1) on average, but it can degrade to O(n) in the worst case if there are many collisions.
    </p>

    <h2>Depth-First Search (DFS)</h2>
    <p>
        Description: DFS is used for traversing or searching tree and graph data structures. It explores as far as possible along each branch before backtracking.
    </p>
    <p>
        Time Complexity: O(V + E), where 'V' is the number of vertices and 'E' is the number of edges.
    </p>

    <h2>Breadth-First Search (BFS)</h2>
    <p>
        Description: BFS is another algorithm for traversing or searching trees and graphs. It explores all the neighbor nodes at the current depth before moving on to the next level.
    </p>
    <p>
        Time Complexity: O(V + E), where 'V' is the number of vertices and 'E' is the number of edges.
    </p>

    <h2>A* Search Algorithm</h2>
    <p>
        Description: A* is a popular informed search algorithm used in pathfinding and graph traversal. It combines elements of both DFS and BFS with a heuristic function to efficiently find the shortest path.
    </p>
    <p>
        Time Complexity: Depends on the specific implementation and heuristic function.
    </p>

    <h2>Uniform Cost Search (UCS)</h2>
    <p>
        Description: UCS is used in finding the shortest path in weighted graphs. It expands nodes with the lowest path cost first.
    </p>
    <p>
        Time Complexity: Similar to BFS, but with different cost considerations.
    </p>

    <h2>Greedy Best-First Search</h2>
    <p>
        Description: This search algorithm selects the most promising node based on a heuristic and explores it. It is not guaranteed to find the optimal solution but can be very efficient.
    </p>
    <p>
        Time Complexity: Depends on the specific implementation and heuristic function.
    </p>

    <h2>Interpolation Search</h2>
    <p>
        Description: Interpolation search is an efficient algorithm for searching in ordered datasets by estimating the position of the target element based on its value.
    </p>
    <p>
        Time Complexity: O(log log n) on average, where 'n' is the number of elements.
    </p>

    <h2>Exponential Search</h2>
    <p>
        Description: Exponential search is used for finding an element in a sorted array by narrowing down the search range exponentially.
    </p>
    <p>
        Time Complexity: O(log n), which is more efficient than linear search.
    </p>

    <h2>Jump Search</h2>
    <p>
        Description: Jump search is an algorithm used for searching sorted arrays. It divides the array into blocks and performs a linear search within the relevant block.
    </p>
    <p>
        Time Complexity: O(√n), making it more efficient than linear search.
    </p>
