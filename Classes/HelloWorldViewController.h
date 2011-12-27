//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Nilesh on 6/17/2011.
//  Copyright flipbook LLC 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController {
	IBOutlet UITextField *txtYourName;
	IBOutlet UILabel *lblUserTypedName;
}

- (IBAction) submitYourName;
@end

