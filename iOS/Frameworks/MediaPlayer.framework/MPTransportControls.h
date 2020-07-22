//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPAVController, MPAVItem, MPButton, NSMutableIndexSet, NSString;

@interface MPTransportControls : UIView
{
    id _target;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    NSMutableIndexSet *_heldParts;
    unsigned long long _visibleParts;
    unsigned int _playing:1;
    _Bool _allowsWirelessPlayback;
    _Bool _registeredForPlayerNotifications;
    MPButton *_alternatesButton;
    MPButton *_bookmarkButton;
    MPButton *_chaptersButton;
    MPButton *_emailButton;
    MPButton *_fastForward15SecondsButton;
    MPButton *_likeOrBanButton;
    MPButton *_nextButton;
    MPButton *_playButton;
    MPButton *_previousButton;
    MPButton *_rewind15SecondsButton;
    MPButton *_rewind30SecondsButton;
    MPButton *_scaleButton;
    MPButton *_toggleFullscreenButton;
    id _volumeSlider;
}

+ (_Bool)buttonImagesUseBackgroundImage;
+ (long long)buttonType;
+ (Class)buttonClass;
+ (unsigned long long)defaultVisibleParts;
@property(nonatomic) _Bool registeredForPlayerNotifications; // @synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(nonatomic) _Bool allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
- (void).cxx_destruct;
- (void)_updateEnabledStates:(_Bool)arg1;
- (void)_updateTintColorForPart:(unsigned long long)arg1;
- (void)_updatePlayButtonImage;
- (id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(unsigned long long)arg3;
- (void)_reloadViewWithAnimation:(_Bool)arg1;
- (_Bool)_handleTapForPart:(unsigned long long)arg1;
- (_Bool)_handleReleaseForPart:(unsigned long long)arg1;
- (_Bool)_handleHoldForPart:(unsigned long long)arg1;
- (void)_applyDesiredPartsWithAnimation:(_Bool)arg1;
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg1;
- (_Bool)usesTintColorForControls;
- (_Bool)alwaysHidesSystemVolumeHUD;
- (id)tintColorForPart:(unsigned long long)arg1;
- (_Bool)showsVolumeSliderWhenNoVolumeControlAvailable;
- (id)highlightedButtonImageForPart:(unsigned long long)arg1;
- (id)disabledButtonImageForPart:(unsigned long long)arg1;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(_Bool)arg3;
- (id)newVolumeSlider;
- (id)newButtonForPart:(unsigned long long)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (void)buttonHeld:(id)arg1;
- (void)buttonDown:(id)arg1;
- (_Bool)allowsWirelessPlaybackForCurrentItem;
- (void)_validityChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_timeMarkersAvailableNotification:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_availableRoutesChangedNotification:(id)arg1;
- (void)_alternateTypesChangedNotification:(id)arg1;
@property(readonly, nonatomic) NSString *playPauseButtonImage;
@property(readonly, nonatomic) NSString *pauseButtonImage;
@property(readonly, nonatomic) NSString *playButtonImage;
- (void)setVisibleParts:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)buttonForPart:(unsigned long long)arg1;
- (void)tintColorDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

