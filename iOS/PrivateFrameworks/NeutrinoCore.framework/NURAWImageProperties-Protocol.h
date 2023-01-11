//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol NURAWNoiseReductionProperties;

@protocol NURAWImageProperties <NSObject>
@property(readonly) id <NURAWNoiseReductionProperties> noiseReductionProperties;
@property(readonly) double tint;
@property(readonly) double temperature;
@property(readonly) NSArray *availableDecoderVersions;
@property(readonly) NSString *decoderVersion;
- (NSArray *)inputNeutralXYFromRGB:(const double *)arg1;
@end
