//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStateUploading : NSObject <PFLTaskState>
{
    NSData *_privatizedDiff;
    long long _diffCount;
    NSDictionary *_metrics;
    NSNumber *_numValidationSamples;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *numValidationSamples; // @synthesize numValidationSamples=_numValidationSamples;
@property(readonly, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) long long diffCount; // @synthesize diffCount=_diffCount;
@property(readonly, nonatomic) NSData *privatizedDiff; // @synthesize privatizedDiff=_privatizedDiff;
- (void)suspend;
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPrivatizedDiff:(id)arg1 diffCount:(long long)arg2 metrics:(id)arg3 numValidationSamples:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)tag;

@end
