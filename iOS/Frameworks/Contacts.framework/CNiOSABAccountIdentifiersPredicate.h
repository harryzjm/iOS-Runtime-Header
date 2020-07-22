//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSAccountPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountIdentifiersPredicate <CNiOSAccountPredicate>
{
    NSArray *_identifiers;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)initWithPredicate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
