#include<iostream>
#include<vector>

//----------------------------------------------------prototypes--------------------------------------------------------

//asks for name of the functions and repeats until you hit 10 images and makes the image into a matrix
vector<string>  inputFileName(string);

//creates a matrix for all the images
vector<vector<int> > createPixelMatrix(vector<string> );

//will go through the image and find the value of the pixel
void findPixelRGB(int & );

//will find the input of all the images and finds the average of each pixel throughout the 10 images
void findAverage(int & );

//inputs all the averages into each pixel of the matrix and prints it out
void printPixelMatrix(Bitmap &)

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

return 0;
}
