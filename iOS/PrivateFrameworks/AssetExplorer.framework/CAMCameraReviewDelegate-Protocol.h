//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol CAMCameraReviewViewController;

@protocol CAMCameraReviewDelegate <NSObject>

@optional
- (void)reviewViewController:(UIViewController<CAMCameraReviewViewController> *)arg1 didFinishReviewingAssets:(NSArray *)arg2;
- (void)reviewViewControllerDidRequestRetake:(UIViewController<CAMCameraReviewViewController> *)arg1;
- (void)reviewViewControllerDidCancelReview:(UIViewController<CAMCameraReviewViewController> *)arg1;
@end

