//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVVCMetricsManager : NSObject
{
    unsigned long long _voiceTriggerStartHostTime;
    unsigned long long _callToStartRecordHostTime;
    NSMutableDictionary *_publicMetrics;
    NSMutableDictionary *_privateMetrics;
}

+ (id)sharedManager;
@property(retain) NSMutableDictionary *privateMetrics; // @synthesize privateMetrics=_privateMetrics;
@property(retain) NSMutableDictionary *publicMetrics; // @synthesize publicMetrics=_publicMetrics;
@property(nonatomic) unsigned long long callToStartRecordHostTime; // @synthesize callToStartRecordHostTime=_callToStartRecordHostTime;
@property(nonatomic) unsigned long long voiceTriggerStartHostTime; // @synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime;
- (void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription)arg1;
- (int)resetAudioIssueDetector;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList)arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp *)arg3;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription)arg1 numFrames:(unsigned int)arg2;
- (_Bool)measureElapseTimeForMetric:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)retrieveMetrics;
- (void)dealloc;
- (id)init;

@end
