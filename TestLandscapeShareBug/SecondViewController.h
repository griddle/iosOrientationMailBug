//
//  SecondViewController.h
//  TestLandscapeShareBug
//
//  Created by Garret on 9/13/15.
//  Copyright (c) 2015 Garret. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>


@interface SecondViewController : UIViewController <MFMailComposeViewControllerDelegate>

- (IBAction)showEmail:(id)sender;

@end

