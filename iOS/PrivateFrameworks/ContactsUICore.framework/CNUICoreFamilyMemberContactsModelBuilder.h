//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUICoreContactTypeAssessor, NSArray;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject
{
    _Bool _includeWhitelistedContactsOnly;
    _Bool _sortItemsByName;
    _Bool _markItemsAsPersisted;
    _Bool _markItemsAsProposed;
    NSArray *_contacts;
    CNUICoreContactTypeAssessor *_contactTypeAssessor;
    long long _contactFormatterStyle;
}

+ (id)itemsBySortingItems:(id)arg1;
+ (id)uniqueFamilyMemberContactItems:(id)arg1;
+ (id)firstDisplayablePhoneNumberForContact:(id)arg1;
+ (id)firstDisplayableEmailAddressForContact:(id)arg1;
+ (id)placeholderNameForNamelessContact:(id)arg1;
+ (id)formattedNameOfContact:(id)arg1 contactFormatterStyle:(long long)arg2;
+ (id)familyMemberContactItemFromContact:(id)arg1 contactFormatterStyle:(long long)arg2 contactTypeAssessor:(id)arg3 itemHasBeenPersisted:(_Bool)arg4 itemIsProposed:(_Bool)arg5;
+ (_Bool)shouldIncludeContact:(id)arg1 givenIncludeWhitelistedContactsOnlySetting:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool markItemsAsProposed; // @synthesize markItemsAsProposed=_markItemsAsProposed;
@property(nonatomic) _Bool markItemsAsPersisted; // @synthesize markItemsAsPersisted=_markItemsAsPersisted;
@property(nonatomic) _Bool sortItemsByName; // @synthesize sortItemsByName=_sortItemsByName;
@property(nonatomic) _Bool includeWhitelistedContactsOnly; // @synthesize includeWhitelistedContactsOnly=_includeWhitelistedContactsOnly;
@property(nonatomic) long long contactFormatterStyle; // @synthesize contactFormatterStyle=_contactFormatterStyle;
@property(retain, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor; // @synthesize contactTypeAssessor=_contactTypeAssessor;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)sortedFamilyMemberContactItems:(id)arg1;
- (id)build;
- (id)init;

@end
