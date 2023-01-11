//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSSet, NSString, UIView, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarData, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol _UIStatusBarActionable;

@protocol _UIStatusBarVisualProvider <NSObject>
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool supportsIndirectPointerTouchActions;
@property(nonatomic) __weak _UIStatusBar *statusBar;
- (_UIStatusBarStyleAttributes *)styleAttributesForStyle:(long long)arg1;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
- (_Bool)showSensorActivityIndicatorWithoutPortalView;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)actionable:(id <_UIStatusBarActionable>)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1;
- (void)itemCreated:(_UIStatusBarItem *)arg1;
- (void)statusBarEnabledPartsUpdated;
- (void)statusBarRegionsUpdated;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
@end
