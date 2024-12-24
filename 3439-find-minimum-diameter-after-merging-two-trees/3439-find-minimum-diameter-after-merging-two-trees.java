import java.util.*;

class Solution {
    public int minimumDiameterAfterMerge(int[][] edges1, int[][] edges2) {
        int n = edges1.length + 1;
        int m = edges2.length + 1;

        int d1 = findDiameter(n, edges1);
        int d2 = findDiameter(m, edges2);

        return Math.max(d1, Math.max(d2, (d1 + 1) / 2 + (d2 + 1) / 2 + 1));
    }

    private int findDiameter(int nodes, int[][] edges) {
        List<List<Integer>> graph = new ArrayList<>();
        for (int i = 0; i < nodes; i++) {
            graph.add(new ArrayList<>());
        }
        for (int[] edge : edges) {
            graph.get(edge[0]).add(edge[1]);
            graph.get(edge[1]).add(edge[0]);
        }

        // First BFS to find farthest node from an arbitrary start node
        int[] farthest = bfs(0, graph, nodes);
        // Second BFS from the farthest node to get the diameter
        return bfs(farthest[0], graph, nodes)[1];
    }

    private int[] bfs(int start, List<List<Integer>> graph, int nodes) {
        Queue<Integer> queue = new LinkedList<>();
        boolean[] visited = new boolean[nodes];
        int[] distance = new int[nodes];

        queue.add(start);
        visited[start] = true;

        int farthestNode = start;
        int maxDistance = 0;

        while (!queue.isEmpty()) {
            int node = queue.poll();
            for (int neighbor : graph.get(node)) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    distance[neighbor] = distance[node] + 1;
                    queue.add(neighbor);

                    if (distance[neighbor] > maxDistance) {
                        maxDistance = distance[neighbor];
                        farthestNode = neighbor;
                    }
                }
            }
        }

        return new int[]{farthestNode, maxDistance};
    }
}
