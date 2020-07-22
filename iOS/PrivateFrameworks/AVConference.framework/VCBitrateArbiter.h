//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCBitrateArbiter : NSObject
{
    unsigned int _maxAllowedBitrate;
    unsigned int _maxAllowedBitrate2G;
    unsigned int _maxAllowedBitrate3G;
    unsigned int _maxAllowedBitrateLTE;
    unsigned int _maxAllowedBitrateWifi;
    unsigned int _maxAllowedScreenShareBitrate2G;
    unsigned int _maxAllowedScreenShareBitrate3G;
    unsigned int _maxAllowedScreenShareBitrateLTE;
    unsigned int _maxAllowedScreenShareBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    NSMutableArray *supportedBitrateRules;
}

@property(readonly) unsigned int maxAllowedBitrateWifi; // @synthesize maxAllowedBitrateWifi=_maxAllowedBitrateWifi;
@property(readonly) unsigned int maxAllowedBitrateLTE; // @synthesize maxAllowedBitrateLTE=_maxAllowedBitrateLTE;
@property(readonly) unsigned int maxAllowedBitrate3G; // @synthesize maxAllowedBitrate3G=_maxAllowedBitrate3G;
@property(readonly) unsigned int maxAllowedBitrate2G; // @synthesize maxAllowedBitrate2G=_maxAllowedBitrate2G;
@property(readonly) unsigned int maxAllowedBitrate; // @synthesize maxAllowedBitrate=_maxAllowedBitrate;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1 operatingMode:(int)arg2;
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedScreenShareBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedScreenShareCellularBitrate;
- (unsigned int)maxAllowedCellularBitrate;
- (void)readCarrierBundleValues;
- (void)readStoreBagValues:(void *)arg1;
- (void)readHardwareValues;
- (void)createSupportedBitrateRuleSets;
- (void)dealloc;
- (id)initWithDeviceRole:(int)arg1 callLogFile:(void *)arg2;

@end

