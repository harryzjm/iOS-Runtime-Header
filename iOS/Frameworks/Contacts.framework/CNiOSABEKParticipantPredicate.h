//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantPredicate <CNiOSContactPredicate>
{
    NSString *_name;
    NSURL *_URL;
    NSString *_emailAddress;
    NSString *_customDescription;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsEncodedFetching;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsNativeSorting;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

