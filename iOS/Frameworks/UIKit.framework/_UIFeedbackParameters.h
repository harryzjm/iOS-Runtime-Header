//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class _UIFeedback;

@interface _UIFeedbackParameters : NSObject <NSCopying>
{
    float _volume;
    float _rate;
    float _transposition;
    float _attackTime;
    float _decayTime;
    float _releaseTime;
    _UIFeedback *_feedback;
    _UIFeedbackParameters *_parentParameters;
}

+ (id)parameters;
@property(nonatomic) __weak _UIFeedbackParameters *parentParameters; // @synthesize parentParameters=_parentParameters;
@property(nonatomic) __weak _UIFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) float releaseTime; // @synthesize releaseTime=_releaseTime;
@property(nonatomic) float decayTime; // @synthesize decayTime=_decayTime;
@property(nonatomic) float attackTime; // @synthesize attackTime=_attackTime;
@property(nonatomic) float transposition; // @synthesize transposition=_transposition;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedback:(id)arg1;
@property(readonly, nonatomic, getter=_effectiveVolume) float effectiveVolume;
- (float)_effectiveValueForParameterWithKey:(id)arg1;
- (void)_updateParameterWithKey:(id)arg1;
@property(readonly, nonatomic, getter=_isAudio) _Bool audio;

@end

