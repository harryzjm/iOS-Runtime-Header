//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AFAssistedDisambiguationRules : NSObject
{
}

+ (id)defaultRules;
@property(readonly, nonatomic) double maxPersistenceAge;
@property(readonly, nonatomic) unsigned long long maxPersistenceDepth;
- (double)weightForEvent:(id)arg1;
@property(readonly, nonatomic) double decisionThreshold;
@property(readonly, nonatomic) double decisionAge;
@property(readonly, nonatomic) unsigned long long decisionDepth;

@end

