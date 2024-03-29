//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, AVPlayerLayer, NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
{
    NSObject<OS_dispatch_source> *_hudTimer;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    _Bool _showHud;
    _Bool _spatialDiagnostics;
    int _colorId;
    double _opacity;
    int _fontSizeInt;
    _Bool _updateUISettings;
    int _hudXoffset;
    int _hudYoffset;
    unsigned long long _hudUpdateInterval;
    _Bool _showCompleteURI;
    long long _prevVariantIdx;
    long long _prevStallCount;
    long long _totalStallCount;
    NSNumber *_displayResolutionHeight;
    NSNumber *_displayResolutionWidth;
    NSNumber *_audioSpatializationMode;
    _Bool _requestInFlight;
    NSMutableDictionary *_loadingStatusCache;
}

- (void).cxx_destruct;
@property __weak AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property __weak AVPlayer *player; // @synthesize player=_player;
- (void)_hudUpdateTrigger;
- (void)copyPropertiesFromStringGenerator:(id)arg1;
- (id)displayStringGenerator;
- (void)updateHudWithDisplayString:(id)arg1;
- (_Bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;
- (void)currentItemTracksChanged;
- (void)currentItemChanged;
- (float)getScaleFactorForDisplaySize:(struct CGSize)arg1;
- (void)dealloc;
- (void)startDispatchTimer;
- (void)readHudSettingsAndCallCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getHudSetting;
- (void)setColor:(int)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (_Bool)hudEnabled;

@end

