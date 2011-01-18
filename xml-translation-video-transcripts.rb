require 'open-uri'
require 'rubygems'
require 'xmlsimple'
require 'pp'
require 'digest/md5'

data = open("http://sunearth.gsfc.nasa.gov/spaceweather/FlexApp/bin-debug/config/videos.xml?foolcache=7F6D5F14-8302-22EF-EB21-0CA58754DB50").read

doc = XmlSimple.xml_in(data)
doc["category"].each do |category|
  category["media"].each do |media|
    puts ""
    puts "///////////////////////////////////////////////////////////////"
    puts "// Transcripts for: #{media["title"]}"

    transcript_data = open("http://sunearth.gsfc.nasa.gov/spaceweather/FlexApp/bin-debug/#{media["captions"]}").read
    transcript_doc = XmlSimple.xml_in(transcript_data)

    transcript_text = transcript_doc["p"].collect { |p|
      p["content"]
    }.join(" ").strip

    puts <<EO
      @"#{transcript_text}", "transcripts",
EO
  end
end

