SUMMARY = "Python implementation of subunit test streaming protocol"
HOMEPAGE = "https://pypi.python.org/pypi/python-subunit/"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://README.rst;beginline=1;endline=20;md5=909c08e291647fd985fbe5d9836d51b6"

PYPI_PACKAGE = "python-subunit"

SRC_URI[md5sum] = "30f1ab20651d94442dd9a7f8c9e8d633"
SRC_URI[sha256sum] = "042039928120fbf392e8c983d60f3d8ae1b88f90a9f8fd7188ddd9c26cad1e48"

inherit pypi

BBCLASSEXTEND = "nativesdk"
