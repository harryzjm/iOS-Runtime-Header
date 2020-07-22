//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider
{
    UIColor *_maximumTintUsedForTrackImageColor;
    UIColor *_minimumTintUsedForTrackImageColor;
}

- (void)_updateTrackTintForVolumeControlAvailability;
- (id)_trackImageWithTintColor:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (id)_newVolumeWarningView;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

