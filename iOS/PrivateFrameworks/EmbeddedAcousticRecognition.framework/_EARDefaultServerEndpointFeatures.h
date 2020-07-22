//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARDefaultServerEndpointFeatures : NSObject
{
    float _endOfSentenceLikelihood;
    float _silencePosterior;
    long long _wordCount;
    long long _trailingSilenceDuration;
}

@property(nonatomic) float silencePosterior; // @synthesize silencePosterior=_silencePosterior;
@property(nonatomic) float endOfSentenceLikelihood; // @synthesize endOfSentenceLikelihood=_endOfSentenceLikelihood;
@property(nonatomic) long long trailingSilenceDuration; // @synthesize trailingSilenceDuration=_trailingSilenceDuration;
@property(nonatomic) long long wordCount; // @synthesize wordCount=_wordCount;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(float)arg3 silencePosterior:(float)arg4;

@end

