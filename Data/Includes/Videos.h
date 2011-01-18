/*
 category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
 [category setValue:tab forKey:@"tab"];
 [category setValue:@"The Sun" forKey:@"title"];
 [category setValue:@"Videos of the sun" forKey:@"headline"];
 
 
 asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
 [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
 @"Why is the Sun hot?", @"title",
 @"Dr. Art Poland talks about the nature of the Sun and solar cycle.  A scientist at Goddard Space Flight Center for many yaers, he is currently an astrophysicist at George Mason University.", @"headline",
 @"/02_whyisthesunhot.mp4", @"source",
 @"02_whyisthesunhot", @"localSource",
 category, @"category",
 @"Text", @"text", 
 nil
 ]];
 
 */

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"The Sun" forKey:@"title"];
[category setValue:@"The Sun" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How big is the Sun?", @"title",
									   @"How big is the Sun?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/01_howbigisthesun.mp4", @"source",
									   @"01_howbigisthesun", @"localSource",
									   @"bundle://sun_icon_0000_How-big-is-the-#0.png", @"thumbnailSource",
									   @"how_big_is_sun.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Art Poland talks about the volume of the Sun and its size relative to Earth.", @"text", 
      @"The size of the Sun is overwhelming when you think about it. The Earth is 5,000 kilometers and we always think of the Earth as being really big. But if you were to look at the Sun you can fit 100 Earths across the Sun. What that means if you look at it in another way is volume. You can fit over 1,000,000 Earths inside the Sun. If you look at a picture of the Sun and you are seeing all kinds of features on it the Earth's size would be just one little speck, or one little dot on the Sun. So the Sun is much, much bigger than the Earth.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Why is the Sun hot?", @"title",
									   @"Why is the Sun hot?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/02_whyisthesunhot.mp4", @"source",
									   @"02_whyisthesunhot", @"localSource",
									   @"bundle://sun_icon_0001_Why-is-the-sun-#0.png", @"thumbnailSource",
									   @"Why-is-the-sun-hot_.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Art Poland explains nuclear energy generation and how it makes the Sun hot.", @"text", 
      @"So you want to know why the Sun is hot. Well, it's hot because of nuclear energy generation. It's really interesting and fun how the Sun was formed, it was a bunch of diffused gasses and they condensed because of the gravitational attraction, and as you get the gasses pulling closer and closer together the pressure goes up, the temperature goes up, and when it gets enough pressure, and dense enough, and hot enough, it starts to have nuclear reactions. That's hydrogen joined together to make helium and other higher-level elements. And when you have nuclear reaction occurring, you get even more energy given off and energy is heat. And actually at the center of the Sun, it's like 15,000,000 degrees but as it moves out it gets more, more diffused. At the surface, the surface temperature of the Sun is about 5,000 degrees, and that's what we see, is 5,000 degrees. Some interesting aspects about it is, that if it were cooler, like say 3,000 degrees, it would look redder. And if it were hotter, like 20,000 degrees it would look bluer. So the color is also an indication in fact of how hot it is. In fact, that's how we measure the temperature of the sun is by measuring exactly what color it is.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What are sunspots?", @"title",
									   @"What are sunspots?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/03_whataresunspots.mp4", @"source",
									   @"03_whataresunspots", @"localSource",
									   @"bundle://sun_icon_0003_What-are-sunspo#0.png", @"thumbnailSource",
									   @"sunspots.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Art Poland talks about the sun’s magnetic field and how variations in it cause sunspots.", @"text", 
      @"Sunspots are a really interesting phenomenon on the Sun. They're areas of strong magnetic field and magnetic field is probably the most interesting aspect of physics that we are going to get out of the Sun. Maybe I shouldn't have said that, because there's also nuclear physics at the core but at least for my research the magnetic field is the most interesting thing. And how that magnetic field is generated, how it evolves, how it changes with time and the kinds of physical processes that occur in the magnetic field. are what we're are interested in and the sunspot is right there at the surface. What we're seeing there is the effect of the magnetic field on the photosphere.  Now, what we are pretty sure is happening is that the magnetic field is reducing the effectiveness of convection, the transfer of energy from below the atmosphere to the top of the atmosphere. And what happens is the magnetic field reduces the convection, makes it so that the sunspot's not so hot, so it looks cooler, so it looks dark. Now, that sunspot is actually hot, its 4,000 degrees instead of 5,000 degrees. But it's like looking at a faint light bulb next to a bright light bulb. The faint light bulb doesn't look bright just because the bright light bulb is there. You take the bright light bulb away, the faint light bulb looks bright. Sunspots are the same way. It's surrounded by hotter material so it looks dark. But if you took the hotter material away, it will still be bright.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What is the solar cycle?", @"title",
									   @"What is the solar cycle?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/04_whatissolarcycle.mp4", @"source",
									   @"04_whatissolarcycle", @"localSource",
									   @"bundle://sun_icon_0004_What-is-the-sol#0.png", @"thumbnailSource",
									   @"solar-cycles.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Art Poland talks about the nature of the Sun and solar cycle.  A scientist at Goddard Space Flight Center for many years, he is currently an astrophysicist at George Mason University.", @"text", 
      @"The solar cycle is an 11-year cycle of magnetic change on the Sun. It's primarily looked at in terms of sunspots. When you have a minimum number of sunspots we call that solar minimum. Then you go through a period where there are more and more sunspots on the Sun, you see an increase in the number, greater and greater as you go along until about five years after minimum you have a maximum number of sunspots. A lot of change on the Sun, a lot of evolution. Then after this maximum, it decreases again and you get less and less sunspots and you go back down to minimum. During maximum is when you have the most flares and the most magnetic activity. Another interesting thing seems to be associated with that, is that the Sun goes through an 11-year cycle, maximum, minimum, maximum, minimum. There were two periods that we know about back in the middle 1600s and early 1500s when the sunspot cycle seemed to have stopped. Let's say there were no maximum, no minimum. The Sun was just sitting there. During those times in Northern Europe there were many ice ages. The climate on the Earth had changed and Northern Europe was colder during those times. We have no idea why that happened. We also have no idea what causes the sunspot cycle. We have an idea, we're beginning to get an idea of what causes sunspots in terms of the turbulence and the interface between the core of the Sun, or the radiative zone, we call it, and the convective zone, which is, say, about a third of the distance from the top. There seems to be a shear there and there is turbulence as the Sun rotates. The Sun rotates at different velocities at that area, and that seems to cause the magnetic field. But why that changes with time, we have no idea at all.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What are solar flares and coronal mass ejections?", @"title",
									   @"What are solar flares and coronal mass ejections?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/05_whataresolarflares_cmes.mp4", @"source",
									   @"05_whataresolarflares_cmes", @"localSource",
									   @"bundle://sun_icon_0005_Solar-Flares-an#0.png", @"thumbnailSource",
									   @"CMEs.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Art Poland explains how magnetic field fluctuations cause solar flares and coronal mass ejections.", @"text", 
      @"I'm going to talk about solar flares a little bit and coronal mass ejections. And it's kind of a fun topic because some scientists say, \"Solar flares cause coronal mass ejections,\" and other scientists say \"No, you can have a coronal mass ejection without a flare,\" and it gets into a really fun scientific argument. But let me just say that they're both magnetic activity on the Sun, and it has to do with the rate of that activity. A flare is very rapid. You get a very rapid release of energy, of the magnetic field energy. The temperatures go up very high, you get x-rays given off, sometimes you even get gamma rays given off. Temperatures get up to 10,000,000 to 20,000,000 of degrees, really hot, very rapidly, and then it will cool down again. A coronal mass ejection can happen with a flare, but sometimes a coronal mass ejection will be just the magnetic field slowly erupting and ejecting magnetic energy and material particles out into space. Kind of like a cloud of materials flying out into space. It travels at about 200 to 1,000 kilometers per second. Typically takes about two days. If it's aimed at the Earth, two days after, you'll get a coronal mass ejection. You'll get particles and magnetic field hitting the Earth, causing changes in the Earth's  magnetosphere, and things like that.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What do we hope to learn about the sun?", @"title",
									   @"What do we hope to learn about the sun?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/06_whatdohopetolearn.mp4", @"source",
									   @"06_whatdohopetolearn", @"localSource",
									   @"bundle://sun_icon_0002_Learning-from-t#0.png", @"thumbnailSource",
									   @"What-do-we-hope-to-learn_.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Art Poland discusses the solar physical processes we study and why.", @"text", 
      @"The main thing we want to learn is, from my viewpoint, is new physical processes. There are things going on in the Sun. Its scale is so different than the Earth, in terms of temperature, size, magnetic fields. There are things we can't reproduce in the laboratory. And I as a physicist like to study new things, new physical processes. And in terms of what we hope to learn, I can't say exactly. Yes, I want to  learn about, for example, new energy sources of magnetic fields. I might be able to say something like that. But what we're going to discover I can't say, because we haven't discovered it yet. But that's the exciting thing about science, from my viewpoint, is to discover the unknown. And the Sun is a laboratory where we can discover things that we just can't discover on Earth.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How does the sun compare to other stars?", @"title",
									   @"How does the sun compare to other stars?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/07_howthesuncompares.mp4", @"source",
									   @"07_howthesuncompares", @"localSource",
									   @"bundle://sun_icon_0006_The-Sun-vs. Oth#0.png", @"thumbnailSource",
									   @"Sun-vs.-stars.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Sten Odenwald refutes the idea that the Sun is just an average star.", @"text", 
      @"The Sun compares to other stars in kind of an interesting way. I mean we always talk about things being sort of average. And it is often said that the Sun is an average star. It's average in one way and not average in another. For instance, it's not average in brightness. Most of the stars in the sky, in the galaxy, in the Milk Way galaxy, are somewhat fainter than the Sun. As in, they produce a bit less power. It's like comparing a 100 watt light bulb as the Sun and a typical star is maybe a 40 watt bulb. So the Sun is not average in terms of that. It's not average in terms of size either, because again, most of the stars in the Milky Way are smaller and redder in terms of numbers.  You know, by a show of hands, and averages are based on a show of hands. But we call the Sun average because sort of historically that's what we have always done. It is actually a little bit above average.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Voyages through the heliosphere", @"title",
									   @"Voyages through the heliosphere", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/Nature_Voyager_NASA_H.264_720.mp4", @"source",
									   @"Nature_Voyager_NASA_H.264_720", @"localSource",
									   @"bundle://sun_icon_0007_Voyages-through#0.png", @"thumbnailSource",
									   @"Voyages.png", @"infoThumbnail",
									   category, @"category",
									   @"The twin Voyager spacecraft, launched in 1977 to travel to and explore Jupiter, Saturn, Uranus and Neptune, have made many intriguing discoveries, including a possible ocean of liquid water on one of Jupiter's moons.", @"text", 
      @"The Voyager mission has been exploring our solar system for decades. Now, Nature reveals some of its latest findings. I personally feel like it’s the greatest mission of exploration that was ever launched. It’s been to so many planets, discovered so many things, and now it’s still discovering things 30 years after it was launched. Nature has just published six papers about the giant bubble the sun creates around itself called the heliosphere, and five of those papers depend on data from the Voyager 2 spacecraft. That spacecraft was launched in August of 1977 on a journey to the giant outer planets- Jupiter, Saturn, Uranus, and Neptune.  Neptune, the outmost, is 30 times as far from the sun as the Earth, and, today,  Voyager 2 is over 80 times as far from the sun as the Earth, and at the very outer reaches of this giant bubble. And we are trying to reach outside of that bubble into interstellar space, and both Voyager 1 and Voyager 2 are on a journey to be the first to reach interstellar space. Nobody has been in interstellar space in our lifetime. There probably will not be another mission that’s going to go there, so Voyager crossing into the final frontier is very exciting for scientists and probably for the public as well.  Without the sun, life would not exist. We would not be here asking the questions about it. We count on the sun for everything we are, and everything we know as familiar to us here on the Earth. And it is… you know, it’s our star that’s determining our environment, our existence. We’re almost obliged as intellectual beings to ask the question why is it there and how does it work? The sun like all stars, creates a bubble around itself, and it’s that bubble that the interaction from the wind from other stars and our own sun interact. And we are now in the outer layer of that… of that bubble, where that interaction takes place.  So for the first time, we’re now able to observe how our star interacts with what came from other stars outside. The solar wind is a stream of particles flowing away from the upper atmosphere of the sun. It expands to a long distance. The solar wind expands against the interstellar medium, creates a cavity that holds our solar system. This cavity is called the heliosphere. You can make a heliosphere in your kitchen sink by just running the water into the… not right directly in the drain, but to the side of the drain, and as the water comes down and hits the bottom of the pan and begins to rush out in all directions, pretty much equally, but not quite equally, but it rushes straight out, and it pushes back the water that’s in the pan. It’s makes a little circle, or almost a circle. And the reason that it can’t just push forever and just clean out the whole thing is because as it rushes out, it just decreases in pressure,  and it can’t push back all that water, and so there’s a finite extent to it. And that’s the same thing that’s happening in our heliosphere. The solar wind is rushing out, pushing back on the ions and the magnetic field of the galaxy, making a little bubble in it. And the other thing about it is the edge of the circle is very turbulent and rough. The solar wind plasma and the interstellar plasma are coming and colliding  with one another, basically, and they’re producing this very complicated boundary layer of the inter heliosheath and the outer heliosheath, and the termination shock between them. Voyager 2 has five key instruments on it to measure the environment in this huge bubble that’s around the sun.  The key measurement has to do with the wind coming from the sun.   The solar atmosphere is evaporating and speeding away at a million miles per hour, creating this giant bubble, and one of our instruments measures that wind. We measure it every day, looking for evidence that we have reached the outer edge of the supersonic solar wind. These three measures measure the ions, the ionized atoms, which fill the outer part of the heliosphere.  But we also measure the magnetic field, which is carried out by that ionized wind, as well as the waves in that wind called plasmas waves. The instrument which measures the magnetic fields is actually on a boom, which projects out this way 13 meters, 43 feet, to get it away from the spacecraft, itself, which contaminates the very weak field we’re trying to measure.  And the other instrument has two 10-meter-long antennas, one of which is here, and that measures the low frequency waves in the wind, which tells us something important about the wind, itself. We’ve been studying something called the anomalous cosmic rays with our instrument. These anomalous cosmic rays come from deep in our galaxy  and have no electrical charge. Somehow, at the heliosphere’s termination shock, they’ve been accelerated to a high energy. But Alan Cummings found surprising data from both Voyagers. There will be more particles at low energy and fewer at high energy, and there would be a certain way that should look, and that didn’t happen, and we were really astounded.  It didn’t happen with Voyager 1, and so some theories were put forward,  well, maybe, you know, it was a transient from the sun just at the right time that caused those particles to kind of be disrupted in their acceleration, and we didn’t see them. If it had been a quiet period, we would have seen what we expected to see.  So we said, ‘Okay, well, we’ll have another chance with Voyager 2.’ So Voyager 2 went through the shock—same thing. We didn’t see what we expected to see at all.  And so the origin, the source, where these particles are accelerated is a big mystery, and one of the big… one of the big mysteries of the termination shock process. One of the interesting surprises from the Voyager solar wind instrument was that we expected all of that energy from the million-mile-per-hour wind when it abruptly stopped or slowed down, to heat the wind, itself, to a million degrees. And what we found, instead, the wind was only 100,000 degrees after it had slowed down. Most of the energy, 80% of the energy went somewhere else. Meanwhile, closer to the Earth, a pair of satellites called STEREO were launched to find out just how the sun’s influence affects our planet. It as not thought in any shape or form that it would make a contribution to the understanding of the boundary between the solar wind and the interior stellar medium, which was so distant from STEREO’s orbit. But STEREO had very capable instruments, and when you design a capable instrument, you’re not quite sure exactly what you’re going to get when you finally get into space. Space is full of stuff. The Berkeley team was surprised when STEREO’s STE instrument, designed to measure low energy electrons,  seemed to be receiving another kind of signal. It was obviously detecting something else that was out in space. It could have been the spacecraft background, it could have been some detector flaw or faults, but graduate student, Linghua, with a bit of sleuthing, scientific sleuthing, was able to draw out the fact that this, in fact, was a signal from the termination shock at great distances from the STEREO spacecraft, and we were, in fact, detecting some particles that were very complementary to the Voyager measurements, in the sense that they were giving information that Voyager, itself,  could not achieve right at the site of the termination shock. It’s really quite remarkable that this spacecraft,  which was launched when the space age, itself, was only 20-years-old, is now been operating for over 30 years on its journey to interstellar space. We’re now exploring new areas that have never been explored before and will not be explored for many, many years, generations, probably. By the time the Voyagers run out of power in 2020, we should have crossed into interstellar space with at least one spacecraft, and we should be about 15 billion miles from Earth. They will be constantly watching what Voyager is seeing around the next bend. So, for example, when the sun becomes active again in the next solar maximum a few years from now, there will be coronal mass ejections heading outward and colliding with the termination shock, probably causing disturbances to it, changes of shape. It’s expected to be a very dynamic boundary, and so we may, in fact, pass in and out of it several times even before Voyager is truly in, in an interstellar space that’s unadulterated by anything the sun has to throw out. Well, I think all of us feel we’ve been very fortunate to have been on a journey of discovery. Even if it had stopped in 1989 with Neptune, we would have had an immensely valuable mission. But for it to continue now for decades and be the first to reach interstellar space, I think it’s just an incredible journey of discovery, and we’re all very fortunate to have been part of it.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"The end of a solar mission", @"title",
									   @"The end of a solar mission", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/The%20Sun/UlyssesEOM.mp4", @"source",
									   @"UlyssesEOM", @"localSource",
									   category, @"category",
									   @"Sun-sets-on-solar-mission.png", @"infoThumbnail",
									   @"bundle://sun_icon_0008_The-End-of-a-So#0.png", @"thumbnailSource",
									   @"Ulysses was the first mission to survey the space environment above and below the poles of the sun. The reams of data Ulysses returned have forever changed the way scientists view our star and its effects. ", @"text", 
      @"Five, four, three, two, one... Ignition and lift-off of Discovery and the Ulysses spacecraft bound for the polar regions of the sun. It was a dawn launch and it was quite spectacular. ESA built the spacecraft. The operations have been performed jointly by both an ESA team and a JPL team working at JPL.  The sun has a big effect on space, including Earth, and it’s the star that's nearest to us. Ulysses is a mission that is very unique in that it is exploring the sun’s atmosphere at all latitudes. Be very important to see what's going on in the third dimension and particularly over the poles of the sun.  We’ve learned about the sun's magnetic field, how it influences the origin of the solar wind and its subsequent evolution. We’ve learned about how the sun accelerates particles.  We were able to see that those particles are able to essentially access all regions surrounding the sun, and the way in which it creates this heliosphere. It interacts with interstellar matter coming in.  Some of the discoveries that we really didn’t anticipate -  one of them was the comet tails, we were quite surprised. We knew that there was a huge comet out there called Hyakutake and  we didn't go anywhere near that comet but to our great surprise we ended passing through the tail of the comet. But nobody anticipated how long it could be. They stretched from out further in the distance from the sun to the Earth and that was why we were able to pass through the tail.  Ulysses was definitely worth it. It was a small spacecraft. It was a very inexpensive mission, had a small operating team and it returned tremendous amount of data, new discoveries of the sun and the heliosphere things that never would have been known had we not flown a mission like Ulysses over the poles of the sun. Given that the scientific data that has been returned from Ulysess over the course of the mission is going to be used for decades to come, it is also a moment of great pride for all of the team. So I was the first person to be assigned to the mission by NASA by JPL and I’ve been with it this whole time. So it’s been 30 years, a big part of my career, I’ve been doing other things as well, but this has been an exceptional opportunity and my plan is to continue on until the end of the mission and I expect to be the last person to be here. I’m going to turn off the lights (laughs).", @"transcripts",
									   nil
									   ]];

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"Solar Wind" forKey:@"title"];
[category setValue:@"Solar Wind" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What is the Solar Wind?", @"title",
									   @"What is the Solar Wind?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Solar%20Wind/01_whatissolarwind.mp4", @"source",
									   @"01_whatissolarwind", @"localSource",
									   @"bundle://what_is_the_solar_wind.png", @"thumbnailSource",
									   @"What-is-solar-wind.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Sten Odenwald discusses the nature of the solar wind and how the Sun compares to other stars.  Dr. Odenwald is a space scientist and the Education and Public Outreach Manager for NASA's IMAGE satellite project.", @"text", 
      @"Well, the solar wind, if you were in it, is first of all, is invisible. But if you have the right type of detectors you can actually see the individual particles that are coming at you. Now, for the most part for what the solar wind is mostly the outer layers of the Sun coming at you. And that material is pretty much what is called a plasma, and it has almost the same composition as the Sun. That is to say it is mostly hydrogen and helium, nuclei, a lot of electrons, and a variety of ions of various types. It is called a plasma because it's one of what you would call the fourth state of matter. You have solid, liquid, and gas, and then you have plasma. You can think of them as basically things that are heated to different temperatures. Solid form is at a very low temperature. A liquid, the atoms are bit more mobile, and can move around a little bit. When you get into a gas, the atoms are moving much more rapidly. They're not encountering each other too often, and the whole collection acts sort of like, well, like a gas, for lack of a better word. When you get into a plasma the temperatures are so hot that the atoms are moving so fast that they are slam into each other and can liberate the electrons from some of these atoms. And the atoms then become charged and they are called ions. And so you wind up with a real mess, actually. You wind up with neutral particles and these ionized atoms, and then you have all these electrons that are sort of flowing around. It's a complicated thing also, because very often, there is a magnetic field that can be present in the solar wind at the same time. This field comes from the Sun. From loops of magnetic energy from the Sun that are sort of trapped in the plasma as it flows out into space. The solar wind is a plasma; it has pretty much the same composition as the Sun in terms of the types of atoms. But it is in a very high temperature state and moving at millions of miles an hour out into the solar system. Also by the time this plasma gets out beyond Pluto, it rams against what is called the interstellar medium and you form this big shock. It is a shock front, is what they call it. It is kind of like a jet plane moving very rapidly through the air. it forms this shock and you can hear it at the ground it sounds like a sonic boom. Well, the Sun is doing the same thing. you got the solar wind flowing out, it meets up against the interstellar medium, and produces the same kind of a thing. In fact, the voyager spacecraft, both of them, have actually begun to detect signs of this shock front, which is very exciting.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Why do we monitor the solar wind?", @"title",
									   @"Why do we monitor the solar wind?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Solar%20Wind/02_monitorsolarwind.mp4", @"source",
									   @"02_monitorsolarwind", @"localSource",
									   @"bundle://why_monitor_solar_wind.png", @"thumbnailSource",
									   @"Why-do-we-monitor.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Sten Odenwald talks about how the solar wind interacts with the Earth’s magnetic field.", @"text", 
      @"The reason why we monitor the solar wind is not so much to prevent satellite damage, because the wind itself doesn't damage satellites. The Earth's magnetic field manages to shield us rather well from the solar wind or at least the direct particles from the wind. What we want instead is to understand how the solar wind... causes changes in the Earth's magnetic field, causing particles that are already there to get accelerated to high energies. And then those particles are the ones that effect satellites. So it's a kind of a two-step thing, and it's the wind not doing something directly but in a sort of a back door way. The wind sets up the conditions for the Earth as a generator of things to create the particles that then do the damage. The exception are things like high-energy proton events from the Sun which are a type of solar flare event. Those particles stream directly into the satellite, and that doesn't even matter if the Earth has a field. So we want to monitor the solar wind as a way of assessing whether or not there is a bad storm on the way. And once we know that's the case, then we understand certain things about how bad storms affect the Earth and the particles that are already there. Particles such as the ones that arein the Van Allen Radiation Belts for instance, or in other clouds of plasma that are in the Earth's environment. Those are the ones that get pumped up in energy to thousands and millions of volts and then they do the damage to satellites that happen to be in the same place.", @"transcripts",
									   nil
									   ]];

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"Magnetosphere" forKey:@"title"];
[category setValue:@"Magnetosphere" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What is the Earth’s magnetosphere?", @"title",
									   @"What is the Earth’s magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/01_whatisthemagn.mp4", @"source",
									   @"01_whatisthemagn", @"localSource",
									   @"bundle://magnetosphere_icon_0005_The-E#0.png", @"thumbnailSource",
									   @"what-is-the-magnetosphere.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green is a space physicist who explains the nature of the Earth's magnetosphere.  He is the Chief of the Space Science Data Operations Office at Goddard Space Flight Center.", @"text", 
      @"The Earth's magnetosphere is very simply the extension of the Earth's magnetic field into space. We believe that the Earth's magnetic field is generated deep in the core of the Earth. It goes right through the surface of the Earth. And we've all used compasses to determine our North and South direction, so we are familiar with the Earth's magnetic field. But we are finding that the Earth's magnetic field extends into large distances above the surface of Earth and way into space. And this is called the magnetosphere.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How large is Earth’s magnetosphere?", @"title",
									   @"How large is Earth’s magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/02_howlargeisthemag.mp4", @"source",
									   @"02_howlargeisthemag", @"localSource",
									   @"bundle://magnetosphere_icon_0004_Size-#0.png", @"thumbnailSource",
									   @"how-large.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green talks about the size of the magnetosphere relative to Earth’s radius.", @"text", 
      @"The magnetosphere is very large. If we were to use the radius of the Earth as a yardstick, if you will, the front part of the magnetosphere is about 10 to 12 Earth radii. But the tail of the magnetosphere can extend to 1,000 Earth radii or more.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Can we see the Earth’s magnetosphere?", @"title",
									   @"Can we see the Earth’s magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/03_canweseemag.mp4", @"source",
									   @"03_canweseemag", @"localSource",
									   @"bundle://magnetosphere_icon_0003_Seein#0.png", @"thumbnailSource",
									   @"can-we-see.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green explains how we see the effects of the magnetosphere and study it using spacecraft.", @"text", 
      @"From the beginning of time we've been able to see the effects of the Earth's magnetosphere by looking at aurora. But its only been recently that we've been able to study the Earth's magnetosphere by seeing it through a variety of new technologies that are flying on the IMAGE spacecraft that was recently launched by NASA.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How does the Sun affect the Earth’s magnetosphere?", @"title",
									   @"How does the Sun affect the Earth’s magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/04_howsuneffectmag.mp4", @"source",
									   @"04_howsuneffectmag", @"localSource",
									   @"bundle://magnetosphere_icon_0006_The-S#0.png", @"thumbnailSource",
									   @"how-sun-affects.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green explains how the solar wind affects the Earth’s magnetosphere.", @"text", 
      @"The Sun has a dramatic effect on the Earth's magnetosphere. If we start with the Sun, not only do we receive light from the Sun, but the Sun is in a constant process of exhaling. it's losing matter, millions of tons, in all directions. This matter can be very fast or can be very slow, and we call it the solar wind. The solar wind impacts everything in the solar system. And in the Earth's environment the first thing it hits is the Earth's magnetosphere. Much like standing in a boat and watching the waves... move around the bow of the boat, the Earth's magnetosphere pushes the solar wind to either side. But there are times when the solar wind becomes so intense that our magnetic field protection breaks down. Solar wind particles enter the magnetosphere and the Earth's response to that is for ionospheric material to also erupt from the top of our ionosphere and also merge with the solar wind material that's in our magnetosphere.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What would happen if Earth didn’t have a magnetosphere?", @"title",
									   @"What would happen if Earth didn’t have a magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/05_whatifnomagfield.mp4", @"source",
									   @"bundle://magnetosphere_icon_0002_Earth#0.png", @"thumbnailSource",
									   @"05_whatifnomagfield", @"localSource",
									   @"earth-without-magnetosphere.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green takes a look at planets without magnetospheres to imagine what might happen to Earth without its magnetic field.", @"text", 
      @"What would happen if the Earth did not have a magnetic field? It wouldn't have the protection of the magnetosphere that it currently does. That means the solar wind would impact directly on the Earths ionosphere and upper atmosphere. One way we can look at what would happen and speculate what would happen would be to look at other planets that do not have magnetospheres but have ionospheres and atmospheres. The perfect planet to look at would be Mars. It's about the same size as the Earth, a little smaller, but indeed it has no magnetic field, but an extensive atmosphere and ionosphere. What we find is the solar wind as it impacts the ionosphere, begins to strip away a number of the larger molecules, such as water, oxygen, and that flows back into the solar wind. We've made an estimate of how much water, based on the solar wind direct interaction on Mars, that Mars has lost over the last several billion years, and we believe it can be as much as fifty meters of global ocean that has been lost from Mars over the last 3,000,000,000 to 4,000,000,000 years.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How can students study changes in the magnetosphere?", @"title",
									   @"How can students study changes in the magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/06_canstudentsstudy.mp4", @"source",
									   @"06_canstudentsstudy", @"localSource",
									   @"bundle://magnetosphere_icon_0001_Study#0.png", @"thumbnailSource",
									   @"study-changes.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green explains how the aurora reflects changes in Earth’s magnetic field.", @"text", 
      @"There are several ways students can study the changes that occur in the magnetosphere. If you're lucky to live in Canada or Alaska or a number of the Northern latitude countries in Europe and Russia, you'd be able to see and observe the aurora. And it's during these auroral events, which are particles that are raining on our upper atmosphere, that are describing or telling us about the changes that are occurring in the magnetosphere, due to the break down of the protection that it provides us to the solar wind. Another way to study the magnetosphere is during these intense geomagnetic storms. Currents arise in the magnetosphere. These currents can be measured on the Earth. And with a very simple, let's say, a soda-pop magnetometer you can actually measure the deflection of the Earth's magnetic field caused by these currents in the magnetosphere.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Does Venus have a magnetosphere?", @"title",
									   @"Does Venus have a magnetosphere?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Magnetosphere/07_doesvenushavemag.mp4", @"source",
									   @"07_doesvenushavemag", @"localSource",
									   @"bundle://magnetosphere_icon_0000_Venus#0.png", @"thumbnailSource",
									   @"venus.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Jim Green gives a possible reason that Venus lacks a magnetic field.", @"text", 
      @"Venus unfortunately does not have a magnetosphere. We've visited Venus on many occasions with appropriate equipment to be able to measure the magnetic field, but unfortunately it does not. So the solar wind impacts directly on the upper ionosphere and atmosphere of Venus. Why Venus doesn't have a magnetosphere, we're not quite sure of. However, there must be significant differences between the core material of Venus from the Earth's core. Now we believe the Earth generates its magnetic field due to a liquid iron core, that is moving at a different speed than our rotational speed. So therefore, we believe that Venus' core must be rotating at approximately the same rate that the planet does.", @"transcripts",
									   nil
									   ]];

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"Aurora" forKey:@"title"];
[category setValue:@"Aurora" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What is an aurora?", @"title",
									   @"What is an aurora?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/01_whatisanaurora.mp4", @"source",
									   @"01_whatisanaurora", @"localSource",
									   @"bundle://aurora_icon_0000_What-is-an-a#0.png", @"thumbnailSource",
									   @"what_is_aurora.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox talks about the nature and history of Auroras. She is a space physicist and also the Operations Coordinator for the Internal Solar Terrestrial Physics Mission at Johns Hopkins University.", @"text", 
      @"An aurora is a beautiful pattern of lights in the sky. They tend to look like a billowing curtain being blown in the wind. You see beautiful colors, beautiful wisps and different structures. And just like snowflakes, no two aurora are ever alike.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How far south can you see the Northern Lights?", @"title",
									   @"How far south can you see the Northern Lights?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/02_wherecanIsee.mp4", @"source",
									   @"02_wherecanIsee", @"localSource",
									   @"bundle://aurora_icon_0003_Where-to-see#0.png", @"thumbnailSource",
									   @"how_far_south.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox talks about unusual auroral events that happen as far south as Texas and Florida.", @"text", 
      @"Typically the Aurora will stay around the arctic circle. But when we have particularly large events, usually once or twice every 10 years, they can track as far south as maybe as Texas or Florida. There was one big aurora that occurred in March of 1989 that was clearly visible from both Texas and Florida. And then also one slightly more recently in July of 2000, which also would have been visible from there but sadly it occurred a little bit too early in the day, and the Sun was still up. So we were able to see them with our space-based cameras, but sadly nobody on the ground was able to see them.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Why are auroras different colors?", @"title",
									   @"Why are auroras different colors?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/03_whyareaurorasdiff.mp4", @"source",
									   @"03_whyareaurorasdiff", @"localSource",
									   @"bundle://aurora_icon_0002_Why-are-auro#0.png", @"thumbnailSource",
									   @"aurora_different_colors.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox explains how different elements in the atmosphere cause auroral colors.", @"text", 
      @"The Auroras can be almost any different color. There are different atoms in our own atmosphere... that actually cause these different colors. The most common one is an oxygen atom. The particles, the electrons come smashing in from outside our immediate atmosphere and collide with these oxygen atoms and cause them to get excited and then as they relax back to their beginning state they let out light. Oxygen tends to let out a green light, although sometimes it can let out red. Nitrogen will let out a blue light. And when all these colors mixed together you can get beautiful purples, mauves, even white. So you can get some really spectacular colors in the sky.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Where can I see an aurora?", @"title",
									   @"Where can I see an aurora?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/04_howfarsouth.mp4", @"source",
									   @"04_howfarsouth", @"localSource",
									   @"bundle://aurora_icon_0001_Best-place-t#0.png", @"thumbnailSource",
									   @"where_to_see_aurora.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox encourages viewers to go to the poles if they want to see an aurora.", @"text", 
      @"The most likely place to go and see an aurora will be anywhere where it is cold, anywhere around the arctic circle. Somewhere between Canada or the top states of the United States. Anywhere through Scandinavia, through Russia, basically anywhere where it is very cold. In addition to being able to see them in the North, you can also see them in the Southern Hemisphere. In fact there are two auroras, the Aurora Borealis and Australis. So anywhere in Australia, Antarctica and New Zealand, all great places to see the aurora.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What can an aurora tell us about the Sun-Earth connection?", @"title",
									   @"What can an aurora tell us about the Sun-Earth connection?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/05_aurora_sunearthconnection.mp4", @"source",
									   @"05_aurora_sunearthconnection", @"localSource",
									   @"bundle://aurora_icon_0005_The-Earth,-S#0.png", @"thumbnailSource",
									   @"earth_sun_auroras.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox discusses how the connection between Sun and Earth causes aurora.", @"text", 
      @"When you see an aurora, you know that we are having a Sun-Earth Connection event. We know that all the energy from the Sun is somehow being harnessed in our own atmosphere, and is causing great amounts of energy to flow or electric currents to flow around our near space atmosphere. In the same way you would switch on a fluorescent light and you would have an electric current that passes through the gas, that is usually argon maybe, and it causes each of those molecules to actually emit light. And that's why a fluorescent light tube is on. That is actually what is happening with the aurora. You have current flowing through our atmosphere and causing all those lights to switch on.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What is the connection between auroras and the solar wind?", @"title",
									   @"What is the connection between auroras and the solar wind?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/06_auroras_solarwind.mp4", @"source",
									   @"06_auroras_solarwind", @"localSource",
									   @"bundle://aurora_icon_0004_Auroras-and-#0.png", @"thumbnailSource",
									   @"aurora_solar_wind.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox explains how the contact between the solar wind and Earth’s magnetic field causes auroras.", @"text", 
      @"The solar wind harnesses the power that actually drives aurora. One of the early theories was the particles that were carried along with the solar wind actually directly caused the aurora. Now, we have a lot more observations, we know now that that's not true. And the particles that actually cause the aurora themselves are from our own magnetic atmosphere. We call it the magnetosphere. The Earth has a magnetic field that actually protects us from all of the nasty radiation that comes from Sun, and it basically carves out a cavity in the solar wind that keeps our planet safe. When certain conditions are favorable, all of the energy from the solar wind can enter this magnetic cavity and cause great reconfigurations of our own magnetic field. And you will get an imbalance. There's too much magnetic field on one side and not enough on the other. And nature always will redress a balance. So processes will take place to actually move those magnetic fields back up and get our happy balance back. And during this reconfiguration these electrons in our own atmosphere get accelerated to incredible high energies, and they smash into the atoms of our own atmosphere, oxygen and nitrogen in particular, and cause them to be excited. When they are excited they will eventually relax back to their original state, and as they are doing so they let off a photon of light or a bundle of energy that we see as light and that's the colors you see in the aurora.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Why can’t we see auroras in the daytime?", @"title",
									   @"Why can’t we see auroras in the daytime?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/07_cantseeinday.mp4", @"source",
									   @"07_cantseeinday", @"localSource",
									   @"bundle://aurora_icon_0006_Auroras-in-t#0.png", @"thumbnailSource",
									   @"daytime_auroras.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox talks about how the light of the Sun washes out auroral lights.", @"text", 
      @"We can't see the auroras with our own eyes in the day because the light of the Sun is so much greater. So you just can't see anything during daylight. However, one key thing as well as emitting these blue, green, and red light, the aurora also emit in ultraviolet. And while you can't see that again with your own eyes, we can see that with spacecraft that fly in space. We are able to look down, see the whole Earth, and then we can actually subtract the sunlight and we're just left at what the aurora looks like in ultraviolet. So one of the big advances we have had with space-based technology is now allowing us to look at global aurora and not just the pieces we can see with our naked eyes.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Are there legends or myths associated with the aurora?", @"title",
									   @"Are there legends or myths associated with the aurora?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Aurora/08_legends_myths.mp4", @"source",
									   @"bundle://aurora_myths_thumb.png", @"thumbnailSource",
									   @"08_legends_myths", @"localSource",
									   @"aurora_myths.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Nicola Fox lists different legends from around the world based on the aurora.", @"text", 
      @"Since almost the beginning of time since people first observed the aurora there's been lots of myths and legends associated with it. Initially in China and in Europe, the aurora, the sort of wisps and trails that you would see in the sky were associated with dragons. One of the Chinese dragon myths is actually called the 'Candle Dragon' and it's based on the aurora. And there's also people say that maybe the English patron saint, Sir George, instead of actually killing a dragon, it was merely an aurora sited over Scotland. That was probably one of the most early ones. A lot of them have been associated with gods. Some people think it is associated with Freya, the Goddess of Love. Sorry, Freya, the Goddess of Love. Then also it's thought to be the bridge, the burning bridge which actually led the gods from the heavens to the Earth, in particular, Thor, the God of War. So that whenever it was seen it was seen with quite a lot of worry. A little later, Native American Indians thought it were the souls of warriors fighting in the sky. Eskimos, slightly nicer, thought it was souls at play using a walrus head as a ball. Even if it wasn't associated with mythical creatures, or the souls of dead relatives... In Scandinavia, whenever they saw a bright aurora, they thought it would tell that it would be very cold and a lot of snow would come. And conversely to that, when the Eskimos saw it, they thought finally that the winter would be over and nice weather would be coming.", @"transcripts",
									   nil
									   ]];

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"Heliosphere" forKey:@"title"];
[category setValue:@"Heliosphere" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What is meant by the edge of the solar system?", @"title",
									   @"What is meant by the edge of the solar system?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Heliosphere/Heliopause1.mp4", @"source",
									   @"Heliopause1", @"localSource",
									   @"bundle://aurora_icon_0000_The-edge-of-#0.png", @"thumbnailSource",
									   @"heliosphere_uno.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Merav Opher talks about the heliopause, the distant region where the solar wind collides with the interstellar medium.  She is an astrophysicist and an associate professor of physics and astronomy at George Mason University.", @"text", 
      @"We're thinking about the region beyond the termination shock. And the termination shock is a region where the supersonic solar wind go through a shock You can think about a big waterfall that the solar wind goes and starts slowing down as it's approaching the interstellar medium. Now the heliopause is what separates us from the rest of the galaxy, the interstellar medium. So the Sun with its wind, it's curved like a bubble in the interstellar medium and the wind coming from the sun clashes against the interstellar medium and forms this boundary that we call the heliopause.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What missions provided the data?", @"title",
									   @"What missions provided the data?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Heliosphere/Heliopause2.mp4", @"source",
									   @"Heliopause2", @"localSource",
									   @"bundle://aurora_icon_0003_What-mission#0.png", @"thumbnailSource",
									   @"Missions.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Merav Opher talks about the Voyager and IBEX missions' role in providing data about the heliosphere.", @"text", 
      @"So the missions that we are learning about this very interesting region are coming from two different  spacecrafts. One is the Voyager spacecrafts that were launched in 1977. So it took them 30 years to arrive there. And you have also the IBEX mission that was just launched in 2008 October and got the first maps of the  energetic neutrals. So we are learning from these two different  missions. Voyager is measuring in situ. So it's right there measuring. And the IBEX is looking at the global view about the same region.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What are we learning about the edge of the solar system?", @"title",
									   @"What are we learning about the edge of the solar system?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Heliosphere/Heliopause3.mp4", @"source",
									   @"Heliopause3", @"localSource",
									   @"bundle://aurora_icon_0002_Learning-abo#0.png", @"thumbnailSource",
									   @"What-are-we-learning.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Merav Opher explains how the interstellar magnetic field shapes our heliosphere.", @"text", 
      @"Our heliosphere is asymmetric; it is not identical in the northern hemisphere and the southern hemisphere.  Or in the east and west. The reason for that is interstellar magnetic field that is pushing and  shaping how we look from outside.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"How will this new knowledge improve our understanding?", @"title",
									   @"How will this new knowledge improve our understanding?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Heliosphere/Heliopause4.mp4", @"source",
									   @"Heliopause4", @"localSource",
									   @"bundle://aurora_icon_0005_Learning-fro#0.png", @"thumbnailSource",
									   @"New-knowledge.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Merav Opher explains how the knowledge we’re gaining will increase our understanding of the behavior of ionized matter.", @"text", 
      @"So the new knowledge that we are gathering from this new data and new observations are going to help us understand the whole heliosphere, and also some processes even close to the Sun. For example, what I mentioned earlier,  about the acceleration of particles. The fact that particles may be not as simple as going through a shock and accelerating particles. Maybe you have them accelerated in the sides of shocks or maybe in sheaths in coronal mass ejections. This knowledge we are gathering at the edge of the solar system probably will influence the edge but also other ionized matter.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Are there consequences in other fields?", @"title",
									   @"Are there consequences in other fields?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Heliosphere/Heliopause5.mp4", @"source",
									   @"Heliopause5", @"localSource",
									   @"bundle://aurora_icon_0001_How-the-data#0.png", @"thumbnailSource",
									   @"Consequences.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Merav Opher talks about how the knowledge gained about the heliosphere can help protect astronauts from cosmic rays.", @"text", 
      @"One of them are cosmic rays come from outside the  heliosphere and make their way, and they are very energetic and they are hazardous for astronauts. If you are sitting on Earth, we have the Earth's magnetic fields to shield us from energetic particles and they are deflected  around. As soon as we leave Earth, send astronauts to moon, to Mars, to beyond, they are not protected. We have to have an idea how large and how intense those cosmic rays are going to be and when and how they are going affect astronauts for example.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"What do we expect to learn in the next several years?", @"title",
									   @"What do we expect to learn in the next several years?", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Heliosphere/Heliopause6.mp4", @"source",
									   @"Heliopause6", @"localSource",
									   @"bundle://aurora_icon_0004_Future-data-#0.png", @"thumbnailSource",
									   @"What-we-expect-to-learn.png", @"infoThumbnail",
									   category, @"category",
									   @"Dr. Merav Opher goes over the knowledge that we hope to gain as these missions continue.", @"text", 
      @"We expect phenomena like a reconnection to happen.  And reconnection is where the solar magnetic field, any magnetic field with opposite direction annihilates and can release energy and accelerate particles. And we expect the solar wind, the magnetic field from the Sun, to encounter the magnetic field coming outside from the interstellar medium and annihilate in certain points of the heliopause.", @"transcripts",
									   nil
									   ]];

category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
[category setValue:tab forKey:@"tab"];
[category setValue:@"Missions" forKey:@"title"];
[category setValue:@"Missions" forKey:@"headline"];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Ulysses", @"title",
									   @"Ulysses", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Missions/ulysses.mp4", @"source",
									   @"ulysses", @"localSource",
									   @"bundle://ulysses.png", @"thumbnailSource",
									   @"Ulysses_spacecraft.png", @"infoThumbnail",
									   category, @"category",
									   @"A joint mission between ESA and NASA, Ulysses was designed to study the heliosphere.  The primary scientific goal was to make the first-ever measurements of the unexplored region of space above the Sun's poles.", @"text", 
      @"October 6, 1990, the Ulysses spacecraft launches aboard Space Shuttle Discovery on a mission to explore the star nearest and most important to life on Earth, the Sun. There are numerous ways in which the Sun affects the Earth. It emits this very high speed wind from the polar caps, which is what Ulysses was designed to study. At certain times this fast wind can impact the Earth. When that happens, the result are magnetic storms, and those storms lead to the aurora. They can cause damage to satellites systems, and sometimes they cause problems for the power grids on Earth. A swing by Jupiter boosted the spacecraft above the plane of the planets and into its unique orbit around the Sun's pole, a location never before or since explored by another spacecraft. In order to get a complete view of an area around a planet, in this case you could consider the Sun a planet, if you only did that by going around the equator, you would be like trying to characterize the Earth by looking from Jamaica, say, and you'd never see there was snow on the caps. Over the course of fifteen years and two complete orbits around the Sun, Ulysses, a joined endeavor between NASA and the European Space Agency, has provided a three-dimensional view of the system that surrounds the Sun, and extends well past the planets. The main objective is to study this vast, complex system, space system, called the Heliosphere, consists of three parts. Originates with the Sun, that whole top or part of the upper atmosphere, so-called corona, is actually expanding out into space at very high speed. And it carries magnetic fields with it, and it pushes interstellar medium, which exists throughout space between the stars away from the Sun, and it creates a huge bubble within which the solar system is located. With over four billion miles already logged, Ulysses team plans to continue shedding more light on the Sun for some time. In the very near future, in about 2007, Ulysses will fly over the southern pole for the third time, and then a year later over the northern pole. Radioisotopic thermoelectric generators power Ulysses and can produce energy until at least 2008. It's always wonderful to do something new and different, and we've made a lot of discoveries, and it's always a treat to come in everyday knowing that the day that we'll be there and we'll be able to look at it, possibly find things that are new.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"Voyager", @"title",
									   @"Voyager", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Missions/voyager.mp4", @"source",
									   @"voyager", @"localSource",
									   @"bundle://voyager.png", @"thumbnailSource",
									   @"VoyagerReverse.png", @"infoThumbnail",
									   category, @"category",
									   @"The Twin Voyager spacecraft are exploring distant regions of space never before encountered by an object from Earth. Both spacecraft are in a vast region at the edge of our solar system where the solar wind runs up against the thin gas between the stars. Both Voyagers carry a message from Earth on a phonograph record protected by an inscribed golden disc.", @"text", 
      @"Two Voyager spacecrafts were launched in 1977 on a journey to the gaint outer planets: Jupiter, Saturn, Uranus, and Neptune. Voyager 2 flew by Neptune in 1989, and from then on the two spacecraft were on the interstellar mission headed to the edge of interstellar space. The Voyager spacecraft will by humanity's first interstellar probes. They will be the first to go outside the region that's filled with material from our own star and the first steps into interstellar space. Voyager 1 has reached a historic milestone. It has crossed outside of the supersonic solar wind, across what we call the Termination Shock, into a slow wind area which we call the Heliosheath, where the solar wind is much slower, much thicker, and much hotter than it was just before the shock. Voyager now is almost a hundred times as far from the Sun as the Earth is, so the Sun is very dim, 1/10,000th as bright as it is here at Earth, and of course the planets are just specks of light in the great distance as Voyager drifts ever further into space. We listen to the two Voyager spacecraft everyday because they're measuring the magnetic fields in the solar wind, they're measuring the wind itself, how fast it's moving on Voyager 2. They're measuring the energetic particles, the fast ions which are in the outer solar system, and they're measuring the waves in the wind itself, the plasma waves. The Termination Shock is a source of energetic electrons which stream along the magnetic field and cause the plasma, the solar wind itself, to oscillate, and that can be picked up right in the audio range where in fact the stream of electrons are telling us that we're getting very close to the Shock.  Voyager 1 will reach the edge of interstellar space in about ten years. Voyager 2 will likely find the Shock perhaps in another three years, and then it will take it another ten years to go through the Heliosheath to reach interstellar space. We're very fortunate that the power supply on the spacecraft are radioisotope thermoelectric generators, which will continue powering the two spacecraft until at least the year 2020. It's a very exciting mission to be on because what science is about is learning new things about nature, and when you go places no spacecraft has been before, you're almost bound to learn something that no one knew before.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"STEREO", @"title",
									   @"STEREO", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Missions/stereo.mp4", @"source",
									   @"stereo", @"localSource",
									   @"bundle://stereo.png", @"thumbnailSource",
									   @"stereo.png", @"infoThumbnail",
									   category, @"category",
									   @"STEREO (Solar TErrestrial RElations Observatory) is a 2-year NASA mission employing two nearly identical space-based observatories to provide the very first, 3-D 'stereo' images of the sun to study the nature of coronal mass ejections. These powerful solar eruptions are a major source of the magnetic disruptions on Earth and a key component of space weather, which can greatly affect satellite operations, communications, power systems, the lives of humans in space, and global climate.", @"text", 
      @"Scientists studying solar terrestrial physics can now get a double dose of the sun through an innovative space-based mission called STEREO. STEREO, the Solar Terrestrial Relations Observatory is a NASA Space Science mission designed to obtain never-before-seen three-dimensional pictures of coronal mass ejections or CMEs from the sun. CMEs are the largest known explosions in our solar system and seriously impact electronic systems here on earth, as well as astronauts and satellites in space. NASA scientists are very interested to learn much more about how the sun affects our modern society and our exploration of the solar system beyond our planet.  They are using new and innovative technologies in missions like STEREO to expand their knowledge of solar terrestrial physics and how the sun interacts  with the rest of the solar system.  The STEREO mission includes two nearly identical observatories designed, built and operated by APL, the Applied Physics Laboratory,  part of Johns Hopkins University.  NASA Goddard Space Flight Center manages the twin observatory mission.  Why two spacecraft? Let’s use our eyes as an example. Hold up a small object at arm’s length. Look at it while alternately opening and closing each eye. It seems to jump from left to right, right?  The twin STEREO observatories take pictures of CMEs in this way with the observatories positioned at offset angles much like your eyes. The images are combined to create three-dimensional, or 3-D, images of the sun.  Coupled with data from ground-based and low earth-orbiting observatories, STEREO’s data allow the science team, led by NASA Goddard Space Flight Center, to observe in 3-D the buildup and liftoff of magnetic fields from the sun and the path of earthbound CMEs.  The twin STEREO observatories fly in orbits about the sun in front of and behind the orbit of the earth. To get both spacecraft into these critical and challenging leading and trailing orbits, mission designers have improved upon a lunar gravity assist  designed for a single spacecraft.   It has long been known that the gravitational pull from a planetary body  can influence the shape, size, and tilt of a spacecraft’s trajectory.   STEREO mission designers determined that the most efficient and cost-effective way to get the twin observatories into space was to launch them aboard a single rocket and use lunar swing-bys to place them into their respective orbits.     This is the first time lunar swing-bys have been used to place more than one  spacecraft into different orbits, something that cannot be done by the launch vehicle alone.   Before launch, the STEREO spacecraft undergo a series of in-depth  and critical tests in the clean rooms at APL and NASA Goddard Space Flight Center.  Thermal vacuum, vibration, and acoustic testing place the spacecraft systems and subsystems in similar conditions confronted in the harsh space environment. Violent launch vibrations and extreme levels of solar radiation are replicated to assure they can withstand the rigors of space throughout the life of the mission. Each step of spacecraft development has its own testing phase. Even the smallest components are tested separately before being integrated onto the observatories to make certain everything will work right.  Once fully assembled, the observatories are tested to make sure all the individual parts work together.  These tests shake out problems that would not be repairable once the observatories are in space.  As the twin observatories are integrated onto the Delta 2 launch vehicle’s third stage at Cape Canaveral Air Force Station Florida, a team of mission operators at APL in Maryland remotely monitor the health of each spacecraft. Once stacked and shrouded inside the ferring of the launch vehicle, the observatories switch to internal computer control just prior to launch. 3 2 1 engine start Lift off!   	After launch, the observatories fly in an orbit from a point close to earth 	to one that extends just beyond the moon. About two months after launch, mission operators at APL synchronize spacecraft orbits directing one observatory into its earth trailing orbit. One month later, the second observatory is redirected to its position ahead of earth in its orbit around the sun.  Like a remote laboratory each observatory houses two instruments and two instrument suites for a total of 16 instruments per spacecraft. The scientific instruments come from institutions around the world. Each instrument is designed to observe a piece of our nearest star, the Sun. The STEREO mission begins a new frontier of solar exploration, visualizing the sun in ways never before seen, and allowing NASA and solar scientists to get a double dose of the Sun.", @"transcripts",
									   nil
									   ]];

asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];
[asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
									   @"IBEX", @"title",
									   @"IBEX", @"headline",
									   @"http://sunearthday.gsfc.nasa.gov/spaceweather/mobile/nasa/Videos/Missions/ibex.mp4", @"source",
									   @"bundle://ibex.png", @"thumbnailSource",
									   @"ibex", @"localSource",
									   @"ibex.png", @"infoThumbnail",
									   category, @"category",
									   @"There are several boundaries at the edge of our solar system. The IBEX mission will study these boundaries to help us understand how they protect life on Earth and astronauts in space from the galactic cosmic rays coming from interstellar space. In this video you will find out what the boundaries of our solar system are. ", @"text", 
      @"Hi, my name is Dr. Eric Christian. I am the program scientist for the Interstellar Boundary Explorer or IBEX mission.   IBEX is studying the boundary between the solar wind and interstellar space.  There are several boundaries at the edge of our solar system. The closest one we call the termination shock. That’s where the million mile per hour solar wind, which expands out from the sun in all directions in space,  slows down, becomes more dense and starts to be diverted away before it reaches the galactic material. Beyond that is the heliopause. The heliopause is the boundary that separates material of galactic origin on the outside from material of solar origin on the inside. And even further out than that we think there is another boundary, which we call the bow shock. Because the solar system is moving quickly through the galactic material, actually plowing through like a snow plow, we think the interaction makes a sharp jump out in front where the quickly moving in material has to slow down and start to divert away also.  You can see that really well in this animation where the solar wind  is streaming out past all the planets and it’s blown this bubble in interstellar space; the nearly spherical solar wind termination shock bubble. Then the solar wind slows down and starts moving back into the tail, and then the interstellar gas, which is moving very quickly up here slows down in the bow shock and moves around the solar system. You can actually duplicate this in your own kitchen sink. If you take a stream of water and bounce it off a flat surface, what you get is a region close to the stream where the water is moving very quickly and very straight. Then suddenly it slows down and you actually see an increase in height where a shock forms in the water. That’s the equivalent of the solar wind termination shock. Then beyond that shock the water is turbulent and flows down into your drain and that’s the heliopause boundary out here.   Now, one of the reasons why this is important is because this solar wind that’s streaming out to the heliopause pushes out galactic cosmic rays, which are radiation coming from distant parts of the galaxy, and it prevents a lot of these galactic cosmic rays from getting into the Earth or to astronauts on their way to Mars for example.  So, the solar wind pushing out sort of forms a force field if you will, that helps protects us.", @"transcripts",
									   nil
									   ]];



///////////////////////////////////////////////////////////////
// Transcripts for: How big is the Sun?

///////////////////////////////////////////////////////////////
// Transcripts for: Why is the Sun hot?

///////////////////////////////////////////////////////////////
// Transcripts for: What are sunspots?

///////////////////////////////////////////////////////////////
// Transcripts for: What is the solar cycle?

///////////////////////////////////////////////////////////////
// Transcripts for: What are solar flares and coronal mass ejections?

///////////////////////////////////////////////////////////////
// Transcripts for: What do we hope to learn about the Sun?

///////////////////////////////////////////////////////////////
// Transcripts for: How does the sun compare to other stars?

///////////////////////////////////////////////////////////////
// Transcripts for: Voyages through the heliosphere

///////////////////////////////////////////////////////////////
// Transcripts for: Sun sets on Solar Mission

///////////////////////////////////////////////////////////////
// Transcripts for: What is the Solar Wind?

///////////////////////////////////////////////////////////////
// Transcripts for: Why do we monitor the solar wind?

///////////////////////////////////////////////////////////////
// Transcripts for: What is the Earth's magnetosphere?

///////////////////////////////////////////////////////////////
// Transcripts for: How large is the Earth's magnetosphere?

///////////////////////////////////////////////////////////////
// Transcripts for: Can we see the Earth's magnetopshere?

///////////////////////////////////////////////////////////////
// Transcripts for: How does the Sun affect the Earth's magnetopshere?

///////////////////////////////////////////////////////////////
// Transcripts for: What would happen if Earth didn't have a magnetosphere?

///////////////////////////////////////////////////////////////
// Transcripts for: Are there ways students can study changes in the magnetosphere?

///////////////////////////////////////////////////////////////
// Transcripts for: Does Venus have a magnetosphere?

///////////////////////////////////////////////////////////////
// Transcripts for: What is an aurora?

///////////////////////////////////////////////////////////////
// Transcripts for: Where can I see an aurora?

///////////////////////////////////////////////////////////////
// Transcripts for: Why are auroras different colors?

///////////////////////////////////////////////////////////////
// Transcripts for: How far south can you see the Northern Lights?

///////////////////////////////////////////////////////////////
// Transcripts for: What can an aurora tell us about the Sun-Earth connection?

///////////////////////////////////////////////////////////////
// Transcripts for: What is the connection between auroras and the solar wind?

///////////////////////////////////////////////////////////////
// Transcripts for: Why can't we see auroras in the daytime?

///////////////////////////////////////////////////////////////
// Transcripts for: Are there legends or myths associated with the aurora?

///////////////////////////////////////////////////////////////
// Transcripts for: What is meant by the edge of the solar system?

///////////////////////////////////////////////////////////////
// Transcripts for: What missions provided the data?

///////////////////////////////////////////////////////////////
// Transcripts for: What are we learning about the edge of the solar system?

///////////////////////////////////////////////////////////////
// Transcripts for: How will this new knowledge improve our understanding?

///////////////////////////////////////////////////////////////
// Transcripts for: Are there consequences in other fields?

///////////////////////////////////////////////////////////////
// Transcripts for: What do we expect to learn in the next several years?

///////////////////////////////////////////////////////////////
// Transcripts for: Ulysses

///////////////////////////////////////////////////////////////
// Transcripts for: Voyager

///////////////////////////////////////////////////////////////
// Transcripts for: STEREO

///////////////////////////////////////////////////////////////
// Transcripts for: IBEX
