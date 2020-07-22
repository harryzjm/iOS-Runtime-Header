//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNEmailAddressContactPredicate <CNSuggestedContactPredicate>
{
    _Bool _returnsMultipleResults;
    NSString *_emailAddress;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(_Bool)arg2;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

