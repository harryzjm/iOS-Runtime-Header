//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIStatusBarDisplayable-Protocol.h>

@class NSString, NSTimer, UIAccessibilityHUDItem;

@interface _UIStatusBarStringView <_UIStatusBarDisplayable>
{
    _Bool _emphasized;
    _Bool _showsAlternateText;
    double _baselineOffset;
    NSString *_alternateText;
    NSString *_originalText;
    NSTimer *_alternateTextTimer;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property(readonly, nonatomic) NSTimer *alternateTextTimer; // @synthesize alternateTextTimer=_alternateTextTimer;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) _Bool showsAlternateText; // @synthesize showsAlternateText=_showsAlternateText;
@property(copy, nonatomic) NSString *alternateText; // @synthesize alternateText=_alternateText;
@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(nonatomic) _Bool emphasized; // @synthesize emphasized=_emphasized;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
- (void)didMoveToWindow;
- (void)_updateAlternateTextTimer;
- (void)setText:(id)arg1;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) _Bool wantsCrossfade;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
