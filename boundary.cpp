#include <iostream> 
#include <vector> 
using namespace std;

class Boundary
{
    public:
        vector<float> min,max,nom,min_p,min_m,max_p,max_m;
        Boundary(vector<float> &bounds){
            int nof_para = bounds.size()/2;

            for (size_t i = 0; i < nof_para; i++){
                auto mn =  bounds[2*i]; // min of para 
                auto mx = bounds[2*i+1]; //max of para
                
                min.push_back(mn);
                max.push_back(mx);

                min_m.push_back(mn-1);
                min_p.push_back(mn+1);
    
                max_m.push_back(mx-1);
                max_p.push_back(mx+1);
                auto nm = (mx - mn)/2;

                nom.push_back(nm);
            }
            
        }
        void bvc(){
            
            for (size_t i = 0; i < nom.size(); i++){
                for (size_t j = 0; j < min.size(); j++){
                    if(i!=j)
                        cout<<nom[i]<<","<<min[j]<<endl;
                }
                
            }

            for (size_t i = 0; i < nom.size(); i++){
                for (size_t j = 0; j < max.size(); j++){
                    if(i!=j)
                        cout<<nom[i]<<","<<max[j]<<endl;
                }
                
            }

            for (size_t i = 0; i < nom.size(); i++){
                for (size_t j = 0; j < min_p.size(); j++){
                    if(i!=j)
                        cout<<nom[i]<<","<<min_p[j]<<endl;
                }
                
            }

            for (size_t i = 0; i < nom.size(); i++){
                for (size_t j = 0; j < max_m.size(); j++){
                    if(i!=j)
                        cout<<nom[i]<<","<<max_m[j]<<endl;
                }
                
            }
            

        }

        
        
};

int main(){
    vector<float> bounds = {2,10,20,100}; // {a_min,a_max,b_min,b_max,c_min,c_max,......}
    Boundary b = Boundary(bounds);
    b.bvc();

}