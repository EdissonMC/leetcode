#include <iostream>
#include <vector>

/*
    Description:>
    Given two sorted arrays nums1 and nums2 of size m and n respectively, 
    return the median of the two sorted arrays.

*/

// int sort ( std::vector <int> vector1,  std::vector <int> vector2);

void merge ( std::vector <int>& vec,    std::vector <int> &vector1,   std::vector <int> &vector2 );
void merge2(std::vector<int> &vec,   std::vector<int> & v1,  std::vector<int> & v2); 
double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);


int main () {
    std::vector <int> vector1{1,3};
    std::vector <int> vector2{2};

    findMedianSortedArrays( vector1,  vector2);
    
    

    return 0;
}



double findMedianSortedArrays(std::vector<int>& vector1, std::vector<int>& vector2) {

    
    std::vector <int> vectorData;

    merge(vectorData,  vector1,  vector2);

    //  SHOWING THE ORIGINAL VECTOR
        std::cout << "\nOutput of begin and end: \n"; 
        for (auto i = vectorData.begin();  i != vectorData.end();  ++i) 
            std::cout << *i << " "; 

        std::cout << "\n\n";


    int parte1 = 0;
    int parte2 = 0;
    int parteImpar=0;

    double media = 0.0;

    if (vectorData.size()%2 == 0){
       
        std::cout << "Es Par \n";
        parte1 =  vectorData.size()/2-1;
        parte2 = (vectorData.size()/2) ;

        media = ( vectorData[parte1] +  vectorData[parte2] ) /2.00;

        std::cout << "IndiceL " << parte1 << "  indiceR: " << parte2 <<" \n";
         std::cout << "DatoL " <<  vectorData[parte1] << "  DatoR: " <<  vectorData[parte2] <<" \n";
        std::cout <<"Media : " <<  media<< "\n";
    }else{

        parteImpar= vectorData.size()/2 ;
        media = vectorData[parteImpar];
        std::cout << "Es Impar \n";
        std::cout << "IndiceCentral : "<< parteImpar <<"\n";

        std::cout <<"Media : " <<  media<< "\n";
    }

    return 0;

}

// void sort ( std::vector <int>& vec,    std::vector <int> &vector1,    std::vector <int> &vector2 ) {

//     int size_v1 = vector1.size();
//     int size_v2 = vector2.size();


//     std::vector <int> _vector1;
//     std::vector <int> _vector2;

    // if (size_v1 <= 0  &&   size_v2<= 0) {
        // return 0;
    // }


//         for(int i =0 ; i<size_v1 ; i++){
//             _vector1 [i] = vector1[i]; 
//         }

//         for(int j =0 ; j<size_v2 ; j++){
//             _vector2 [j] = vector2[j]; 
//         }

    
   


//     vec.clear();

//     sort(vec,  vector1,  vector2);
//     sort(vec,  vector1,  vector2);

//     merge(vec,vector1,vector2);
// }


void merge ( std::vector <int>& vec,    std::vector <int> &vector1,   std::vector <int> &vector2 ) {

    int size_v1 = vector1.size();
    int size_v2 = vector2.size();

    int p1 =0;
    int p2 =0;


    while (p1 < size_v1  &&  p2 < size_v2) {

        // std::cout << "\nComparando :" << vector1[p1] <<  " : "<<  vector2[p2] << "\n"; 
       if(vector1[p1]  <  vector2[p2]) {
            vec.push_back(vector1[p1++]);
       }else{
            vec.push_back(vector2[p2++]);
       }

    }


     while (p1 < size_v1)  vec.push_back(vector1[p1++]);
     while (p2 < size_v2)  vec.push_back(vector2[p2++]);

}

