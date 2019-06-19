    /*
     
                // Anurag yadav
     
    */
    
    /*
      Problem statement
      
      https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/practice-problems/algorithm/distinct-integers-in-range-66eca44b/
    
    
    */
    
    
    
    #include<bits/stdc++.h>
    #define ll long long
    #define li long int
    using namespace std;
    bitset<5001> tree1[400001],tree2[400001];
    void build_tree(bitset<5001> tree[],int node,int arr[],int start,int end)
    {
        if(start>end)
        return;
        if(start==end)
        {
            tree[node].set(arr[start]);
        }
        else
        {
            int mid=(start+end)/2;
            build_tree(tree,2*node+1,arr,start,mid);
            build_tree(tree,2*node+2,arr,mid+1,end);
            tree[node]=tree[2*node+1]|tree[2*node+2];
        }
    }
    bitset<5001> query(bitset<5001> tree[],int node,int start,int end,int l,int r)
    {
        if(l>end || r<start)
        {
            return 0;
        }
        if(l<=start && r>=end)
        {
            return tree[node];
        }
        else
        {
            int mid=(start+end)/2;
            return query(tree,2*node+1,start,mid,l,r)|query(tree,2*node+2,mid+1,end,l,r);
        }
    }
    int main()
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int temp=ceil(log2(2*n-1));
        int size=pow(2,temp);
        build_tree(tree1,0,a,0,n-1);
        build_tree(tree2,0,b,0,n-1);
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            cout<<(query(tree1,0,0,n-1,a-1,b-1)|query(tree2,0,0,n-1,c-1,d-1)).count()<<endl;
        }
    }
