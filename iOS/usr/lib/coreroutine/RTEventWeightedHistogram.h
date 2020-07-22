//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/RTEventHistogram-Protocol.h>

@class NSMutableDictionary, NSString;

@interface RTEventWeightedHistogram <RTEventHistogram>
{
    NSMutableDictionary *_weightedEventModel;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *weightedEventModel; // @synthesize weightedEventModel=_weightedEventModel;
- (void).cxx_destruct;
- (id)allEventIds;
- (void)clear;
- (void)scaleWeights:(double)arg1;
- (double)weightForEventId:(id)arg1;
- (void)addEventId:(id)arg1 weight:(double)arg2;
- (void)addEvent:(id)arg1 weight:(double)arg2;
- (void)addEventId:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

