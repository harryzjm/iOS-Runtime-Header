//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconImageView, SBIconLabelImage, SBIconLabelImageParameters, SBIconView, UIView;
@protocol SBIconAccessoryView, SBIconLabelAccessoryView, SBIconViewSnapshotProviding;

@protocol SBIconViewReuseDelegate <NSObject>

@optional
- (id <SBIconViewSnapshotProviding>)screenSnapshotProviderForComponentsOfIconView:(SBIconView *)arg1;
- (_Bool)iconView:(SBIconView *)arg1 shouldContinueToUseBackgroundViewForComponents:(UIView *)arg2;
- (UIView *)iconView:(SBIconView *)arg1 backgroundViewForComponentsOfType:(long long)arg2;
- (SBIconLabelImage *)iconView:(SBIconView *)arg1 labelImageWithParameters:(SBIconLabelImageParameters *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconLabelAccessoryView:(UIView<SBIconLabelAccessoryView> *)arg2;
- (UIView<SBIconLabelAccessoryView> *)iconView:(SBIconView *)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (UIView<SBIconAccessoryView> *)iconView:(SBIconView *)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconImageView:(SBIconImageView *)arg2;
- (SBIconImageView *)imageViewForIconView:(SBIconView *)arg1;
@end

