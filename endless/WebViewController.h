#import <UIKit/UIKit.h>
#import "IASKAppSettingsViewController.h"
#import "WebViewTab.h"

@interface WebViewController : UIViewController <UITableViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, IASKSettingsDelegate>

- (NSMutableArray *)webViewTabs;
- (WebViewTab *)addNewTabForURL:(NSURL *)url;
- (void)removeTab:(NSUInteger)tabNumber;
- (void)updateProgress;
- (void)updateSearchBarDetails;

@end