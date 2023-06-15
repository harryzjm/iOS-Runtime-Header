//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsFaceTimeSettings, VCMediaNegotiatorResultsMediaRecorder, VCMediaNegotiatorResultsVideo;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorBase : NSObject
{
    VCMediaNegotiatorLocalConfiguration *_localSettings;
    VCMediaNegotiatorResults *_negotiatedSettings;
    VCMediaNegotiatorResultsAudio *_negotiatedAudioSettings;
    VCMediaNegotiatorResultsVideo *_negotiatedVideoSettings;
    VCMediaNegotiatorResultsVideo *_negotiatedScreenSettings;
    VCMediaNegotiatorResultsMediaRecorder *_negotiatedMediaRecorderSettings;
    VCMediaNegotiatorResultsFaceTimeSettings *_negotiatedFaceTimeSettings;
    NSMutableArray *_negotiatedStreamGroups;
    VCMediaNegotiatorResultsAudio *_negotiatedSystemAudioResults;
}

+ (void)setupNegotiatedAudioPayloads:(id)arg1 negotiatedAudioSettings:(id)arg2 primaryPayloadPreference:(id)arg3;
+ (void)updateScreenRuleCollections:(id)arg1 size:(struct CGSize)arg2;
+ (void)applyCellularPreferredRule:(id)arg1;
+ (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 videoSettings:(id)arg4 localVideoRuleCollection:(id)arg5 remoteVideoRuleCollection:(id)arg6;
+ (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(_Bool)arg3;
+ (id)getPreferredVideoPayloadList:(id)arg1 localSupportedPayloads:(id)arg2;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings; // @synthesize negotiatedScreenSettings=_negotiatedScreenSettings;
@property(readonly, nonatomic) NSArray *negotiatedStreamGroups; // @synthesize negotiatedStreamGroups=_negotiatedStreamGroups;
@property(readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings; // @synthesize negotiatedFaceTimeSettings=_negotiatedFaceTimeSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsMediaRecorder *negotiatedMediaRecorderSettings; // @synthesize negotiatedMediaRecorderSettings=_negotiatedMediaRecorderSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings; // @synthesize negotiatedVideoSettings=_negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings; // @synthesize negotiatedAudioSettings=_negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings; // @synthesize negotiatedSettings=_negotiatedSettings;
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // @synthesize localSettings=_localSettings;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1;
- (id)negotiatedStreamGroupConfigForGroupID:(unsigned int)arg1 negotiatedStreamGroupConfigs:(id)arg2;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (_Bool)processRemoteNegotiationData:(id)arg1;
- (id)negotiationData;
- (void)dealloc;
- (id)initWithLocalSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

