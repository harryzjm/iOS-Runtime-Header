//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, NSArray, NSDictionary, NSString, NSURL, SSRLoggingAggregator, SSRVoiceProfile;

@interface SSRVoiceProfileRetrainingContext : NSObject
{
    _Bool _filterToVoiceTriggerUtterances;
    _Bool _forceRetrain;
    float _combinationWeight;
    NSString *_sessionId;
    NSArray *_compareVoiceProfileArray;
    SSRVoiceProfile *_voiceProfile;
    unsigned long long _spIdType;
    NSURL *_resourceFilePath;
    NSString *_configVersion;
    unsigned long long _maxAllowedSpeakerVectors;
    NSDictionary *_modelsContext;
    CSAsset *_asset;
    SSRLoggingAggregator *_logAggregator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SSRLoggingAggregator *logAggregator; // @synthesize logAggregator=_logAggregator;
@property(retain, nonatomic) CSAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) float combinationWeight; // @synthesize combinationWeight=_combinationWeight;
@property(readonly, nonatomic) NSDictionary *modelsContext; // @synthesize modelsContext=_modelsContext;
@property(readonly, nonatomic) unsigned long long maxAllowedSpeakerVectors; // @synthesize maxAllowedSpeakerVectors=_maxAllowedSpeakerVectors;
@property(readonly, nonatomic) _Bool forceRetrain; // @synthesize forceRetrain=_forceRetrain;
@property(readonly, nonatomic) _Bool filterToVoiceTriggerUtterances; // @synthesize filterToVoiceTriggerUtterances=_filterToVoiceTriggerUtterances;
@property(readonly, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(readonly, nonatomic) NSURL *resourceFilePath; // @synthesize resourceFilePath=_resourceFilePath;
@property(readonly, nonatomic) unsigned long long spIdType; // @synthesize spIdType=_spIdType;
@property(retain, nonatomic) SSRVoiceProfile *voiceProfile; // @synthesize voiceProfile=_voiceProfile;
@property(retain, nonatomic) NSArray *compareVoiceProfileArray; // @synthesize compareVoiceProfileArray=_compareVoiceProfileArray;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)description;
- (id)initWithVoiceRetrainingContext:(id)arg1 error:(id *)arg2;

@end
