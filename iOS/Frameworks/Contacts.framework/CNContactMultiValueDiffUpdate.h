//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNMultiValueDiff, CNMultiValuePropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate
{
    CNMultiValuePropertyDescription *_property;
    CNMultiValueDiff *_diff;
}

@property(readonly) CNMultiValueDiff *diff; // @synthesize diff=_diff;
@property(readonly) CNMultiValuePropertyDescription *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)description;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)initWithProperty:(id)arg1 diff:(id)arg2;
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 error:(id *)arg3;

@end

