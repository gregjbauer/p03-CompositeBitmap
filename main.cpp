#include<iostream>
#include<vector>
#include<string>
#include "bitmap.h"

//----------------------------------------------------prototypes------------------------------------------------------//

//asks for name of the functions and repeats until you hit 10 images and makes the image into a matrix
vector <string>  inputFileName(string);

//creates a matrix for all the images
vector <vector <vector <int> > > createPixelMatrix(vector <string> );

//will go through the image and find the value of the pixel
int findPixelRGB(vector < vector < vector < Pixel > > > );

//will find the input of all the images and finds the average of each pixel throughout the 10 images
void findAverage(int & );

//inputs all the averages into each pixel of the matrix and prints it out
void printPixelMatrix(Bitmap &);

//--------------------------------------------------------------------------------------------------------------------//

using namespace std;

/* WHAT TO DO
   - ask for a file name
   - repeat until it hits the maximum of 10 files
   - print errors if it doesn't follow the parameters of a bmp image with the correct dimensions
   - take each image and put it into a matrix
   - find the average of each pixel while looking at all 10 images
   - input the average value of each image into the pixel of the new image
   - make sure to have progress checks while the code is compiling
   - save as "composite-gregjbauer.bmp"
 */
int main()
{
    for( int t = 0; t < 10; t++)
    {
        Bitmap file;

        file = inputFileName(filename);
        
        cout<<"image "<<t<<" is processed"
    }
    

    return 0;
}

vector <string> inputFileName( string )
{
                Bitmap filename;
                cout<<"Input file name"<<endl;
                cin<<filename;
                
                bool validBMP = isImage();
                if(validBMP = true )
                {
                    cout<<"Image is valid"<<endl;
                    vector<string> Names;
                    Names.push_back(filename);
                }
                else
                {
                    cout<<"Image is invalid"<<endl;
                }
                
}

vector < vector < vector < Pixel > > > createPixelMatrix( vector < string> )
{
    vector < vector <vector < Pixel > > > bmp;
    
    image.open(filename);
    
    if(validBMP = true)
    {
        filename.toPixelMatrix();
       
        for(int r = 0; r < bmp.size(); r++)
        {
            for(int c = 0; c < bmp[r].size(); c++)
            {
                 for(int d = 0; d < bmp[r][c].size(); d++)
                 {
                    bmp.push_back(filename)
                 }
            }
        }
    }
    return matrix;
}

int findPixelRGB(vector < vector < vector < Pixel > > > matrix)
{
    Pixel rgb;
    int value;
    int rows;
    int cols;
    int depth;

    rows = matrix.size();
    cols = matrix[0].size();

    for( int r = 0; r < matrix.size(); r++)
    {
        for( int c = 0; c < matrix[r].size(); c++)
        {
            for( int d = 0; d < matrix[r][c].size(); d++)
            {
                rgb = matrix[r][c][d];
            }
        }
    }
return rgb;
}

void findAverage(Pixel & rgb )
{
    int sumRed = rgb.red / d;
    int sumGreen = rgb.green / d;
    int sumBlue = rgb.blue / d;
}
void printPixelMatrix(Bitmap & )
{
    bmp.fromPixelMatrix
}
