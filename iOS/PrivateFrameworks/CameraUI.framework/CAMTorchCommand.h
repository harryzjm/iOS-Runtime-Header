//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMTorchCommand
{
    float __level;
    long long __torchMode;
}

@property(readonly, nonatomic) float _level; // @synthesize _level=__level;
@property(readonly, nonatomic) long long _torchMode; // @synthesize _torchMode=__torchMode;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTorchLevel:(float)arg1;
- (id)initWithTorchMode:(long long)arg1;

@end

