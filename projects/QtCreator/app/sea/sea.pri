########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: sea.pri
#
# Author: $author$
#   Date: 11/12/2021
#
# QtCreator .pri file for cifra executable sea
########################################################################

########################################################################
# sea

# sea TARGET
#
sea_TARGET = sea

# sea INCLUDEPATH
#
sea_INCLUDEPATH += \
$${cifra_INCLUDEPATH} \

# sea DEFINES
#
sea_DEFINES += \
$${cifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sea OBJECTIVE_HEADERS
#
#sea_OBJECTIVE_HEADERS += \
#$${CIFRA_SRC}/xos/app/console/sea/main.hh \

# sea OBJECTIVE_SOURCES
#
#sea_OBJECTIVE_SOURCES += \
#$${CIFRA_SRC}/xos/app/console/sea/main.mm \

########################################################################
# sea HEADERS
#
sea_HEADERS += \
$${CIFRA_SRC}/xos/app/console/crypto/sea/main_opt.hpp \
$${CIFRA_SRC}/xos/app/console/crypto/sea/main.hpp \

# sea SOURCES
#
sea_SOURCES += \
$${CIFRA_SRC}/xos/app/console/crypto/sea/main_opt.cpp \
$${CIFRA_SRC}/xos/app/console/crypto/sea/main.cpp \

########################################################################
# sea FRAMEWORKS
#
sea_FRAMEWORKS += \
$${cifra_FRAMEWORKS} \

# sea LIBS
#
sea_LIBS += \
$${cifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core


