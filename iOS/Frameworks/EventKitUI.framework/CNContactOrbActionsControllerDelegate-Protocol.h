//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class CNContactOrbActionsController, NSArray, UIViewController;

@protocol CNContactOrbActionsControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForActionsController:(CNContactOrbActionsController *)arg1;
- (void)contactOrbActionsController:(CNContactOrbActionsController *)arg1 didUpdateWithMenu:(NSArray *)arg2;
@end

