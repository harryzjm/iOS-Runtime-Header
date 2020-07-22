//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIFocusSystem, UIView;
@protocol UICoordinateSpace;

@protocol _UILegacyFocusRegion <NSObject>
- (UIView *)_focusDebugOverlayParentView;
- (NSArray *)_focusRegionGuides;
- (UIView *)_focusRegionView;
- (_Bool)_isTransparentFocusRegion;
- (UIView *)_fulfillPromisedFocusRegion;
- (_Bool)_isPromiseFocusRegion;
- (NSArray *)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_legacy_isEligibleForFocusInteraction;
- (struct CGRect)_focusRegionFrame;
- (UIFocusSystem *)_focusRegionFocusSystem;
@end
