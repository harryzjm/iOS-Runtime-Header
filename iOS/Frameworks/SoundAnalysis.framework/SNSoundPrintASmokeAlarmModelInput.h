//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrintASmokeAlarmModelInput : NSObject
{
    MLMultiArray *_input1;
    MLMultiArray *_stateIn;
    MLMultiArray *_thresholdedHistoryIn;
    MLMultiArray *_detectedHistoryIn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *detectedHistoryIn; // @synthesize detectedHistoryIn=_detectedHistoryIn;
@property(retain, nonatomic) MLMultiArray *thresholdedHistoryIn; // @synthesize thresholdedHistoryIn=_thresholdedHistoryIn;
@property(retain, nonatomic) MLMultiArray *stateIn; // @synthesize stateIn=_stateIn;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 thresholdedHistoryIn:(id)arg3 detectedHistoryIn:(id)arg4;
- (id)initWithInput1:(id)arg1;

@end

