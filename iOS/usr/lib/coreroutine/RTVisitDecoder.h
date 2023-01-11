//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RTVisitHyperParameter;

@interface RTVisitDecoder : NSObject
{
    NSArray *_beam;
    RTVisitHyperParameter *_hyperParameter;
}

@property(readonly, nonatomic) RTVisitHyperParameter *hyperParameter; // @synthesize hyperParameter=_hyperParameter;
- (void).cxx_destruct;
- (id)decodeWithProbabilities:(const float *)arg1 batchSize:(unsigned long long)arg2 firstTimeStepDate:(id)arg3;
- (id)createSuccessor:(id)arg1 probabilities:(const float *)arg2 firstTimeStepDate:(id)arg3 currentDate:(id)arg4;
- (void)updateSuccessor:(id)arg1 newNode:(id)arg2;
- (void)reset;
- (id)initWithHyperParameter:(id)arg1;
- (id)init;

@end
