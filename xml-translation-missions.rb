require 'open-uri'
require 'rubygems'
require 'xmlsimple'
require 'pp'
require 'digest/md5'

data = open("http://sunearth.gsfc.nasa.gov/spaceweather/FlexApp/bin-debug/config/missions.xml").read

doc = XmlSimple.xml_in(data)
  doc["mission"].each do |mission|
    parts = mission["description"][0].match(/<p><b>(.*?)<\/b><\/p>(.*)/m)
    headline = parts[1]
    description = parts[2].gsub("\"", "'").gsub("\n", " ").strip

    puts <<EO
    mission = [NSEntityDescription insertNewObjectForEntityForName:@"Mission" inManagedObjectContext:context];
    [asset setValuesForKeysWithDictionary:[NSDictionary dictionaryWithObjectsAndKeys:
         @"#{mission["title"]}", @"title",
         @"#{headline}", @"headline",
         @"#{description}", @"text", 
         @"#{mission["href"]}", @"url",
         @"bundle://mission_thumbnail.png", @"thumbnail"
        nil
       ]];
EO
  end
