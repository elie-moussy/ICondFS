# Copyright (C) LAAS-CNRS
# Author : Elie MOUSSY
#
# This file is part of ICondFS.
# ICondFS is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

SET(NEWFILES
  ICondFS/demonstrator.h
  ICondFS/Particle.h)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/ImgStream/ImgStream.h
  ICondFS/ImgStream/ComponentImgStream.h
  ICondFS/ImgStream/CameraImgStream.h
  ICondFS/ImgStream/Image.h
  ICondFS/ImgStream/CompositeImgStream.h
  ICondFS/ImgStream/FileImgStream.h)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/ImgStream
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/color/ColorBaseList.txt
  ICondFS/rackham/color/skincolormodel_Irg
  ICondFS/rackham/color/skincolormodel_RGB)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/color
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/color/bases/BGR.txt
  ICondFS/rackham/color/bases/HSV.txt
  ICondFS/rackham/color/bases/I1I2I3.txt
  ICondFS/rackham/color/bases/Irg.txt
  ICondFS/rackham/color/bases/Lab.txt
  ICondFS/rackham/color/bases/RGB.txt
  ICondFS/rackham/color/bases/rgbN.txt
  ICondFS/rackham/color/bases/YCrCb.txt)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rakham/color/bases
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/color/bases/CVS/Entries
  ICondFS/rackham/color/bases/CVS/Repository
  ICondFS/rackham/color/bases/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/color/bases/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/color/CVS/Entries
  ICondFS/rackham/color/CVS/Repository
  ICondFS/rackham/color/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/color/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/color/data/nonskin-32-32-32.hist
  ICondFS/rackham/color/data/nonskin-32-32-32.hist.lud
  ICondFS/rackham/color/data/skin-32-32-32.hist
  ICondFS/rackham/color/data/skin-32-32-32.hist.lud)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/color/data
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/color/data/CVS/Entries
  ICondFS/rackham/color/data/CVS/Repository
  ICondFS/rackham/color/data/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/color/data/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/CVS/Entries
  ICondFS/rackham/CVS/Repository
  ICondFS/rackham/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/detectors/faceDetector.txt
  ICondFS/rackham/detectors/inputDetector.txt
  ICondFS/rackham/detectors/motionBlobDetector.txt
  ICondFS/rackham/detectors/motionDetector.txt
  ICondFS/rackham/detectors/skinBlobDetector.txt)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/detectors
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/detectors/CVS/Entries
  ICondFS/rackham/detectors/CVS/Repository
  ICondFS/rackham/detectors/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/detectors/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/detectors/haarcascades/haarcascade_frontalface_alt.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_frontalface_alt2.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_frontalface_alt_tree.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_frontalface_default.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_fullbody.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_fullbody_alt.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_lowerbody.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_profileface.xml
  ICondFS/rackham/detectors/haarcascades/haarcascade_upperbody.xml)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/detectors/haarcascades
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/detectors/haarcascades/CVS/Entries
  ICondFS/rackham/detectors/haarcascades/CVS/Repository
  ICondFS/rackham/detectors/haarcascades/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/detectors/haarcascades/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Akin.jpg
  ICondFS/rackham/facerec/Aurelie.jpg
  ICondFS/rackham/facerec/Aurelie2.jpg
  ICondFS/rackham/facerec/baseList.txt
  ICondFS/rackham/facerec/Brice.jpg
  ICondFS/rackham/facerec/Daniel.jpg
  ICondFS/rackham/facerec/Hung.jpg
  ICondFS/rackham/facerec/Luis.jpg
  ICondFS/rackham/facerec/Mathias.jpg
  ICondFS/rackham/facerec/Maxime.jpg
  ICondFS/rackham/facerec/Rachid.jpg
  ICondFS/rackham/facerec/Sara.jpg
  ICondFS/rackham/facerec/Thierry.jpg
  ICondFS/rackham/facerec/Thierry2.jpg
  ICondFS/rackham/facerec/Thierry3.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Akin/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Akin
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Akin/CVS/Entries
  ICondFS/rackham/facerec/Akin/CVS/Repository
  ICondFS/rackham/facerec/Akin/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Akin/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Aurelie/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Aurelie
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Aurelie/CVS/Entries
  ICondFS/rackham/facerec/Aurelie/CVS/Repository
  ICondFS/rackham/facerec/Aurelie/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Aurelie/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Aurelie2/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Aurelie2
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Aurelie2/CVS/Entries
  ICondFS/rackham/facerec/Aurelie2/CVS/Repository
  ICondFS/rackham/facerec/Aurelie2/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Aurelie2/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Brice/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Brice
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Brice/CVS/Entries
  ICondFS/rackham/facerec/Brice/CVS/Repository
  ICondFS/rackham/facerec/Brice/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Brice/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/CVS/Entries
  ICondFS/rackham/facerec/CVS/Repository
  ICondFS/rackham/facerec/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Daniel/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Daniel
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Daniel/CVS/Entries
  ICondFS/rackham/facerec/Daniel/CVS/Repository
  ICondFS/rackham/facerec/Daniel/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Daniel/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Fred/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Fred
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Fred/CVS/Entries
  ICondFS/rackham/facerec/Fred/CVS/Repository
  ICondFS/rackham/facerec/Fred/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Fred/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Hung/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Hung
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Luis/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Luis
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Luis/CVS/Entries
  ICondFS/rackham/facerec/Luis/CVS/Repository
  ICondFS/rackham/facerec/Luis/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Luis/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Mathias/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Mathias
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Mathias/CVS/Entries
  ICondFS/rackham/facerec/Mathias/CVS/Repository
  ICondFS/rackham/facerec/Mathias/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Mathias/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Maxime/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Maxime
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Rachid/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Rachid
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Rachid/CVS/Entries
  ICondFS/rackham/facerec/Rachid/CVS/Repository
  ICondFS/rackham/facerec/Rachid/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Rachid/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/ROMAIN/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/ROMAIN
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Sara/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Sara
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Sara/CVS/Entries
  ICondFS/rackham/facerec/Sara/CVS/Repository
  ICondFS/rackham/facerec/Sara/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Sara/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Thierry/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Thierry
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Thierry2/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Thierry2
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Thierry2/CVS/Entries
  ICondFS/rackham/facerec/Thierry2/CVS/Repository
  ICondFS/rackham/facerec/Thierry2/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Thierry2/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Thierry4/*.jpg)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Thierry4
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/facerec/Thierry4/CVS/Entries
  ICondFS/rackham/facerec/Thierry4/CVS/Repository
  ICondFS/rackham/facerec/Thierry4/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/facerec/Thierry4/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/filters/body_tracking_icond.txt
  ICondFS/rackham/filters/body_tracking_icond_pedestrian.txt
  ICondFS/rackham/filters/body_tracking_icond_pedestrian_filedetec.txt
  ICondFS/rackham/filters/face_tracking_icond.txt
  ICondFS/rackham/filters/motion_monitoring_icond.txt
  ICondFS/rackham/filters/sir.txt)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/filters
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/filters/CVS/Entries
  ICondFS/rackham/filters/CVS/Repository
  ICondFS/rackham/filters/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/filters/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/objectslist/ColorBeseList.txt
  ICondFS/rackham/objectslist/ContDynamicList.txt
  ICondFS/rackham/objectslist/DiscDynamicList.txt
  ICondFS/rackham/objectslist/PriorList.txt
  ICondFS/rackham/objectslist/TargetList.txt
  ICondFS/rackham/objectslist/TargetList.txt
  ICondFS/rackham/objectslist/twoDDetectorList.txt)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/objectslist
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/objectslist/CVS/Entries
  ICondFS/rackham/objectslist/CVS/Repository
  ICondFS/rackham/objectslist/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/objectslist/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/shapes/fig2contour
  ICondFS/rackham/shapes/head.dat
  ICondFS/rackham/shapes/head1.dat
  ICondFS/rackham/shapes/head2.dat
  ICondFS/rackham/shapes/head3.dat
  ICondFS/rackham/shapes/head4.dat
  ICondFS/rackham/shapes/head_config.dat
  ICondFS/rackham/shapes/Lhand.dat
  ICondFS/rackham/shapes/Lhand1.dat
  ICondFS/rackham/shapes/Lhand1_config.dat
  ICondFS/rackham/shapes/Lhand2.dat
  ICondFS/rackham/shapes/Lhand2_config.dat
  ICondFS/rackham/shapes/Lhand3.dat
  ICondFS/rackham/shapes/Lhand3_config.dat
  ICondFS/rackham/shapes/Lhand4.dat
  ICondFS/rackham/shapes/Lhand5.dat
  ICondFS/rackham/shapes/Lhand6.dat
  ICondFS/rackham/shapes/Lhand6_config.dat
  ICondFS/rackham/shapes/Lhand7.dat
  ICondFS/rackham/shapes/Lhand7_config.dat
  ICondFS/rackham/shapes/Lhand_config.dat
  ICondFS/rackham/shapes/Lhand_config1.dat
  ICondFS/rackham/shapes/Rhand.dat
  ICondFS/rackham/shapes/Rhand1.dat
  ICondFS/rackham/shapes/Rhand1_config.dat
  ICondFS/rackham/shapes/Rhand2.dat
  ICondFS/rackham/shapes/Rhand2_config.dat
  ICondFS/rackham/shapes/Rhand3.dat
  ICondFS/rackham/shapes/Rhand3_config.dat
  ICondFS/rackham/shapes/Rhand4.dat
  ICondFS/rackham/shapes/Rhand5.dat
  ICondFS/rackham/shapes/Rhand7.dat
  ICondFS/rackham/shapes/Rhand7_config.dat
  ICondFS/rackham/shapes/Rhand_config.dat
  ICondFS/rackham/shapes/Rhand_config_first.dat)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/shapes
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/shapes/CVS/Entries
  ICondFS/rackham/shapes/CVS/Repository
  ICondFS/rackham/shapes/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/shapes/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/shapes/tmp/Lhand.dat
  ICondFS/rackham/shapes/tmp/Lhand.fig)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/shapes/tmp
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/shapes/tmp/CVS/Entries
  ICondFS/rackham/shapes/tmp/CVS/Repository
  ICondFS/rackham/shapes/tmp/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/shapes/tmp/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/targets/bodyROI.txt
  ICondFS/rackham/targets/bodyROIPedestrian.old.txt
  ICondFS/rackham/targets/bodyROIPedestrian.txt
  ICondFS/rackham/targets/bodyTracking.txt
  ICondFS/rackham/targets/bodyTrackingPedestrian.txt
  ICondFS/rackham/targets/bodyTrackingPedestrianFiledetec.txt
  ICondFS/rackham/targets/classificateurPedestrian.txt
  ICondFS/rackham/targets/faceROI_1.txt
  ICondFS/rackham/targets/faceROI_2.txt
  ICondFS/rackham/targets/facetracking
  ICondFS/rackham/targets/faceTracking.txt
  ICondFS/rackham/targets/faceTracking2.txt
  ICondFS/rackham/targets/fullBodyROI_c.txt
  ICondFS/rackham/targets/fullBodyROI_m.txt
  ICondFS/rackham/targets/motionMonitoring.txt)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/targets
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )

SET(NEWFILES
  ICondFS/rackham/targets/CVS/Entries
  ICondFS/rackham/targets/CVS/Repository
  ICondFS/rackham/targets/CVS/Root)

INSTALL(FILES ${NEWFILES}
	DESTINATION include/ICondFS/rackham/targets/CVS
	PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE )
