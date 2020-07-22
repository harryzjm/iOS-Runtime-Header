//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSError, NSString, _UIDICActivityViewController;

@protocol _UIDICActivityViewControllerDelegate <NSObject>
- (NSString *)activityViewController:(_UIDICActivityViewController *)arg1 mailSubjectForActivityType:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 didFinishPerformingActivityType:(NSString *)arg2 completed:(_Bool)arg3 items:(NSArray *)arg4 error:(NSError *)arg5;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 didFinishPresentingActivityType:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 openActivityDidEndSendingToApplication:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 openActivityWillBeginSendingToApplication:(NSString *)arg2;
@end

