#include "matrix.h"
Matrix :: Matrix(int row,int col)
{
   mat=new int[n][n];
   this->row=row;
   this->col=col; 
}
void Matrix::getData()
{
    cout<<"Enter "<<(this->row)" X "<<(this->col)<<" Elements for the matrix : ";
    for(int i=0;i<this->row;i++)
        for(int j=0;j<this->col;j++)
            cin>>mat[i][j];
}
void Matrix::display()
{
    for(int i=0;i<this->row;i++)
    {
        for(int j=0;j<this->col;j++)
        {
            cout<<mat[i]<<" ";
        }
        cout<<"\n";
    }
}
Matrix::add(Matrix ob)
{
    Matrix res(this->row,this->col);
    for (int i=0;i<ob.row;i++)
    {
        for(int j;j<ob.col;j++)
            res.mat[i][j]=this->mat[i][j]+ob.mat[i][j];
    }
    return res;
}
