#import "Item.h"
#import "ItemCell.h"
#import "SectionedDataSource.h"


@implementation SectionedDataSource

- (Class)tableView:(UITableView*)tableView cellClassForObject:(id)object {
  if([object isKindOfClass:[Item class]]){
    return [ItemCell class];
  }else{
    return [super tableView:tableView cellClassForObject:object];
  }
}

@end
