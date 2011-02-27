//
//  HappinessAppDelegate.h
//  Happiness
//
//  Created by james sa on 2011/2/27.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HappinessViewController;

@interface HappinessAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HappinessViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HappinessViewController *viewController;

@end

