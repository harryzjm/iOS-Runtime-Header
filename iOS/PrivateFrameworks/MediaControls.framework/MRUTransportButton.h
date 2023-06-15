//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

@class MRUCAPackageView, MRUTransportControlItem, MRUVisualStylingProvider, NSString, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface MRUTransportButton : MPButton
{
    _Bool _dimmed;
    _Bool _showHighlightCircle;
    NSString *_identifier;
    MRUVisualStylingProvider *_stylingProvider;
    MRUTransportControlItem *_transportControlItem;
    long long _pointerStyle;
    double _cursorScale;
    double _packageScale;
    unsigned long long _packageState;
    UIView *_backgroundView;
    MRUCAPackageView *_packageView;
    UIImage *_pendingImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *pendingImage; // @synthesize pendingImage=_pendingImage;
@property(retain, nonatomic) MRUCAPackageView *packageView; // @synthesize packageView=_packageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned long long packageState; // @synthesize packageState=_packageState;
@property(nonatomic) _Bool showHighlightCircle; // @synthesize showHighlightCircle=_showHighlightCircle;
@property(nonatomic) double packageScale; // @synthesize packageScale=_packageScale;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) double cursorScale; // @synthesize cursorScale=_cursorScale;
@property(nonatomic) long long pointerStyle; // @synthesize pointerStyle=_pointerStyle;
@property(retain, nonatomic) MRUTransportControlItem *transportControlItem; // @synthesize transportControlItem=_transportControlItem;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)updateHighlighted;
- (void)updateContentView;
- (void)updateBackgroundView;
- (void)updateVisualStyling;
- (id)pointerStyleWithProposedEffect:(id)arg1 proposedShape:(id)arg2;
- (void)didSelect:(id)arg1;
- (_Bool)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg1;
- (void)clearPackage;
- (void)setPackageGlyphState:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setAsset:(id)arg1 animated:(_Bool)arg2;
- (void)setAsset:(id)arg1;
- (void)visualStylingProviderDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

