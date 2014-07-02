# Copyright (C) LAAS-CNRS
# Author : Elie MOUSSY
#
# This file is part of ICondFS.
# ICondFS is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

SET(SOURCES
  demonstrator.cpp
  ImgStream/ImgStream.cpp
  ImgStream/ComponentImgStream.cpp
  ImgStream/CameraImgStream.cpp
  ImgStream/Image.cpp
  ImgStream/CompositeImgStream.cpp
  ImgStream/FileImgStream.cpp)

ADD_LIBRARY(ICondFS SHARED ${SOURCES})
TARGET_LINK_LIBRARIES( ${PROJECT_NAME}
  ${ICONDFS_LIB}

  #Qt libs
  ${QT_LIBRARIES}

  # OpenCV libs
  opencv_gpu
  opencv_highgui
  opencv_video
  opencv_flann
  opencv_objdetect
  opencv_imgproc
  opencv_ml
  opencv_legacy
  opencv_features2d
  opencv_calib3d
  opencv_core

  #LibPF library
  LibPF)

INSTALL(TARGETS ICondFS DESTINATION ${CMAKE_INSTALL_LIBDIR})