//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableSet;

@interface NSLayoutConstraintExplainer : NSObject
{
    NSLayoutConstraint *_constraint;
    NSMutableSet *_requiredConstraints;
    NSMutableSet *_frozenConstraints;
    NSMutableSet *_relaxedConstraints;
    NSMapTable *_satisfactionChanges;
    NSMapTable *_priorities;
    NSArray *_mutuallyExclusiveConstraints;
}

@property(retain) NSArray *mutuallyExclusiveConstraints; // @synthesize mutuallyExclusiveConstraints=_mutuallyExclusiveConstraints;
@property(retain) NSMapTable *priorities; // @synthesize priorities=_priorities;
@property(retain) NSMapTable *satisfactionChanges; // @synthesize satisfactionChanges=_satisfactionChanges;
- (id)thawConstraint:(id)arg1;
- (id)freezeConstraint:(id)arg1;
- (id)relaxConstraint:(id)arg1;
- (id)requireConstraint:(id)arg1;
- (id)description;
- (unsigned long long)_satisfactionChangeCount:(CDUnknownBlockType)arg1 withResults:(id *)arg2;
- (void)recalculateExplanation;
- (void)_freezeErrorVariable:(id)arg1 forcingZeroValue:(_Bool)arg2 inEngine:(id)arg3 accumulatingConstraints:(id)arg4 andMutuallyExclusiveConstraints:(id *)arg5;
- (void)dealloc;
- (id)initWithConstraint:(id)arg1;

@end
