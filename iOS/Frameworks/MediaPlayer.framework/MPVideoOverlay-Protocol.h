//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPAVController, MPAVItem, UINavigationBar;
@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(nonatomic) unsigned long long disabledParts;
@property(nonatomic) unsigned long long visibleParts;
@property(nonatomic) unsigned long long desiredParts;
@property(retain, nonatomic) MPAVItem *item;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate;
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
@property(retain, nonatomic) MPAVController *player;
@property(nonatomic) _Bool navigationBarHidden;
@property(nonatomic) _Bool allowsWirelessPlayback;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)stopTicking;
- (void)startTicking;
- (_Bool)updateTimeBasedValues;
@end
