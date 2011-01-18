
category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"The Sun" forKey:@"title"];
[category setValue:@"The Sun" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Solar Fusion", @"title",
									   @"Solar Fusion", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Visualizations/06_solarfusion.mp4", @"source",
									   @"06_solarfusion", @"localSource",
									   @"bundle://06_solarfusion_thumb.png", @"thumbnailSource",
									   @"Solar-Fusion.png", @"infoThumbnail",
									   category, @"category",
									   @"Nuclear reactions in the Sun's core produce its energy. Hydrogen fuses together to make helium and other higher-level elements. And when you have nuclear reaction occurring, you get even more energy given off and energy is heat. <p></p><br>And at the center of the Sun, it's roughly 15,000,000 degrees but as it moves out the heat and light fight their way through dense plasma and magnetic fields towards the Sun's visible surface, so the heat diffuses. <p></p><br>Visualization courtesy of <font color='#555555'>Solarmax: Museum of Science and Industry.</font>.", @"text", 
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Sunspot Temperatures", @"title",
									   @"Sunspot Temperatures", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Visualizations/01_under_sunspots.mp4", @"source",
									   @"01_under_sunspots", @"localSource",
									   @"bundle://01_under_sunspots_thumb.png", @"thumbnailSource",
									   @"Sunspots.png", @"infoThumbnail",
									   category, @"category",
									   @"Sunspots are darker, cooler regions on the Sun's surface. This animation shows the subsurface temperature profile around a sunspot. The red areas denote higher than average temperature, while the blue areas directly under the spots are cooler than average. <P></P><br> Data from the Michelson Doppler Imager (MDI) instrument on the SOHO spacecraft has helped reveal these differences in temperature under sunspots. The MDI instrument measures the speed of sound waves as they travel through the Sun. Sound travels faster through hotter regions and slower through cooler areas.<p></p><br> Visualization courtesy of <font color='#555555'><A HREF='http://svs.gsfc.nasa.gov/' target='_blank'>NASA's Goddard Space Flight Center Scientific Visualization Studio</A></font>.", @"text", 
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"View of a Solar Flare", @"title",
									   @"View of a Solar Flare", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Visualizations/02_multimission.mp4", @"source",
									   @"02_multimission", @"localSource",
									   @"bundle://02_multimission_thumb.png", @"thumbnailSource",
									   @"Solar-Flare.png", @"infoThumbnail",
									   category, @"category",
									   @"A variety of NASA spacecraft and instruments provide a unique view of a solar flare on April 21, 2002. Solar flares emit high-energy atomic particles and electromagnetic radiation into space.  <p></p><br> The time scales of the imagery vary from as long 6 hours to as short as 12 seconds. A total of 7 instruments from NASA's Solar and Heliospheric Observatory (SOHO), Transition Region and Coronal Explorer (TRACE), and the Reuven Ramaty High Energy Solar Spectroscopic Imager (RHESSI) provide the data for this visualization. <p></p><br> Visualization courtesy of <font color='#555555'><A HREF='http://svs.gsfc.nasa.gov/' target='_blank'>NASA's Goddard Space Flight Center Scientific Visualization Studio</A></font>.", @"text", 
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Coronal Mass Ejection", @"title",
									   @"Coronal Mass Ejection", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Visualizations/03_nwcoronalmass.mp4", @"source",
									   @"03_nwcoronalmass", @"localSource",
									   @"bundle://03_coronalmass_thumb.png", @"thumbnailSource",
									   @"Coronal-Mass-Ejection.png", @"infoThumbnail",
									   category, @"category",
									   @"A coronal mass ejection (CME) is a vast magnetic blob of high-energy particles that erupts from the Sun's corona and travels through space at high speed. The cloud of particles carries with it a magnetic field. If a CME heads in the direction of Earth, its magnetic field interacts with the Earth's magnetosphere. The magnetosphere protects us from charged solar particles. <p></p><br> Visualization courtesy of <font color='#555555'><A HREF='http://svs.gsfc.nasa.gov/' target='_blank'>NASA's Goddard Space Flight Center Scientific Visualization Studio</A></font>.", @"text", 
									   nil
									   ]];

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"Auroras" forKey:@"title"];
[category setValue:@"Auroras" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Polar Visible Aurora", @"title",
									   @"Polar Visible Aurora", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Visualizations/04_polarvisible.mp4", @"source",
									   @"04_polarvisible", @"localSource",
									   @"bundle://04_polarvisible_thumb.png", @"thumbnailSource",
									   @"Polar-Visible-Aurora.png", @"infoThumbnail",
									   category, @"category",
									   @"The aurora, also known as the Northern Lights, occurs when electrons in the Earth's magnetosphere collide with oxygen and nitrogen atoms in the Earth's upper atmosphere. <p></p><br> This animation shows the visible aurora in the Northern Hemisphere on July 16, 2000. The data comes from the Visible Imaging System (VIS) on board the NASA Polar spacecraft.<p></p><br> Visualization courtesy of <font color='#555555'><A HREF='http://svs.gsfc.nasa.gov/' target='_blank'>NASA's Goddard Space Flight Center Scientific Visualization Studio</A></font>.", @"text", 
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Aurora Curtain", @"title",
									   @"Aurora Curtain", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Visualizations/05_aurcap.mp4", @"source",
									   @"/05_aurcap", @"localSource",
									   @"bundle://05_aurcap_thumb.png", @"thumbnailSource",
									   @"Aurora-Curtain.png", @"infoThumbnail",
									   category, @"category",
									   @"An aurora is a beautiful pattern of light.  The lights appear to be a billowing curtain blowing in the wind. No two auroras are alike. When you see an aurora, you know that we are having a Sun-Earth Connection event.  <p></p><br> We know that all the energy from the Sun is being harnessed in our own atmosphere, and is causing great amounts of energy to flow around our near space atmosphere. This aurora was caused by a CME.  <p></p><br> Visualization courtesy of <font color='#555555'>Solarmax: Museum of Science and Industry.</font>", @"text", 
									   nil
									   ]];
