//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation
{
    RBSProcessPredicate *_predicate;
}

+ (id)limitationWithPredicate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) RBSProcessPredicate *predicate; // @synthesize predicate=_predicate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)description;
- (id)_initWithPredicate:(id)arg1;

@end
