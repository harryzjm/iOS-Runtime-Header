//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface IKDOMMutationRule
{
    _Bool _mutable;
}

+ (id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)mutationRuleWithDOMElement:(id)arg1 mutable:(_Bool)arg2;
@property(readonly, nonatomic, getter=isMutable) _Bool mutable; // @synthesize mutable=_mutable;
- (void)applyOnDOMElement:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithDOMElement:(id)arg1 mutable:(_Bool)arg2;

@end
