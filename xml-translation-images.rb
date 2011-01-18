require 'open-uri'
require 'rubygems'
require 'xmlsimple'
require 'pp'
require 'digest/md5'

data = open("http://sunearth.gsfc.nasa.gov/spaceweather/FlexApp/bin-debug/config/images.xml?foolcache=7F6D5F14-8302-22EF-EB21-0CA58754DB50").read

doc = XmlSimple.xml_in(data)
doc["category"].each do |category|
  puts <<EO
  category = [NSEntityDescription insertNewObjectForEntityForName:@"Category" inManagedObjectContext:context];
  [category setValue:tab forKey:@"tab"];
  [category setValue:@"#{category["name"]}" forKey:@"title"];
  [category setValue:@"#{category["name"]}" forKey:@"headline"];
EO

  category["media"].each do |media|
    title = media["title"].scan(/\((.*?)\)/).collect { |v| v[0] }.join(" ")
    title = media["title"] if title.length == 0

    thumbnail = media["source"].gsub("2048", "512")
    source = media["source"].gsub("2048", "1024")
    
    puts <<EO
    asset = [NSEntityDescription insertNewObjectForEntityForName:@"Asset" inManagedObjectContext:context];

    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"#{title}", @"title",
         @"#{media["title"]}", @"headline",
         @"#{source}", @"source",
         @"#{thumbnail}", @"thumbnailSource",
         @"", @"localSource",
         category, @"category",
         @"",	@"link",
         @"",	@"linkTitle",
         @"#{media["description"]}", @"text", 
        nil
       ]];
EO
  end
end
