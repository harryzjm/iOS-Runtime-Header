//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVAudioMixEffectParameters, AVMutableScheduledAudioParameters, NSString;

@interface AVAudioMixInputParametersInternal : NSObject
{
    int trackID;
    AVMutableScheduledAudioParameters *scheduledAudioParameters;
    NSString *audioTimePitchAlgorithm;
    struct opaqueMTAudioProcessingTap *tap;
    AVAudioMixEffectParameters *effectParameters;
}

@end

