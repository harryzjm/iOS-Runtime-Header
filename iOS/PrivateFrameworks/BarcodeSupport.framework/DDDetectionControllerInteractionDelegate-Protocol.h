//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BarcodeSupport/NSObject-Protocol.h>

@class DDAction, UIAlertController;

@protocol DDDetectionControllerInteractionDelegate <NSObject>

@optional
- (void)actionDidFinish:(DDAction *)arg1;
- (void)actionWillStart:(DDAction *)arg1;
- (void)action:(DDAction *)arg1 didDismissAlertController:(UIAlertController *)arg2;
@end

