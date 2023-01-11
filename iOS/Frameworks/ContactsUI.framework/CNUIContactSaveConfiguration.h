//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, CNContainer, CNGroup, CNMutableContact, CNPolicy, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNUIContactSaveConfiguration : NSObject
{
    _Bool _ignoresParentalRestrictions;
    _Bool _saveWasAuthorized;
    CNContact *_contact;
    CNMutableContact *_mutableContact;
    CNMutableContact *_shadowCopyOfReadonlyContact;
    NSMutableArray *_editingLinkedContacts;
    CNContactStore *_contactStore;
    CNGroup *_parentGroup;
    CNContainer *_parentContainer;
    CNPolicy *_policy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool saveWasAuthorized; // @synthesize saveWasAuthorized=_saveWasAuthorized;
@property(readonly, nonatomic) _Bool ignoresParentalRestrictions; // @synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions;
@property(readonly, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) CNContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(readonly, nonatomic) CNGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) NSMutableArray *editingLinkedContacts; // @synthesize editingLinkedContacts=_editingLinkedContacts;
@property(readonly, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact; // @synthesize shadowCopyOfReadonlyContact=_shadowCopyOfReadonlyContact;
@property(readonly, nonatomic) CNMutableContact *mutableContact; // @synthesize mutableContact=_mutableContact;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)initWithContact:(id)arg1 mutableContact:(id)arg2 shadowCopyOfReadonlyContact:(id)arg3 editingLinkedContacts:(id)arg4 contactStore:(id)arg5 parentGroup:(id)arg6 parentContainer:(id)arg7 policy:(id)arg8 ignoresParentalRestrictions:(_Bool)arg9 saveWasAuthorized:(_Bool)arg10;

@end
