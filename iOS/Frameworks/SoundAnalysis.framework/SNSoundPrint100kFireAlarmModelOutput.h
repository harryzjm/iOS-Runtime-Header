//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kFireAlarmModelOutput : NSObject
{
    MLMultiArray *_Sigmoid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *Sigmoid; // @synthesize Sigmoid=_Sigmoid;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithSigmoid:(id)arg1;

@end

