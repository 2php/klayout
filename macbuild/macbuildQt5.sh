#!/bin/bash

# Using Qt 5.9.3 from Mac Ports.
#
# Ruby: OSX native
# Python: OSX native
./build.sh \
    -release \
    -qmake          /opt/local/libexec/qt5/bin/qmake \
    -build          ./qt5.build.macos-high-sierra \
    -bin            ./qt5.bin.macos-high-sierra \
    -option         -j2 \
    -with-qtbinding \
    -qt5 \
    -ruby           /System/Library/Frameworks/Ruby.framework/Versions/2.3/usr/bin/ruby \
    -python         /System/Library/Frameworks/Python.framework/Versions/2.7/bin/python \
    -rbinc          /System/Library/Frameworks/Ruby.framework/Headers \
    -rblib          /System/Library/Frameworks/Ruby.framework/Versions/2.3/usr/lib/libruby.dylib \
    -pyinc          /System/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 \
    -pylib          /System/Library/Frameworks/Python.framework/Versions/2.7/lib/libpython2.7.dylib 2>&1 \
    | tee macbuildQt5.log