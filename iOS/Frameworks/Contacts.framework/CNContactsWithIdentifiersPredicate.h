//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactsWithIdentifiersPredicate <CNSuggestedContactPredicate>
{
    NSMutableDictionary *_internalIdentifiers;
    NSArray *_identifiers;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)internalIdentifiersForStoreWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (_Bool)cn_supportsNativeSorting;
- (id)contactsFromDonationStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

