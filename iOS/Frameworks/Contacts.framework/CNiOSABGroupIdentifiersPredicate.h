//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupIdentifiersPredicate : CNPredicate
{
    NSArray *_identifiers;
}

+ (id)descriptionOfIdentifiers:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

