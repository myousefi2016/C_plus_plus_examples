<IMG src="http://davidcanino.github.io/img/logo-sun.jpg" border="0" width="180" height="97">

<H3>The 'Example-010' Test</H3>

This is a basic example about the use of the C++ programming language. Basically, this program shows how defining and exploiting several variadic functions, defined on a separate header file. Broadly speaking, this is another example of the <i>separate (modular) compiling</i> for exploiting a (third-party) module.<p>In particular, this test consists of the <i>'Example-010'</i> executable file, based on several components, that are distributed in several files:<ul>
<li>the <i>'main'</i> function is implemented in the <i>'main.cpp'</i> C++ source file (in the <i>'src'</i> folder)</li>
<li>the <i>custom</i> variadic functions are defined in the <i>'myvariadic.h'</i> C++ header file (in the <i>'include'</i> folder)</li>
<li>the implementations of the <i>custom</i> variadic functions are stored in the <i>'myvariadic.cpp'</i> C++ source file (in the <i>'src'</i> folder)</li></ul><p>Several methods for its building are provided, and take into the account the source code organization (described above).<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://cmake.org">CMake Building Tool</A></i></h4>

This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="http://cmake.org">CMake Building Tool</A></i> from the <i>'cmake'</i> folder:
<pre>mkdir build
cd build
cmake ..
make
</pre><p>As mentioned above, the <i>'Example-010'</i> executable file is created. For instance, this test is executed by running:<pre>./Example-010</pre><p>This building method is tested with the <A href="http://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="http://clang.llvm.org/"><i>CLANG</i></A> compiler under the MacOsX 11.* El-Capitan (and higher), and the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A> under the Microsoft Windows 10.

In this latter case, three custom projects are automatically generated, and ready to be open in the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. The solution file of interest is the <i>'Example-010.sln'</i> solution file, which can be open and built in the program without being modified.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2015)</A></i></h4>

This test is also built by using the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. In particular, the <i>'vstudio'</i> folder contains the <i>'Example-010.sln'</i> solution file, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build'</i> command.

Note that this solution file is independently created from scratch, and is different from the solution file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://developer.apple.com/xcode/">Apple XCode</A></i></h4>

This test is also built by using the <A href="http://developer.apple.com/xcode/"><i>Apple XCode</i></A> (based on the <A href="http://clang.llvm.org/"><i>CLANG</i> compiler</A>) under the MacOsX 11.* El-Capitan (and higher). In particular, the <i>'xcode'</i> folder contains the <i>'Example-010.xcodeproj'</i> project file, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build & Run'</i> command.

Note that this project file is independently created from scratch, and is different from the project file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>