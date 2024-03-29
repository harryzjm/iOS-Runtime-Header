//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNBackbone : NSObject
{
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
    float *_outputBeforeFc;
    float *_outputBeforeSpatiialPooling;
    float *_outputRes4;
    float *_outputBeforeTemporalPooling;
    NSData *_embedding;
}

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSData *embedding; // @synthesize embedding=_embedding;
@property(readonly) float *outputBeforeTemporalPooling; // @synthesize outputBeforeTemporalPooling=_outputBeforeTemporalPooling;
@property(readonly) float *outputRes4; // @synthesize outputRes4=_outputRes4;
@property(readonly) float *outputBeforeSpatiialPooling; // @synthesize outputBeforeSpatiialPooling=_outputBeforeSpatiialPooling;
@property(readonly) float *outputBeforeFc; // @synthesize outputBeforeFc=_outputBeforeFc;
- (int)inference:(float *)arg1;
- (id)initWithConfig:(id)arg1;

@end

