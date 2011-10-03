//
//  pdf_tutorialAppDelegate.h
//  pdf-tutorial
//
//  Created by Morten Jacobsen on 03.10.11.
//  Copyright 2011 no excuse accounting as. All rights reserved.
//

#import <UIKit/UIKit.h>

@class pdf_tutorialViewController;

@interface pdf_tutorialAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet pdf_tutorialViewController *viewController;

@end
