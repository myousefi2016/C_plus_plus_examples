<IMG src="http://davidcanino.github.io/img/logo-sun.jpg" border="0" width="180" height="97">

<H3>The 'Example-054' Test</H3>

This basic example about the use of the C++ programming language validates the definition and the implementation of the <i>'struct'</i> (constructs), equipped with several member functions. The <i>'struct'</i> (construct) of interest is exploited for computing the amount of the change, due to the customer, and expressed directly in the specific US coins (dollars, quarters, dimes, nickels, and pennies).<p>In particular, this test consists of the <i>'Example-054'</i> executable file, based on several components, that are distributed in several files:<ul>
<li>the <i>'main()'</i> function is implemented in the <i>'main.cpp'</i> C++ source file (in the <i>'src'</i> folder);</li>
<li>the <i>'struct'</i> of interest is defined in the <i>'myheader.h'</i> C++ header file (in the <i>'include'</i> folder);</li>
<li>the implementation of the member functions, offered by the <i>'struct'</i> of interest, is stored in the <i>'myheader.cpp'</i> C++ source file (in the <i>'src'</i> folder).</li></ul><p>Several methods for building this test are provided, and take into the account its source code organization (described above).<p><table border=1 width=100%><tr><td><p><b>VERY IMPORTANT:</b><p>For the sake of the simplicity, we assume that this test can be built and run ONLY if your C++ compiler is a C++11-compliant compiler. The most recent versions of the compilers in the current literature are C++11-compliant.<p></td></tr></table><p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://cmake.org">CMake Building Tool</A></i></h4>

This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="http://cmake.org">CMake Building Tool</A></i> from the <i>'cmake'</i> folder:
<pre>mkdir build
cd build
cmake ..
make
</pre><p>As mentioned above, the <i>'Example-054'</i> executable file is created. For instance, this test is executed by running:<pre>./Example-054</pre><p>This building method is tested with the <A href="http://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="http://clang.llvm.org/"><i>CLANG</i></A> compiler under the MacOsX 11.* El-Capitan (and higher), and the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A> under the Microsoft Windows 10.

In this latter case, three custom projects are automatically generated, and ready to be open in the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. The solution file of interest is the <i>'Example-054.sln'</i> solution file, which can be open and built in the program without being modified.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2015)</A></i></h4>

This test is also built by using the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. In particular, the <i>'vstudio'</i> folder contains the <i>'Example-054.sln'</i> solution file, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build'</i> command.

Note that this solution file is independently created from scratch, and is different from the solution file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://developer.apple.com/xcode/">Apple XCode</A></i></h4>

This test is also built by using the <A href="http://developer.apple.com/xcode/"><i>Apple XCode</i></A> (based on the <A href="http://clang.llvm.org/"><i>CLANG</i> compiler</A>) under the MacOsX 11.* El-Capitan (and higher). In particular, the <i>'xcode'</i> folder contains the <i>'Example-054.xcodeproj'</i> project file, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build & Run'</i> command.

Note that this project file is independently created from scratch, and is different from the project file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p><table border=1><tr><td><p><b>ATTENTION:</b><p>All trademarks or registered trademarks are the property of their respective owners.</td></tr></table>
