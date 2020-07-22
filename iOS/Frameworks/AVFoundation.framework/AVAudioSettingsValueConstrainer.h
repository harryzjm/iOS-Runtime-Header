//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject
{
    struct AudioStreamBasicDescription _inputASBD;
    struct AudioStreamBasicDescription _outputASBD;
    struct OpaqueAudioConverter *_audioConverter;
    unsigned int _outputDataRate;
    _Bool _needNewConverter;
    _Bool _needAvailableSampleRates;
    _Bool _needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}

- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
@property(nonatomic) unsigned int outputDataRate;
@property(nonatomic) unsigned int outputChannelCount;
@property(nonatomic) unsigned int outputBitsPerChannel;
@property(nonatomic) unsigned int outputFormatFlags;
@property(nonatomic) unsigned int outputFormat;
@property(nonatomic) float outputSampleRate;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg1;
- (void)_bringUpToDate;
- (id)_fetchApplicableOutputDataRates;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_buildAvailableSampleRates;
- (void)_buildAudioConverter;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

