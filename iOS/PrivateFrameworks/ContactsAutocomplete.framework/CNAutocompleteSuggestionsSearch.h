//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore, NSString;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch>
{
    CNContactStore *_contactStore;
}

+ (unsigned long long)charactersThreshold;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (CDUnknownBlockType)resultTransformWithFactory:(id)arg1 properties:(id)arg2;
- (CDUnknownBlockType)resultTransformWithRequest:(id)arg1;
- (id)convertContacts:(id)arg1 request:(id)arg2;
- (id)suggestedContactsForRequest:(id)arg1 error:(id *)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

