class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector <vector <int>> Graph(numCourses);
        vector <int> inDegree(numCourses, 0);
        vector <bool> courseCompleted(numCourses, false);
        for (vector <int> &prerequisite: prerequisites) {
            Graph[prerequisite[1]].push_back(prerequisite[0]);
            inDegree[prerequisite[0]]++;
        }
        queue <int> Queue;
        for (int i = 0; i < numCourses; i++) {
            if (inDegree[i] == 0) {
                Queue.push(i);
            }
        }
        while (!Queue.empty()) {
            int courseNo = Queue.front();
            Queue.pop();
            courseCompleted[courseNo] = true;
            for (int &course: Graph[courseNo]) {
                inDegree[course]--;
                if (inDegree[course] == 0) {
                    Queue.push(course);
                }
            }
        }
        for (int i = 0; i < numCourses; i++) {
            if (!courseCompleted[i]) {
                return false;
            }
        }
        return true;
    }
};