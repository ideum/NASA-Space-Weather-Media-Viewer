	category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
	[category setValue:tab forKey:@"tab"];
	[category setValue:@"Home" forKey:@"title"];

	
	asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
	[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
             @"aia-193-sdo-home", @"name",
             @"AIA 193 (SDO)", @"title",
             [NSNumber numberWithBool:YES], @"home",
             @"The Atmospheric Imaging Assembly (AIA 193) Solar Dynamics Observatory (SDO)", @"headline",
             @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_1024_0193.jpg", @"source",
             @"http://sdo.gsfc.nasa.gov/assets/img/latest/latest_512_0193.jpg", @"thumbnailSource",
             @"f2b87c29860acd8bf91a2a474e9bb362", @"localSource",
             category, @"category",
             @"",	@"link",
             @"",	@"linkTitle",
             @"      The Atmospheric Imaging Assembly (AIA) for the Solar Dynamics Observatory (SDO) is designed to provide an unprecedented view of the solar corona, taking images that span at least 1.3 solar diameters in multiple wavelengths nearly simultaneously, at a resolution of about 1 arcsec and at a cadence of 10 seconds or better.  The primary goal of the AIA Science Investigation is to use these data, together with data from other SDO instruments and from other observatories, to significantly improve our understanding of the physics behind the activity displayed by the Sun's atmosphere, which drives space weather in the heliosphere and in planetary environments. The basic observables are full-Sun intensities at a range of wavelengths. Together, these will comprise the data archive, which is freely accessible to the research community and, with limitations dictated by resources, to other interested parties.       Solar activity is driven by the evolving magnetic field. Although the coronal magnetic field cannot be measured directly, much of the magnetic field within a few times 10^5 km from the surface contains hot plasma that is dense enough to emit detectable levels of light. This plasma is (mostly) frozen onto the field lines, so that the emission from (or absorption by) the plasma outlines the magnetic field. The coronal plasma has a wide range of temperatures, emitting brightest at EUV and soft X-ray wavelengths. A suitably designed imager with narrow thermal responses, such as the AIA, can use these contrasts to dissect the corona into complementary sets of high-contrast images for further analysis.          A coronal hole is a region of the Sun's corona that appears dark in pictures taken with a coronagraph or during a total solar eclipse, and that shows up as a void in X-ray and extreme ultraviolet images. Coronal holes are of very low density (typically 100 times lower than the rest of the corona) and have an open magnetic field structure; extending indefinitely into space rather than looping back into the photosphere. This open structure allows charged particles to escape from the Sun and results in coronal holes being the primary source of the solar wind and the exclusive source of its high-speed component. During the minimum years of the solar cycle, coronal holes are largely confined to the Sun's polar regions, while at solar maximum they can open up at any latitudes.    For more information visit the   Solar Dynamics Observatory (SDO) website       ",				
             @"text", nil
             ]];
