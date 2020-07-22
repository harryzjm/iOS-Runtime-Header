//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MSCLWaveformImageProducer : NSObject
{
    double _powerBarSpacing;
    double _powerBarWidth;
    NSMutableArray *_powerLevels;
    long long _waveformMode;
}

@property(nonatomic) long long waveformMode; // @synthesize waveformMode=_waveformMode;
@property(copy, nonatomic) NSArray *powerLevels; // @synthesize powerLevels=_powerLevels;
@property(nonatomic) double powerBarWidth; // @synthesize powerBarWidth=_powerBarWidth;
@property(nonatomic) double powerBarSpacing; // @synthesize powerBarSpacing=_powerBarSpacing;
- (void).cxx_destruct;
- (id)_averagedPowerLevelsWithCount:(long long)arg1;
- (id)imageWithSize:(struct CGSize)arg1;
- (void)appendPowerLevel:(double)arg1;
- (id)init;

@end

