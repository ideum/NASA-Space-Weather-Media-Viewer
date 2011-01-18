#import "SectionedDataSource.h"

@interface BookmarkDataSource : SectionedDataSource {
  NSMutableArray *bookmarks;
}

@property(nonatomic,retain) NSMutableArray* bookmarks;

- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath;

@end
