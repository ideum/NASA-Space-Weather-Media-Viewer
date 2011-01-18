#include "URLEncode.h"

NSString* URLENCODE(NSString* value) {
  return [(NSString *)CFURLCreateStringByAddingPercentEscapes(
                                                   NULL,
                                                   (CFStringRef)value,
                                                   NULL,
                                                   (CFStringRef)@"!*'\"();:@&=+$,/?%#[]% ",
                                                   kCFStringEncodingUTF8 ) autorelease];
}

NSString* URLDECODE(NSString *value){
  return [value stringByReplacingPercentEscapesUsingEncoding:NSASCIIStringEncoding];
}

NSString* URLCONSTRUCT(NSString *base, ...){
  va_list parts;
  NSString *part, *final;

  va_start(parts, base);
  final = [NSString stringWithString:base]; 

  while(true){
    if((part=va_arg(parts, id)) == nil)
      break;

    final = [[final stringByAppendingString:@"/"] stringByAppendingString:URLENCODE(part)];
  }

  va_end(parts);
  return final;
}
