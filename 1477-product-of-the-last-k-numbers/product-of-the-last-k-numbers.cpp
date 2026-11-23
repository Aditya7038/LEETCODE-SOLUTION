class ProductOfNumbers {
public:
    ProductOfNumbers() {
        
    }

    vector<int> v;
    
    void add(int num) {

        v.push_back(num);
        
    }
    
    int getProduct(int k) {

        int n = v.size();

        int i = n-k;

        int sum = 1;

        for(int i = n-k ; i<n;i++ ){

            if(v[i]==0) return 0;

            sum *= v[i];
        }

        return sum;


        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */