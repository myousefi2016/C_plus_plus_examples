<IMG src="http://davidcanino.github.io/img/logo-sun.jpg" border="0" width="180" height="97">

<H3>The 'Example-080' Test</H3>

This basic example about the use of the C++ programming language validates the definition and the implementation of a generic <i>'class'</i>. It is well known that the <i>'class'</i> is the most important construct for an object-oriented programming language (like the C++ programming language). In this case, the basic definition of the <i>'Movie'</i> class is proposed, which describes briefly a generic movie. This class has some <i>'private'</i> member fields, that are accessed only by the corresponding <i>'getter/setter'</i> member functions. This class is also equipped with a (friend) exporting operator, which operates on a generic output stream (not necessarily a file).<p>In particular, this test consists of the <i>'Example-080'</i> executable file, based on several components, that are distributed in several files:<ul>
<li>the <i>'main()'</i> function is implemented in the <i>'main.cpp'</i> C++ source file (in the <i>'src'</i> folder);</li>
<li>the <i>'Movie'</i> class is defined in the <i>'movie.h'</i> C++ header file (in the <i>'include'</i> folder);</li>
<li>the implementation of the member functions, offered by the <i>'Movie'</i> class, is stored in the <i>'movie.cpp'</i> C++ source file (in the <i>'src'</i> folder).</li></ul><p>Several methods for building this test are provided, and take into the account its source code organization (described above).<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://cmake.org">CMake Building Tool</A></i></h4>

This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="http://cmake.org">CMake Building Tool</A></i> from the <i>'cmake'</i> folder:
<pre>mkdir build
cd build
cmake ..
make
</pre><p>As mentioned above, the <i>'Example-080'</i> executable file is created. For instance, this test is executed by running:<pre>./Example-080</pre><p>This building method is tested with the <A href="http://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="http://clang.llvm.org/"><i>CLANG</i></A> compiler under the MacOsX 11.* El-Capitan (and higher), and the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A> under the Microsoft Windows 10.

In this latter case, three custom projects are automatically generated, and ready to be open in the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. The solution file of interest is the <i>'Example-080.sln'</i> solution file, which can be open and built in the program without being modified.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2015)</A></i></h4>

This test is also built by using the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. In particular, the <i>'vstudio'</i> folder contains the <i>'Example-080.sln'</i> solution file, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build'</i> command.

Note that this solution file is independently created from scratch, and is different from the solution file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://developer.apple.com/xcode/">Apple XCode</A></i></h4>

This test is also built by using the <A href="http://developer.apple.com/xcode/"><i>Apple XCode</i></A> (based on the <A href="http://clang.llvm.org/"><i>CLANG</i> compiler</A>) under the MacOsX 11.* El-Capitan (and higher). In particular, the <i>'xcode'</i> folder contains the <i>'Example-080.xcodeproj'</i> project file, which can be open and built in the program without being modified. It can be built by simply clicking on the <i>'Build & Run'</i> command.

Note that this project file is independently created from scratch, and is different from the project file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p><table border=1><tr><td><p><b>ATTENTION:</b><p>All trademarks or registered trademarks are the property of their respective owners.</td></tr></table>
