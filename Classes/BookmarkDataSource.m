#import "BookmarkDataSource.h"
#import "Bookmark.h"

@implementation BookmarkDataSource
@synthesize bookmarks;

- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath { 
  if(editingStyle == UITableViewCellEditingStyleDelete){
    [self removeItemAtIndexPath:indexPath];

    Bookmark *bookmark = [[bookmarks objectAtIndex:indexPath.row] retain];
    [self.bookmarks removeObjectAtIndex:indexPath.row];
    [bookmark destroy];
    [bookmark release];

    NSArray *objects = [NSArray arrayWithObject:indexPath];

    if([objects count] > 1){
      [tableView deleteRowsAtIndexPaths:objects withRowAnimation:UITableViewRowAnimationTop];
    }else{
      [tableView reloadData];
    }
  }
}

- (void)dealloc {
  [bookmarks release];
  [super dealloc];
}

@end
