//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSDictionary;

@protocol CSVoiceTriggerDelegate <NSObject>
- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1;

@optional
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1;
@end
