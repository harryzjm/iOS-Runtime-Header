//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCPClassification : NSObject
{
    float _duration;
    float _sumConfidence;
    float _sumAdjustConfidence;
    float _adjustDuration;
    NSString *_sceneId;
}

- (void).cxx_destruct;
@property float adjustDuration; // @synthesize adjustDuration=_adjustDuration;
@property float sumAdjustConfidence; // @synthesize sumAdjustConfidence=_sumAdjustConfidence;
@property float sumConfidence; // @synthesize sumConfidence=_sumConfidence;
@property float duration; // @synthesize duration=_duration;
@property(retain) NSString *sceneId; // @synthesize sceneId=_sceneId;
- (id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3 withAdjustConfidence:(float)arg4;

@end

