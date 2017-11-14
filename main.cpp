#include<iostream>
#include<vector>
#include<string>
#include "bitmap.h"
#include<cstdlib>

using namespace std;
//----------------------------------------------------prototypes------------------------------------------------------//

//asks for name of the functions and repeats until you hit 10 images and makes the image into a matrix
vector <string>  inputFileName(string);

//creates a matrix for all the images
vector <vector <vector <Pixel> > > createPixelMatrix(vector <string> );

//will go through the image and find the value of the pixel and take the average of all the stacked images
Bitmap findPixelRGB(vector < vector < vector < Pixel > > > );

//--------------------------------------------------------------------------------------------------------------------//

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
    Pixel bmp; 
    vector<vector<Pixel> matrix;
    vector<string> Names;
    for( int t = 0; t < 10; t++)
    {
        Bitmap file;
        Pixel value;
        file = inputFileName(filename);
        
        cout<<"image "<<t<<" is processed"<<endl;
        value = rgb;
   }
    
    return 0;
}

vector <string> inputFileName( string filename )
{
                Bitmap image;
                string filename;
                cout<<"Input file name"<<endl;
                cin<<filename;
                
                image.open(filename)
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
return filename;               
}

vector < vector < vector < Pixel > > > createPixelMatrix( vector < string > filename )
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
    return bmp;
}

Bitmap findPixelRGB(vector < vector < vector < Pixel > > > & matrix)
{
    Pixel rgb;
    int value;
    int rows;
    int cols;
    int depth;

    rows = matrix.size();
    cols = matrix[0].size();

    for( int d = 0; d < matrix[r][c].size(); r++)
    {
        int sumRed = 0;
        int sumGreen = 0;
        int sumBlue = 0;

        for( int c = 0; c < matrix[r].size(); c++)
        {
            for( int r = 0; r < matrix.size(); d++)
            {
                rgb = matrix[r][c][d];
                sumRed += rgb.red;
                sumGreeen += rgb.green;
                sumBlue += rgb.blue;        
                int avgRed = sumRed / matrix[r][c].size();
                int avgGreeen = sumGreen / matrix[r][c].size();
                int avgBlue = sumBlue / matrix[r][c].size();
                rgb.red = avgRed;
                rgb.green = avgGreen;
                rgb.blue = avgBlue;
                bmp[r][c][d] = rgb;
            }   
        }
    }
image.fomPixelMatix(bmp);
image.save("composite-gregjbauer.bmp")
return composite-gregjbauer.bmp;
}

