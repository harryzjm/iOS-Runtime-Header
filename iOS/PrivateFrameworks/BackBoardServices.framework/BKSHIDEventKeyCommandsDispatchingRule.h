//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventKeyCommandsDispatchingPredicate, NSArray, NSString;

@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>
{
    BKSHIDEventKeyCommandsDispatchingPredicate *_predicate;
    NSArray *_targets;
}

+ (_Bool)supportsSecureCoding;
+ (id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)arg1 toTargets:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(readonly, copy, nonatomic) BKSHIDEventKeyCommandsDispatchingPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithPredicate:(id)arg1 targets:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
