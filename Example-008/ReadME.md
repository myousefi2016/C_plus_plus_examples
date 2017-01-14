<IMG src="http://davidcanino.github.io/img/logo-sun.jpg" border="0" width="180" height="97">

<H3>The 'Example-008' Test</H3>

This is a basic example about the use of the C++ programming language. Basically, this program validates the implementation of several functions, defined on a separate header file.<p>In particular, this test consists of the <i>'Example-008'</i> executable file, based on several components, that are distributed in several files:<ul>
<li>the <i>'main'</i> function is implemented in the <i>'main.cpp'</i> C++ source file (in the <i>'src'</i> folder)</li>
<li>the <i>custom</i> functions of interest are defined in the <i>'myfunctions.h'</i> C++ header file (in the <i>'include'</i> folder)</li>
<li>the implementation for the <i>custom</i> functions are interest are stored in the <i>'myfunctions.cpp'</i> C++ source file (in the <i>'src'</i> folder)</li></ul><p>Several methods for its building are provided, and take into the account the source code organization (described above).<p>

<h4>Instructions for building this test with the <i><A href="http://cmake.org">CMake Building Tool</A></i></h4>

This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="http://cmake.org">CMake Building Tool</A></i>:
<pre>mkdir build
cd build
cmake ..
make
</pre><p>As mentioned above, the <i>'Example-008'</i> executable file is created. For instance, this test is executed by running:<pre>./Example-008</pre><p>This building method is tested with the <A href="http://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="http://clang.llvm.org/"><i>CLANG</i></A> compiler under the MacOsX 11.* El-Capitan (and higher), and the <A href="http://www.visualstudio.com/"><i>Visual Studio (Community Edition 2015)</i></A> under the MS Windows 10.

In this latter case, three custom projects are automatically generated, and ready to be open in the <A href="http://www.visualstudio.com/"><i>Visual Studio (Community Edition 2015)</i></A>. The solution of interest is the <i>'Example-008.sln'</i> solution, which can be open and built in the program without being modified.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://www.visualstudio.com/">Visual Studio (Community Edition 2015)</A></i></h4>

This test is also built by using the <A href="http://www.visualstudio.com/"><i>Visual Studio (Community Edition 2015)</i></A>. In particular, the <i>'vstudio'</i> folder contains the <i>'Example-008.sln'</i> solution, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build'</i> command.

Note that this solution is independently created from scratch, and is different from the solution, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://developer.apple.com/xcode/">XCode</A></i></h4>

This test is also built by using the <A href="http://developer.apple.com/xcode/"><i>XCode</i></A> (based on the <A href="http://clang.llvm.org/"><i>CLANG</i> compiler</A>) under the MacOsX 11.* El-Capitan (and higher). In particular, the <i>'xcode'</i> folder contains the <i>'Example-008.xcodeproj'</i> project, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build & Run'</i> command.

Note that this solution is independently created from scratch, and is different from the project, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>