//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSArray, NSData, NSDateComponents, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardWritingAdapter : NSObject
{
    CNContact *_contact;
}

+ (id)descriptorForAllSupportedKeys;
+ (id)adapterWithContact:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *unknownProperties;
@property(readonly) NSData *memojiMetadata;
@property(readonly) NSData *imageHash;
@property(readonly) NSString *imageType;
@property(readonly) NSString *preferredApplePersonaIdentifier;
@property(readonly) NSString *preferredLikenessSource;
@property(readonly) int downtimeWhitelistAuthorization;
@property(readonly) NSString *phonemeData;
@property(readonly) NSString *uid;
@property(readonly) NSString *cardDAVUID;
@property(readonly) NSArray *namesOfParentGroups;
@property(readonly) NSString *note;
@property(readonly) NSArray *relatedNames;
@property(readonly) NSArray *otherDateComponents;
@property(readonly) NSDateComponents *alternateBirthdayComponents;
@property(readonly) NSDateComponents *birthdayComponents;
- (id)largeImageHashOfType:(id)arg1;
@property(readonly) NSData *imageData;
@property(readonly) NSData *largeImageData;
@property(readonly) NSDictionary *largeImageCropRects;
@property(readonly) NSDictionary *imageCropRects;
@property(readonly) NSArray *imageReferences;
- (id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;
- (id)vCardPropertyItemsForProperty:(id)arg1;
@property(readonly) NSDictionary *activityAlerts;
@property(readonly) NSArray *calendarURIs;
@property(readonly) NSArray *urls;
@property(readonly) NSArray *instantMessagingAddresses;
@property(readonly) NSArray *socialProfiles;
@property(readonly) NSArray *postalAddresses;
@property(readonly) NSArray *phoneNumbers;
@property(readonly) NSArray *emailAddresses;
@property(readonly) int nameOrder;
@property(readonly) _Bool isCompany;
@property(readonly) _Bool isMe;
@property(readonly) NSString *jobTitle;
@property(readonly) NSString *department;
@property(readonly) NSString *companyName;
@property(readonly) NSString *phoneticOrganization;
@property(readonly) NSString *organization;
@property(readonly) NSString *pronunciationLastName;
@property(readonly) NSString *pronunciationFirstName;
@property(readonly) NSString *phoneticLastName;
@property(readonly) NSString *phoneticMiddleName;
@property(readonly) NSString *phoneticFirstName;
@property(readonly) NSString *maidenName;
@property(readonly) NSString *nickname;
@property(readonly) NSString *suffix;
@property(readonly) NSString *title;
@property(readonly) NSString *middleName;
@property(readonly) NSString *lastName;
@property(readonly) NSString *firstName;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

