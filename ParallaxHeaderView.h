#pragma mark - 演示代码
/*
 - (void)viewDidLoad
 {
 ParallaxHeaderView *headerView =
 [ParallaxHeaderView parallaxHeaderViewWithImage:[UIImage imageNamed:@"HeaderImage"] forSize:CGSizeMake(self.tableView.frame.size.width, 300)];
 headerView.headerTitleLabel.text = @"I Love My Fridends";
 
 [self.tableView setTableHeaderView:headerView];
 
 }
 - (void)viewDidAppear:(BOOL)animated
 {
 [(ParallaxHeaderView *)self.tableView.tableHeaderView refreshBlurViewForNewImage];
 [super viewDidAppear:animated];
 }
 
 - (void)scrollViewDidScroll:(UIScrollView *)scrollView
 {
 if (scrollView == self.tableView)
 {
 // pass the current offset of the UITableView so that the ParallaxHeaderView layouts the subViews.
 [(ParallaxHeaderView *)self.tableView.tableHeaderView layoutHeaderViewForScrollViewOffset:scrollView.contentOffset];
 }
 }

 */
#import <UIKit/UIKit.h>

@interface ParallaxHeaderView : UIView
@property (nonatomic) IBOutlet UILabel *headerTitleLabel;
@property (nonatomic) UIImage *headerImage;

+ (id)parallaxHeaderViewWithImage:(UIImage *)image forSize:(CGSize)headerSize;
+ (id)parallaxHeaderViewWithSubView:(UIView *)subView;
- (void)layoutHeaderViewForScrollViewOffset:(CGPoint)offset;
- (void)refreshBlurViewForNewImage;
@end
