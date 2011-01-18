/*
 *  Images.h
 *  SpaceWeatherViewer
 *
 *  Created by James Kassemi on 10/5/10.
 *  Copyright 2010 NASA/Ideum
 *
 */

  category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
  [category setValue:tab forKey:@"tab"];
  [category setValue:@"The Sun" forKey:@"title"];
  [category setValue:@"The Sun" forKey:@"headline"];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"AIA 193 SDO", @"title",
         @"The Atmospheric Imaging Assembly (AIA 193) Solar Dynamics Observatory (SDO)", @"headline",
         @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_1024_0193.jpg", @"source",
         @"bundle://01_aia193_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"      The Atmospheric Imaging Assembly (AIA) for the Solar Dynamics Observatory (SDO) is designed to provide an unprecedented view of the solar corona, taking images that span at least 1.3 solar diameters in multiple wavelengths nearly simultaneously, at a resolution of about 1 arcsec and at a cadence of 10 seconds or better.  The primary goal of the AIA Science Investigation is to use this data, together with data from other SDO instruments and from other observatories, to significantly improve our understanding of the physics behind the activity displayed by the Sun's atmosphere, which drives space weather in the heliosphere and in planetary environments.        Solar activity is driven by the evolving magnetic field. Although the coronal magnetic field cannot be measured directly, much of the magnetic field within 10^5 km from the surface contains hot plasma that is dense enough to emit detectable levels of light. This plasma is (mostly) frozen onto the field lines, so that the emission from (or absorption by) the plasma outlines the magnetic field. The coronal plasma has a wide range of temperatures, emitting brightest at EUV and soft X-ray wavelengths. A suitably designed imager with narrow thermal responses, such as the AIA, can use these contrasts to dissect the corona into complementary sets of high-contrast images for further analysis.         Please note the above information is the same for AIA 304, and AIA 171 .         A coronal hole is a region of the Sun's corona that appears dark in pictures taken with a coronagraph or during a total solar eclipse, and that shows up as a void in X-ray and extreme ultraviolet images. Coronal holes are of very low density (typically 100 times lower than the rest of the corona) and have an open magnetic field structure, extending indefinitely into space rather than looping back into the photosphere. This open structure allows charged particles to escape from the Sun and results in coronal holes being the primary source of the solar wind and the exclusive source of its high-speed component. During the minimum years of the solar cycle, coronal holes are largely confined to the Sun's polar regions, while at solar maximum, they can open up at any latitudes.    For more information visit the   Solar Dynamics Observatory (SDO) website       ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"AIA 304 SDO", @"title",
         @"The Atmospheric Imaging Assembly (AIA 304) Solar Dynamics Observatory (SDO)", @"headline",
         @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_1024_0304.jpg", @"source",
         @"bundle://02_aia304_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"      The Atmospheric Imaging Assembly (AIA) for the Solar Dynamics Observatory (SDO) is designed to provide an unprecedented view of the solar corona.  See additional imaging information in the details section for AIA 193.        Solar Prominences are analyzed through data from the AIA 304:    A prominence is a large, bright feature extending outward from the Sun's surface, often in a loop shape. Prominences are anchored to the Sun's surface in the photosphere, and extend outwards into the Sun's corona. While the corona consists of extremely hot ionized gases, known as plasma, which do not emit much visible light, prominences contain much cooler plasma, similar in composition to that of the chromosphere. A prominence forms in about a day, and stable prominences may persist in the corona for several months. Some prominences break apart and give rise to coronal mass ejections. Scientists are currently researching how and why prominences are formed.    For more information visit the   Solar Dynamics Observatory (SDO) website       ", @"text", 
        nil
       ]];

    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"AIA 171 SDO", @"title",
         @"The Atmospheric Imaging Assembly (AIA 171) Solar Dynamics Observatory (SDO)", @"headline",
         @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_1024_0171.jpg", @"source",
         @"bundle://03_aia171_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"      The Atmospheric Imaging Assembly (AIA) for the Solar Dynamics Observatory (SDO) is designed to provide an unprecedented view of the solar corona.  See additional imaging information in the details section for AIA 193.          Coronal Loops  are analyzed through data from the AIA 171:    Coronal loops form the basic structure of the lower corona and transition region of the Sun. These highly structured loops are a direct consequence of the twisted solar magnetic flux within the solar body. The population of coronal loops can be directly linked with the solar cycle; it is for this reason that coronal loops are often found with sunspots at their footpoints. The upwelling magnetic flux pushes through the photosphere, exposing the cooler plasma below. The contrast between the photosphere and solar interior gives the impression of dark spots, or sunspots.    For more information visit the   Solar Dynamics Observatory (SDO) website       ", @"text", 
        nil
       ]];

    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"AIA 171 and HMI SDO", @"title",
         @"Composite Image - (AIA 171 and HMI) Solar Dynamics Observatory (SDO)", @"headline",
         @"http://sdo.gsfc.nasa.gov/assets/img/latest/f_HMImag_171_1024.jpg ", @"source",
         @"bundle://04_hmi171_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"      Magnetic Structures  This composite image shows the HMI magnetic field in blue and orange (indicating opposite polarity) aligned with the AIA 171 channel in extreme ultraviolet superimposed over it. The juxtaposition is especially effective at showing how the arcs that we observe in UV light emerge from regions of strong magnetic field.     For more information visit the   Helioseismic and Magnetic Imager website       ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"LASCO C2", @"title",
         @"Large Angle and Spectrometric Coronagraph (LASCO C2) - SOHO Mission", @"headline",
         @"http://sohowww.nascom.nasa.gov/data/realtime/c2/1024/latest.gif", @"source",
         @"bundle://05_lasco_c2_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" The Large Angle and Spectrometric Coronagraph Experiment (LASCO C2) image of the Sun from the Solar and Heliospheric Observatory (SOHO) satellite. Because the Sun is so bright, an occulting disk is used to block the direct light. The small circle on the occulting disk represents the size of the Sun. You should be able to see the mounting arm (at about 7 o'clock) holding the occulting disk in place. The artificial eclipse created by the occulting disk makes it possible to view the Sun's corona--the outermost layer of the Sun's atmosphere.       This type of instrument is called a coronagraph. LASCO contains three coronagraphs each with a different sized occulting disk, allowing us to view fainter areas of the corona further away from the Sun. Images taken with each coronagraph are color coded with \"false\" colors so scientist can quickly tell them apart.In the images you'll be able to see coronal streamers which are structures formed by the Sun's magnetic field.       Occasionally, you may be able to see coronal mass ejections (CMEs). They appear as eruptions of particles that blow out from the Sun's corona at high speed. Data supplied courtesy of SOHO/LASCO. SOHO is a project of international cooperation between ESA and NASA. To learn more, visit the    LASCO/SOHO Coronagraph   home page or the   Solar and Heliospheric Observatory (SOHO)   Website.    ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"LASCO C3", @"title",
         @"Large Angle and Spectrometric Coronagraph (LASCO C3) - SOHO Mission", @"headline",
         @"http://sohowww.nascom.nasa.gov/data/realtime/c3/1024/latest.gif", @"source",
         @"bundle://06_lasco_c3_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" The Large Angle and Spectrometric Coronagraph Experiment (LASCO C3) image of the Sun from the Solar and Heliospheric Observatory (SOHO) satellite. Because the Sun is so bright, an occulting disk is used to block the direct light. The small circle on the occulting disk represents the size of the Sun. You should be able to see the mounting arm (at about 7 o'clock) holding the occulting disk in place.The artificial eclipse created by the occulting disk makes it possible to view the Sun's corona--the outermost layer of the Sun's atmosphere.       This type of instrument is called a coronagraph. LASCO contains three coronagraphs each with a different sized occulting disk, allowing us to view fainter areas of the corona further away from the Sun. Images taken with each coronagraph are color coded with \"false\" colors so scientist can quickly tell them apart. In the images you'll be able to see coronal streamers which are structures formed by the Sun's magnetic field.       Occasionally, you may be able to see coronal mass ejections (CMEs). They appear as eruptions of particles that blow out from the Sun's corona at high speed. Data supplied courtesy of SOHO/LASCO. SOHO is a project of international cooperation between ESA and NASA. To learn more visit the    LASCO/SOHO Coronagraph   home page or the   Solar and Heliospheric Observatory (SOHO)   Website.    ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"Helioseismic and Magnetic Imager (HMI)", @"title",
         @"Helioseismic and Magnetic Imager (HMI) - SDO Mission", @"headline",
         @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_1024_HMIB.jpg", @"source",
         @"bundle://hmib_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"      HMI is an instrument designed to study oscillations and the magnetic field at the solar surface, or photosphere. HMI is one of three instruments on the Solar Dynamics Observatory; together, the suite of instruments observes the Sun nearly continuously and takes a terabyte of data a day. HMI observes the full solar disk at 6173 Å with a resolution of 1 arcsecond. HMI is a successor to the Michelson Doppler Imager on the Solar and Heliospheric Observatory.  The magnetogram or magnetic image of the Sun shows the magnetic field in the solar photosphere. The black and white shading indicates opposite polarities. Using technology similar to that of a radar gun, it maps the charge and direction of movement towards or away from the viewer of plasma around the active regions.   For more information visit the   Helioseismic and Magnetic Imager (HMI) website       ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"HMI Intensitygram", @"title",
         @"Helioseismic and Magnetic Imager Intensitygram - SDO Mission", @"headline",
         @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_1024_HMII.jpg", @"source",
         @"bundle://hmii_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"       The HMI Intensitygram SDO mission produces black and white images of any visible sunspots.    To learn more, visit the    Solar Dynamics Observatory website (SDO)  and  Helioseismic and Magnetic Imager (HMI) website       ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"EUVI 195 Stereo Mission", @"title",
         @"EUVI 195 (behind) Stereo Mission", @"headline",
         @"http://stereo-ssc.nascom.nasa.gov/beacon/latest_512/behind_euvi_195_latest.jpg", @"source",
         @"bundle://euvi_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" Extreme UltraViolet Imager (EUVI) instrument image of the Sun from the Solar TErrestrial RElations Observatory (STEREO) Behind spacecraft at the 195 Angstrom wavelength of light.  This spacecraft, one of two identical spacecraft, is trailing behind Earth, basically along the Earth's orbit path.  As it falls further behind, it can see more and more of the Sun, so that we can tell what solar features exist even before the Sun's rotation brings them into view from an Earth (and SOHO's) perspective. The color is just an identifying tint added to the original image in black and white. The color table was carefully constructed to bring out typical features of its particular wavelength.  Images are taken every few minutes and updated online within an hour of their being taken.  The images exist only at a lower resolution andzooming in on them very far will cause distortion.  In extreme UV light, active regions appear almost white and coronal holes appear very dark.  Data supplied courtesy of STEREO. To learn more visit the    Solar TErrestrial RElations Observatory (STEREO)   Website.    ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"X-Ray Image - Hinode Mission", @"title",
         @"X-Ray Image - Hinode Mission", @"headline",
         @"http://xrt.cfa.harvard.edu/data/latest_images/img3.png", @"source",
         @"bundle://hinode_xrt_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" Full-sun image obtained by the Hinode X-ray Telescope (XRT) showing the location of solar plasma heated to temperatures above 100,000 K in the corona.  Active regions (sunspots!) appear as large, bright-yellow spots. Micro-flares appear as red spots. Coronal holes appear as large black (dark) regions. Coronal gases appear as diffuse orange haze and clouds.  To learn more, visit the    Hinode (Solar-B)   Website. ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"SOT", @"title",
         @"Solar Surface from Solar Optical Telescope (SOT) - Hinode Mission", @"headline",
         @"http://hinode.msfc.nasa.gov/images/tmp/sot_gb_latest.gif", @"source",
         @"bundle://hinode_sot_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" A close-up image of the solar surface obtained by the Hinode   Solar Optical telescope (SOT).  The image changes as the scientific research goals change on a daily/weekly basis. The image may show solar granulation regions, or close-ups of a sunspot or other active region.  To learn more, visit the    Hinode (Solar-B)   Website. ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"H-Alpha Full Disk Image of the Sun from Kanzelhohe Solar Observatory", @"title",
         @"H-Alpha Full Disk Image of the Sun from Kanzelhohe Solar Observatory", @"headline",
         @"http://ds9.ssl.berkeley.edu/imageviewer/images/images2/latest_bbso_halpha_1024.jpg", @"source",
         @"bundle://latest_bbso_halpha_1024_09_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" This H-Alpha image was taken from an Earth-based observatory located in Kanzelhohe, Treffen, Austria.   H-Alpha images are taken in the red portion of the visible spectrum.  Depending on the activity of the Sun you may be able to see dark sunspots and bright \"plage\".  These appear in areas of strong magnetic field, which correspond to the active areas that you may see in the Extreme Ultraviolet images.  You also ofton see long, dark \"filaments\", which appear as bright \"prominences\" on the limb.  These sometimes erupt and can be parts of coronal mass ejections.         Data supplied courtesy of the Kanzelhohe Solar Observatory.   To learn more, visit the    Kanzelhohe Solar Observatory   Website. ", @"text", 
        nil
       ]];
  category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
  [category setValue:tab forKey:@"tab"];
  [category setValue:@"The Solar Wind" forKey:@"title"];
  [category setValue:@"The Solar Wind" forKey:@"headline"];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"Magnetosphere Graph - ACE Mission", @"title",
         @"Magnetosphere Graph - ACE Mission", @"headline",
         @"http://www.swpc.noaa.gov/ace/Mag_24h.gif", @"source",
         @"bundle://ace_mag_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @" The ACE Satellite, positioned about one million miles from Earth, and always directly between Earth and the Sun, monitors the speed, composition and magnetic field of the solar wind.   This graph explains the solar wind's effects on Earth's magnetosphere.      Scientists have discovered that the most intense effects upon Earth's magnetic field occur when the solar wind magnetic field is directed opposite to Earth's magnetic field and the intensity is 'large'. When the solar wind magnetic field is opposite the Earth's, it is called a southward field and is considered to be negative in sign. The measuring unit is the nano-Tesla (nT), which is a unit of magnetic strength,      The 'Bz\" component, the second plot from the top and labeled in yellow, is the one that carries information about the North-South part of the solar wind magnetic field. This component is how we classify storms. If the Bz is between +3nT and +5nt, that is low; if the Bz values jump up and are between +20nT and +40nT, that is considered extreme. To learn more, visit the    Advanced Composition Explorer (ACE)   Website. ", @"text", 
        nil
       ]];

  category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
  [category setValue:tab forKey:@"tab"];
  [category setValue:@"Auroras" forKey:@"title"];
  [category setValue:@"Auroras" forKey:@"headline"];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"Auroral Activity on Earth - NOAA POES", @"title",
         @"Auroral Activity on Earth - NOAA POES", @"headline",
         @"http://ds9.ssl.berkeley.edu/imageviewer/images/images2/latest_pmapN_full.jpg", @"source",
         @"bundle://09_polar_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"  Auroral Activity on Earth Extrapolated from NOAA POES.  This image shows the extent of auroral activity near the north geographic pole. The images are extrapolated from the most recent polar pass of the NOAA POES satellite. You should be able to see an auroral 'oval,' roughly centered on the north magnetic pole. Bright areas in this region are the 'Northern Lights' or aurora. During intense magnetic storms, the aurora can expand to lower latitudes causing brilliant auroras across the lower United States.  Data supplied courtesy of National Oceanic and Atmospheric Administration's Space Environment Center. To learn more visit the    SEC POES Auroral Activity   Website.     ", @"text", 
        nil
       ]];
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"Kiruna All-Sky camera", @"title",
         @"Kiruna All-Sky camera", @"headline",
         @"http://www.irf.se/allsky/LAST.JPG", @"source",
         @"bundle://01_allsky_thumb.png", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"An all-sky camera has been operating in Kiruna since the International Geophysical Year in 1957 (Stoffregen, 1962). In 1977 the camera was replaced with a new more automated type. The new digital all-sky camera in Kiruna is based on a commercial digital camera with replaceable optics. The camera is controlled by one computer and the image data is then transferred to an archiving computer, where it is made available to the web. (with a 1-2 day delay). The sky is imaged onto a convex mirror, which is photographed by the 16 mm film camera located above the mirror. The film camera is controlled by electronics, which exposes the camera at a selected interval (typically once every minute), synchronizes the exposures with UTC (using GPS), and advances the film, etc. Typical exposure time is 4 seconds, but every eighth exposure is four times longer, in order to reveal faint auroras. When the camera is not in use, or during heavy snowfall, a cover automatically closes and protects the mirror. An electrical heater keeps the mirror free of mist. To learn more, visit the 'Latest picture from the Kiruna All-Sky camera'    http://www.irf.se/allsky/rtascirf.php       ", @"text", 
        nil
       ]];

