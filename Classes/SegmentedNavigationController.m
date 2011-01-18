#import "SegmentedNavigationController.h"

void recursivelyAdjustControlStyles(UIView *view)
{
  if([NSStringFromClass([view class]) isEqualToString:@"UISegmentLabel"]){
    UILabel *label = (UILabel *)view;
    [label setFont:[UIFont boldSystemFontOfSize:10]];
    label.textAlignment = UITextAlignmentCenter;
  }
  
  NSEnumerator *enumerator = [[view subviews] objectEnumerator];
  UIView *subview;
  
  while(subview = [enumerator nextObject]){
    recursivelyAdjustControlStyles(subview);
  }
}

void printViewInformation(UIView *view)
{
  NSLog(@"%@ width:%d height:%d", NSStringFromClass([view class]), view.frame.size.width, view.frame.size.height);
  NSEnumerator *enumerator = [[view subviews] objectEnumerator];
  UIView *subview;
  
  while(subview = [enumerator nextObject]){
    printViewInformation(subview);
  }

}

@implementation SegmentedNavigationController

@synthesize segmentedControl;

- (void)viewDidLoad {
  [super viewDidLoad];

  printViewInformation(self.view);

  [displayedViewControllers release];
  displayedViewControllers = [[NSMutableArray alloc] init];
  CGRect frame = [[UIScreen mainScreen] bounds];

  NSMutableArray *segmentItems = [[NSMutableArray alloc] initWithCapacity:[self.viewControllers count]];
  
  for(UIViewController *vc in self.viewControllers){
    if (vc.title != NULL) {
      [segmentItems addObject:vc.title];	
      [displayedViewControllers addObject:vc];
    }
  }
  
  segmentedControl = [[UISegmentedControl alloc] initWithItems:segmentItems];
  segmentedControl.tintColor = [UIColor darkGrayColor];
  segmentedControl.frame = CGRectMake(5, frame.size.height - 40, frame.size.width - 10, 30);
  segmentedControl.segmentedControlStyle = UISegmentedControlStyleBar;
  segmentedControl.selectedSegmentIndex = 0;

  recursivelyAdjustControlStyles(segmentedControl);
  
  [segmentedControl addTarget:self action:@selector(selectedSegmentItem:) forControlEvents:UIControlEventValueChanged];	
  [segmentItems release];


  [self.tabBar removeFromSuperview];
  [self.view addSubview:segmentedControl];
}

- (void)setHidden:(BOOL)value {
  segmentedControl.hidden = value;
}

- (void)selectedSegmentItem:(UISegmentedControl *) tabControl {
  recursivelyAdjustControlStyles(segmentedControl);
  [self setSelectedViewController:[displayedViewControllers objectAtIndex:[tabControl selectedSegmentIndex]]];
  self.tabBar.hidden = YES;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
  return [self.selectedViewController shouldAutorotateToInterfaceOrientation:interfaceOrientation];
}

- (void)viewDidUnload {
  [displayedViewControllers release];
  [segmentedControl release];
  [super viewDidUnload];
}

@end
