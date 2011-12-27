//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Nilesh on 6/17/2011.
//  Copyright flipbook LLC 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloWorldViewController;

@interface HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloWorldViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloWorldViewController *viewController;

@end

