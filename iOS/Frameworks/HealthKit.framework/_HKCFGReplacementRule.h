//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKCFGReplacementRule : NSObject
{
    NSString *_description;
    NSArray *_rightHandSide;
    CDUnknownBlockType _nodeEvaluator;
    unsigned long long _lengthIncrease;
}

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lengthIncrease; // @synthesize lengthIncrease=_lengthIncrease;
@property(readonly, copy, nonatomic) CDUnknownBlockType nodeEvaluator; // @synthesize nodeEvaluator=_nodeEvaluator;
@property(copy, nonatomic) NSArray *rightHandSide; // @synthesize rightHandSide=_rightHandSide;
- (id)description;

@end

