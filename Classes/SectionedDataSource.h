#import <Foundation/Foundation.h>
#import "Three20/Three20.h"

@interface SectionedDataSource : TTSectionedDataSource {

}

- (Class)tableView:(UITableView*)tableView cellClassForObject:(id)object;

@end
