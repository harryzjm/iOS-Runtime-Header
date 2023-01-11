//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

#import <GameCenterUI/GKTextStyleReplay-Protocol.h>

@class GKTextStyle, NSString;

@interface GKLabel : UILabel <GKTextStyleReplay>
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
    _Bool _shouldEnforcePreferredWidth;
    _Bool _usingAttributedText;
    _Bool _shouldInhibitReplay;
    double _actualFontShrinkageFactor;
    struct NSEdgeInsets _titleEdgeInsets;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) double actualFontShrinkageFactor; // @synthesize actualFontShrinkageFactor=_actualFontShrinkageFactor;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
@property(nonatomic) struct NSEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) _Bool shouldInhibitReplay; // @synthesize shouldInhibitReplay=_shouldInhibitReplay;
@property(readonly, nonatomic) _Bool usingAttributedText; // @synthesize usingAttributedText=_usingAttributedText;
@property(nonatomic) _Bool shouldEnforcePreferredWidth; // @synthesize shouldEnforcePreferredWidth=_shouldEnforcePreferredWidth;
- (void)setBounds:(struct CGRect)arg1;
- (void)updateConstraints;
- (struct CGSize)shrinkFontToFitSize:(struct CGSize)arg1;
- (void)shrinkFontToFitWidth;
- (void)applyTextStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) GKTextStyle *baseStyle;
- (void)replayAndApplyStyleWithSystemContentChange:(_Bool)arg1;
- (void)replayAndApplyStyleUnlessInhibited;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
