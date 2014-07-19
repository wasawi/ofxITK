
Notes
-----

Install CMAKE
http://www.cmake.org/cmake/resources/software.html

Install ITK
“git clone git://itk.org/ITK.git ~/Desktop/ITK”

Open cmake:
set the paths
set Source code as  	“~/Desktop/ITK”
set the binaries as 	“~/Desktop/ITK_bin”
click configure.
set copile for “unix makefiles”

Deactivate:
BUILD_DOCUMENTATION, 
BUILD_EXAMPLES, 
BUILD_SHARED_LIBS,
BUILD_TESTING.

and set:
CMAKE_CXX_FLAGS		-m32 -stdlib=libc++
CMAKE_C_FLAGS		-m32 -stdlib=libc++

then build it:
cd ~/Desktop/ITK_bin
sudo make
sudo make install

