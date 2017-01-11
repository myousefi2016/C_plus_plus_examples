<IMG src="http://davidcanino.github.io/img/logo-sun.jpg" border="0" width="180" height="97">

<H3>The 'Example-001' Test</H3>

This is a very basic example about the use of the C++ programming language. Basically, it is similar to the classic <i>'Hello World'</i> for testing the correctness of the building infrastructure.<p>In particular, this test consists of the <i>'Example-001'</i> executable file, starting uniquely from the <i>'main.cpp'</i> C++ source file (in the <i>'src'</i> folder) without using other dependencies.<p>Several methods for its building are provided.

<h4>Instructions for building this test with the <i><A href="http://cmake.org">CMake Building Tool</A></i></h4>

This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="http://cmake.org">CMake Building Tool</A></i>:
<pre>mkdir build
cd build
cmake ..
make
</pre><p>This test is executed with:<pre>./Example-001</pre><p>This method is tested with the <A href="http://gcc.gnu.org/">GCC</A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="http://clang.llvm.org/">CLANG</A> compiler under the MacOsX 11.* El-Capitan, and the <A href="http://www.visualstudio.com/">Visual Studio (Community Edition 2015)</A> under the MS Windows 10.

In this latter case, three custom projects are automatically generated, and ready to be open in the <A href="http://www.visualstudio.com/">Visual Studio (Community Edition 2015)</A>. The solution of interest is the <i>'Example-001.sln'</i> solution, which can be open and built in the program.
