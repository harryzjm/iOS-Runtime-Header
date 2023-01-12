//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightUIInternal/NSObject-Protocol.h>

@class CALayer, NSArray, SFCardSection, UIViewController;

@protocol SearchUICardViewDelegate <NSObject>

@optional
- (CALayer *)customLayerForCardSection:(SFCardSection *)arg1;
- (NSArray *)customInteractionsForCardSection:(SFCardSection *)arg1;
- (void)cardViewController:(UIViewController *)arg1 preferredContentSizeDidChange:(struct CGSize)arg2 animated:(_Bool)arg3;
- (void)presentViewController:(UIViewController *)arg1;
- (UIViewController *)customViewControllerForCardSection:(SFCardSection *)arg1;
@end

