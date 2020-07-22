//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject
{
    void *_impl;
}

- (void)dealloc;
- (void)loadFactoryReverbPreset:(long long)arg1;
@property(readonly, nonatomic) AVAudioUnitEQFilterParameters *filterParameters;
@property(nonatomic) float level;
@property(nonatomic) _Bool enable;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl *)arg1;
- (id)init;

@end

