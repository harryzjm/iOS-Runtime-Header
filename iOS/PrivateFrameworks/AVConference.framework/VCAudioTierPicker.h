//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BitrateLimits, NSMutableDictionary, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableDictionary *_tierTablesForRedNumPayloads;
    VCAudioTier *_defaultTier;
    VCAudioTier *_fallbackTier;
    BitrateLimits *_bitrateLimits;
    CDStruct_22a33d58 _config;
}

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;
+ (_Bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 mode:(unsigned char)arg4 redNumPayloads:(unsigned int)arg5 cellular:(_Bool)arg6;
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(_Bool)arg3;
+ (_Bool)loadVCAudioTierfromTierTable:(id)arg1 mode:(unsigned char)arg2 isIPv4:(_Bool)arg3 cellular:(_Bool)arg4 redNumPayloads:(unsigned int)arg5 tierBitrate:(unsigned int)arg6 outEntry:(struct tagVCAudioTierPickerPlistEntry *)arg7;
+ (id)loadAudioTiersFromPlist:(id)arg1;
+ (id)generateAudioTiersDictFromPlistForBitrateLimits:(id)arg1 tierPickerConfig:(CDStruct_22a33d58)arg2 redNumPayloads:(unsigned int)arg3;
+ (_Bool)isModeV2:(unsigned char)arg1;
+ (_Bool)isModeAudioVideo:(unsigned char)arg1;
+ (_Bool)isModeAudioOnly:(unsigned char)arg1;
+ (_Bool)usePlistForAudioTierTableFromMode:(unsigned char)arg1;
+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 tierPickerMode:(unsigned char)arg5 usingCellular:(_Bool)arg6 useCaseWatchContinuity:(_Bool)arg7;
+ (_Bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;
+ (unsigned char)operatingModeToTierPickerMode:(int)arg1 preferPlistForTierTable:(_Bool)arg2;
+ (int)tierPickerModeToAVConferenceOperatingMode:(unsigned char)arg1;
@property CDStruct_22a33d58 config; // @synthesize config=_config;
@property(readonly) VCAudioTier *defaultTier; // @synthesize defaultTier=_defaultTier;
- (id)allAudioTiers;
- (id)tierForAudioBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;
- (id)chooseMultiwayAudioTierForRedPayload:(unsigned long long)arg1;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;
- (void)printCreatedAudioTiers:(id)arg1;
- (void)dealloc;
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)arg1 usingCellular:(_Bool)arg2;
- (_Bool)setupTierPickerForConfig:(CDStruct_22a33d58)arg1;
- (void)logTierPickerConfig:(CDStruct_22a33d58)arg1;
- (id)configToString:(CDStruct_22a33d58)arg1;
- (_Bool)reconfigureTierPicker:(CDStruct_22a33d58)arg1;
- (id)initWithConfig:(CDStruct_22a33d58)arg1;

@end

