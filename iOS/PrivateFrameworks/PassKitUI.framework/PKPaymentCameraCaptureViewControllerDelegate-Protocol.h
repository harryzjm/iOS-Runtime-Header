//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, UIViewController;

@protocol PKPaymentCameraCaptureViewControllerDelegate <NSObject>
- (void)cameraCaptureViewControllerDidSelectManualEntry:(UIViewController *)arg1;
- (void)cameraCaptureViewController:(UIViewController *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraCaptureViewControllerDidFail:(UIViewController *)arg1;
@end

