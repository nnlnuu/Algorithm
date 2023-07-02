/**
 * [SILVER 2] 최소 힙
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
int heap[1000002] = {0,};
int heapCnt = 0;
vector<int>ans;
/**
 * 부모 노드 id = 자식 노드 /2
 * 왼쪽 자식 노드 idx = 부모 노드 *2
 * 오른쪽 자식 노드 idx = 부모 노드 * 2 + 1
 * */

//struct Heap{
//    int *array;
//    int count;
//    int capacity;
//    int heap_type;
//};
//
//int parent(int *arr,int i){
//    if(i<=0 || i >=heapCnt) return -1;
//    return (i-1/2);
//}
//int LeftChild(int * arr,int i){
//    int left = 2*i +1;
//    if(i<0|| left>=heapCnt) return -1;
//    return left;
//}
//int rightChild(int * arr,int i){
//    int right = 2*i + 2;
//    if(i<0 || right>=heapCnt) return -1;
//    return right;
//}

void swap(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void push(int data){
    heap[++heapCnt] = data;
    int child = heapCnt;
    int parent = child/2;
//    cout << "input data : "<<data<<"-> ";
    // bottom-up
//    for(int i = 1;i<=heapCnt;i++){
//        cout << heap[i] <<" ";
//    }cout <<"\n";
    while(child>1 && heap[child] < heap[parent]){ // parent 가 더 크면 swap
        swap(&heap[child],&heap[parent]);
        child = parent;
        parent = child/2;
    }
}
int pop(){
    int result = heap[1];
    ans.push_back(result);
    swap(&heap[1],&heap[heapCnt]);
//    cout << "====pop===="<<endl;
//    cout << "result : "<<result<<endl;
    //top-down
    int parent = 1;
    int child = 2;
    heap[heapCnt--] = 0;
//    cout << "heap cont : " <<heapCnt<<"\n";
    if(child + 1 <= heapCnt){
        if(heap[child] >= heap[child+1]){
            child = child +1;
        }
    }

    // top down
//    cout << "parent idx : "<<parent << " && "<<"heap parent : "<<heap[parent]<<endl;
//    cout << "child idx : "<<child << " && "<<" heap child : " <<heap[child]<<endl;

    while(child <= heapCnt && heap[child] < heap[parent]){
//        cout << "before swap : "<< heap[child] << " || " << heap[parent]<<endl;
        swap(&heap[child],&heap[parent]);
//        cout << "after swap : "<< heap[child] << " || " << heap[parent]<<endl;
        parent = child;
        child = parent*2;

        if(child + 1 <=heapCnt){
            if(heap[child] >= heap[child+1]){
                child = child+1;
            }
        }
    }

    return result;
}

int main(void){
    FASTIO;

    int n,tmp;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tmp;
        if(!tmp) { // tmp == 0
            if(!heapCnt) {
//                cout << "0\n";
                ans.push_back(0);
            }
            else {
                pop();
//                cout << "print array->";
//                cout << "heap count : "<<heapCnt<<"\n";
//                for(int j = 1 ;j<=heapCnt;j++){
//                    cout << heap[j] <<" ";
//                }cout << "\n";
            }
            continue;
        }
        else push(tmp);
    }

//    cout << "print result all \n";
    vector<int> :: iterator it = ans.begin();
    for(;it!=ans.end();it++){
        cout << *it << " ";
    }cout <<"\n";

    return 0;
}