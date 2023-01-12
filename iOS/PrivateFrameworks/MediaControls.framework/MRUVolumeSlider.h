//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPVolumeSlider.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MRUVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MRUVolumeSlider : MPVolumeSlider <MRUVisualStylingProviderObserver>
{
    MRUVisualStylingProvider *_stylingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (id)createThumbView;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithThumbSize:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
