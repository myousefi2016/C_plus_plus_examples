<IMG src="http://davidcanino.github.io/img/logo-sun.jpg" border="0" width="180" height="97">

<H3>The 'Example-084' Test</H3>

This basic test about the use of the C++ programming language validates the definition and the implementation of a <code><i>'class'</i></code> (the most important construct for an object-oriented programming language). Specifically, the <i>'inheritance'</i> mechanism is validated in this test. This mechanism is exploited for extending a <i>'parent class'</i> (also called the <i>'base class'</i>) in order to create at least one new class. This latter, called the <i>'child class'</i> (also known as the <i>'derived class'</i>), retains several characteristics of the corresponding <i>'parent class'</i>. The <i>'derived'</i> class inherits the members of the <i>'base class'</i>, on top of which it can add its own member fields and functions.<p>In this test, both the <i>'parent'</i> and the <i>'child classes'</i>, described by the <i>'ParentClass'</i> and the <i>'ChildClass'</i> classes respectively, offer <code><i>'2'</i></code> (not virtual) implementations of the <i>'dummyOperation()'</i> member function with the same signature. This member function is thus an <i>'overridden'</i> member function. Here, a new instance of the <i>'ChildClass'</i> class is allocated (then deallocated) and saved as a variable of the same type, on which the overridden member function is invoked. Thus, the (not virtual) implementation for the member function of interest, provided by the <i>'ChildClass'</i> class, is invoked, since the C++ language is based on the <i>'static polymorphism'</i>. This test also shows what constructor and destructor member functions are run among those member functions, provided by the <i>'parent'</i> and the <i>'child classes'</i>. Several capabilities, offered by the C++11 standard, are also exploited.<p>In particular, this test consists of the <i>'Example-084'</i> executable file, starting uniquely from the <i>'main.cpp'</i> C++ source file (in the <code><i>'src'</i></code> folder) without using other dependencies.<p>Several methods for building this test are provided, and their building infrastructure is saved in the following folders:<p><ul>
<li>the <i><code>'cmake'</code></i> folder contains the project file for the <i><A href="http://cmake.org">CMake Building Tool</A></i>;</li>
<li>the <i><code>'vstudio'</code></i> folder contains the solution file for the <i><A href="http://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2015)</A></i>;</li>
<li>the <i><code>'xcode'</code></i> folder contains the project file for the <i><A href="http://developer.apple.com/xcode/">Apple XCode</A></i>.</li></ul><p><table border=1 width=100%><tr><td><p><b>VERY IMPORTANT:</b><p>It is clear that this test can be built and run ONLY if your C++ compiler is a C++11-compliant compiler. The most recent versions of the compilers in the current literature are C++11-compliant.<p></td></tr></table><p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://cmake.org">CMake Building Tool</A></i></h4>

This test is built by using the <i>classic</i> instructions for building a program with the <i><A href="http://cmake.org">CMake Building Tool</A></i> from the <i><code>'cmake'</code></i> folder:
<pre>mkdir build
cd build
cmake ..
make
</pre><p>As mentioned above, the <i>'Example-084'</i> executable file is created. For instance, this test is executed by running:<pre>./Example-084</pre><p>This building method is tested with the <A href="http://gcc.gnu.org/"><i>GCC</i></A> under the Ubuntu Linux 16.0.4 (LTS), as well as with the <A href="http://clang.llvm.org/"><i>CLANG</i></A> compiler under the MacOsX 11.* El-Capitan (and higher), and the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A> under the Microsoft Windows 10.

In this latter case, three custom projects are automatically generated, and ready to be open in the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. The solution file of interest is the <i>'Example-084.sln'</i> solution file, which can be open and built without being modified.<p>An interested user finds more details about other possible customization options in the Official Documentation of the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2015)</A></i></h4>

This test is also built by using the <A href="http://www.visualstudio.com/"><i>Microsoft Visual Studio (Community Edition 2015)</i></A>. In particular, the <i><code>'vstudio'</code></i> folder contains the <i>'Example-084.sln'</i> solution file, which can be open and built without being modified. It can be built by clicking on the <i>'Build'</i> command.

Note that this solution file is independently created from scratch, and is different from the solution file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p>An interested user finds more details in the Official Documentation of the <i><A href="http://www.visualstudio.com/">Microsoft Visual Studio (Community Edition 2015)</A></i>.<p><hr><p>

<h4>Instructions for building this test with the <i><A href="http://developer.apple.com/xcode/">Apple XCode</A></i></h4>

This test is also built by using the <A href="http://developer.apple.com/xcode/"><i>Apple XCode</i></A> (based on the <A href="http://clang.llvm.org/"><i>CLANG</i> compiler</A>) under the MacOsX 11.* El-Capitan (and higher). In particular, the <i><code>'xcode'</code></i> folder contains the <i>'Example-084.xcodeproj'</i> project file, which can be open and built without being modified. It can be built by clicking on the <i>'Build & Run'</i> command. The resulting <i>'Example-084'</i> executable file is stored in the <i><code>'Build/Products/Debug/'</code></i> folder, if the debugging symbols are included, or in the <i><code>'Build/Products/Release/'</code></i> folder, otherwise.<p>

Note that this project file is independently created from scratch, and is different from the project file, which may be generated automatically by the <i><A href="http://cmake.org">CMake Building Tool</A></i>.<p>An interested user finds more details in the Official Documentation of the <A href="http://developer.apple.com/xcode/"><i>Apple XCode</i></A>.<p><hr><p><table border=1><tr><td><p><b>ATTENTION:</b><p>All trademarks or registered trademarks are the property of their respective owners.</td></tr></table>