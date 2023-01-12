//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MRUVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MRUButton : MPButton <MRUVisualStylingProviderObserver>
{
    MRUVisualStylingProvider *_stylingProvider;
    long long _pointerStyle;
    double _cursorScale;
}

- (void).cxx_destruct;
@property(nonatomic) double cursorScale; // @synthesize cursorScale=_cursorScale;
@property(nonatomic) long long pointerStyle; // @synthesize pointerStyle=_pointerStyle;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
- (void)updateVisualStyling;
- (id)pointerStyleWithProposedEffect:(id)arg1 proposedShape:(id)arg2;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
