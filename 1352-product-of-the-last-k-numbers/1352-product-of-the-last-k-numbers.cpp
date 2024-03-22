class ProductOfNumbers {
private:
    vector<int> data;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        data.push_back(1);
        for(int i=0; i<data.size(); i++){
            data[i]*=num;
        }
    }
    
    int getProduct(int k) {
        return data[data.size()-k];
    }
};
