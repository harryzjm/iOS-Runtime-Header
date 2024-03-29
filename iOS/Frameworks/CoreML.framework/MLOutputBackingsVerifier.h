//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MLOutputBackingsVerifier : NSObject
{
    NSDictionary *_outputDescriptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *outputDescriptions; // @synthesize outputDescriptions=_outputDescriptions;
- (_Bool)_verifyPixelBufferOutputBacking:(struct __CVBuffer *)arg1 forFeature:(id)arg2 error:(id *)arg3;
- (_Bool)_verifyMultiArrayOutputBacking:(id)arg1 forFeature:(id)arg2 error:(id *)arg3;
- (_Bool)_verifyOutputBacking:(id)arg1 forFeature:(id)arg2 error:(id *)arg3;
- (_Bool)verifyOutputBackings:(id)arg1 predictionUsesBatch:(_Bool)arg2 error:(id *)arg3;
- (id)initWithOutputDescriptions:(id)arg1;

@end

