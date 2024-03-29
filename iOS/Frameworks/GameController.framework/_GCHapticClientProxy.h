//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCSProfile, NSArray, NSMutableDictionary, NSString, _GCControllerManagerServer;
@protocol GCSSettingsStoreService, NSCopying><NSObject><NSSecureCoding, _GCIPCIncomingConnection;

__attribute__((visibility("hidden")))
@interface _GCHapticClientProxy : NSObject
{
    _Bool _playersPlayedHapticsThisSlice;
    _GCControllerManagerServer *_server;
    struct HapticSharedMemory _sharedMemory;
    id <GCSSettingsStoreService> _settingsStore;
    GCSProfile *_activeProfile;
    _Bool _dirtyMuteState;
    _Bool _muted;
    _Bool _neverMute;
    int _muteReasons[5];
    float _hapticStrength;
    _Atomic _Bool _invalid;
    _Bool _running;
    _Bool _stopping;
    id <_GCIPCIncomingConnection> _connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    double _initializationTime;
    _Bool _complete;
    _Bool _mockClient;
    unsigned int _applicationState;
    int _totalPlayers;
    unsigned long long _clientID;
    NSString *_bundleIdentifier;
    id <NSCopying><NSObject><NSSecureCoding> _identifier;
    NSString *_persistentControllerIdentifier;
    NSString *_controllerProductCategory;
    NSArray *_actuators;
    NSMutableDictionary *_hapticPlayers;
    double _activeLifetimeInSeconds;
    NSArray *_invalidationHandlers;
}

+ (id)clientProxyWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(readonly, nonatomic) double activeLifetimeInSeconds; // @synthesize activeLifetimeInSeconds=_activeLifetimeInSeconds;
@property(readonly, nonatomic) int totalPlayers; // @synthesize totalPlayers=_totalPlayers;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic, getter=isMockClient) _Bool mockClient; // @synthesize mockClient=_mockClient;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSMutableDictionary *hapticPlayers; // @synthesize hapticPlayers=_hapticPlayers;
@property(readonly, copy, nonatomic) NSArray *actuators; // @synthesize actuators=_actuators;
@property(readonly, copy, nonatomic) NSString *controllerProductCategory; // @synthesize controllerProductCategory=_controllerProductCategory;
@property(readonly, copy, nonatomic) NSString *persistentControllerIdentifier; // @synthesize persistentControllerIdentifier=_persistentControllerIdentifier;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)addActiveTime:(double)arg1;
@property(readonly, nonatomic) double totalLifetimeInSeconds;
- (id)description;
- (void)notifyClientCompletedWithError:(id)arg1;
- (_Bool)isMuted;
- (_Bool)isMutedForReason:(unsigned long long)arg1;
- (float)hapticStrength;
- (void)setHapticStrength:(float)arg1;
- (void)setMute:(_Bool)arg1 forReason:(unsigned long long)arg2;
- (void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2;
- (void *)sharedMemory;
- (_Bool)stopping;
- (_Bool)running;
- (void)refreshUserSettingForMuteHaptics;
- (void)invalidate;
- (void)invalidateDueToControllerDisconnect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)_initWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;
- (id)addInvalidationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid;
- (void)debugEngineIsRunning:(CDUnknownBlockType)arg1;
- (void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopRunning:(CDUnknownBlockType)arg1;
- (void)stopRunning;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)stopPrewarm;
- (void)prewarm:(CDUnknownBlockType)arg1;
- (void)detachSequence:(unsigned long long)arg1;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)loadVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)removeChannel:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestChannels:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)releaseChannels;
- (void)teardownAndReleaseChannels;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getHapticLatency:(CDUnknownBlockType)arg1;
- (void)releaseClientResources;
- (void)allocateClientResources:(CDUnknownBlockType)arg1;
- (void)queryCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)configureWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_configureActuatorsLegacyWithOptions:(id)arg1;

@end

