//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStore.h>

@interface CNContactStore (PhotoLibraryAdditions)
- (id)contactsMatchingPhoneNumber:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (id)_allContactIDsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;
- (id)allContactIDsMatchingEmailAddress:(id)arg1 orPhoneNumber:(id)arg2;
- (id)allContactIDsMatchingEmailAddress:(id)arg1;
@end

