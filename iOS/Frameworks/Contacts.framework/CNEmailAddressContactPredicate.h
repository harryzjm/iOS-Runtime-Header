//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNEmailAddressContactPredicate : CNPredicate
{
    _Bool _returnsMultipleResults;
    NSArray *_emailAddresses;
    NSArray *_groupIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)cn_hasHighSpecificity;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)shortDebugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 returnMultipleResults:(_Bool)arg3;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(_Bool)arg2;
- (id)contactsFromCLSDataStore:(id)arg1;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

