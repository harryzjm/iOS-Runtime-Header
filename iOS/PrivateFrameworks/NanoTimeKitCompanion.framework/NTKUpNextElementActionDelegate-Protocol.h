//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSString, NTKUpNextElementAction, UIViewController;

@protocol NTKUpNextElementActionDelegate <NSObject>
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 didFinishTask:(_Bool)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsViewControllerDisplayed:(UIViewController *)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsToPerformTapActionForComplicationSlot:(NSString *)arg2;
@end
