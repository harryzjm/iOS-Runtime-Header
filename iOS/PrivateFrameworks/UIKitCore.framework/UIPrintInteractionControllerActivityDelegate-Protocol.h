//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIPrintInteractionController, UIViewController, UIWindow;

@protocol UIPrintInteractionControllerActivityDelegate <NSObject>

@optional
- (UIWindow *)printInteractionControllerWindowForPresentation:(UIPrintInteractionController *)arg1;
- (UIViewController *)printInteractionControllerParentViewController:(UIPrintInteractionController *)arg1;
@end
