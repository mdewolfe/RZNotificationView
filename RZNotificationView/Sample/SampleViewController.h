//
//  SampleViewController.h
//  RZNotificationView
//
//  Created by Jérémy Lagrue on 25/09/12.
//  Copyright (c) 2012 Rezzza. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RZNotificationView.h"
#import <QuartzCore/QuartzCore.h>
#import "WEPopoverController.h"
#import "ColorViewController.h"

@class PrettyGridTableViewCell;

@interface SampleViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, RZNotificationViewDelegate, WEPopoverControllerDelegate, UIPopoverControllerDelegate, ColorViewControllerDelegate>
{
    UISlider *_delaySlider;
    UILabel *_delayLabel;
    
    IBOutlet UIView *_topColorView;
    IBOutlet UIView *_bottomColorView;
    
    IBOutlet UITableView *_tableView;

    NSInteger _current;
    NSIndexPath *_indexPath;
    RZNotificationView *_notifView;
}

@property (nonatomic, strong) WEPopoverController *popoverController;
@property (nonatomic, strong) IBOutlet UITableView *tableView;

- (IBAction) testButtonTop:(id)sender;
- (IBAction) testButtonBottom:(id)sender;
- (IBAction) navBarHidden:(id)sender;
- (IBAction) sliderValueChanged:(id)sender;

@end
