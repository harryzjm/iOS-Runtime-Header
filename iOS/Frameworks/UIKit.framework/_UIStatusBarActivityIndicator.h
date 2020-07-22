//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIStatusBarDisplayable-Protocol.h>

@class NSString, UIAccessibilityHUDItem;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIndicator <_UIStatusBarDisplayable>
{
    struct UIEdgeInsets _alignmentRectInsets;
}

@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

