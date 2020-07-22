//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CRRecentContactsLibrary, NSString;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch>
{
    CRRecentContactsLibrary *_library;
}

@property(retain, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)autocompleteResultsForRecentContacts:(id)arg1 request:(id)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoreRecentContactsLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

