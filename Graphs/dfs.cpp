//
// Created by Webis on 16/09/2020.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {

    vector< vector<int> > G;
    G.resize(10);
    G[1].push_back(0);
    G[0].push_back(2);
    G[2].push_back(1);
    G[0].push_back(3);
    G[1].push_back(4);
    //G[4].push_back(5);

    for (int i = 1; i < G.size(); ++i) {
        cout << i << " -";
        for (int j = 0; j < G[i].size(); ++j) {
            cout << " " << G[i][j];
        }
        cout << endl;
    }

    int begin = 0;

    stack<int> Q;
    Q.push(begin);

    vector<int> dist(10, -1);
    vector<int> pai(10, -1);
    vector<bool> cor(10, false);

    dist[begin] = 0;
    cor[begin] = false;

    while(!Q.empty()){
        int front = Q.top();
        Q.pop();
        cout << front << " " ;
        for (int i = 0; i < G[front].size(); ++i) {
            if(!cor[G[front][i]]){
                dist[G[front][i]] = dist[front] + 1;
                pai[G[front][i]] = front;
                cor[G[front][i]] = true;
                Q.push(G[front][i]);
            }
        }
    }

    for(int i=1;i<=dist.size();i++){
        cout<<"dist "<< i <<" = "<<dist[i]<<endl;
    }

    return 0;
}
