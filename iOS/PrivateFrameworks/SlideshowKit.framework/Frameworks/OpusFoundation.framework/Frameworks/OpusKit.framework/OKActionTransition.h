//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionTransitionExports-Protocol.h>

@interface OKActionTransition <NSSecureCoding, OKActionTransitionExports>
{
    float _progress;
    float _velocity;
    unsigned long long _target;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5;
@property(readonly, nonatomic) float velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long target; // @synthesize target=_target;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

