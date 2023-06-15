//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Notes/NoteAccountObject.h>

@class NSManagedObject, NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyFolder;

@interface NoteAccountObject (ICLegacyAccount)
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) _Bool hasAnyCustomFolders;
@property(readonly, copy, nonatomic) NSString *localizedAttachmentsNotSupportedReason;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool isLocalAccount;
@property(readonly, nonatomic) _Bool isExchangeAccount;
@property(readonly, nonatomic) _Bool isIMAPAccount;
@property(readonly, nonatomic) _Bool supportsAttachments;
@property(readonly, nonatomic) NSManagedObject<ICLegacyFolder> *defaultFolder;
@property(readonly, nonatomic) NSSet *folders;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) long long legacyAccountType;
@property(readonly, copy, nonatomic) NSString *objectIdentifier;
@property(readonly, copy, nonatomic) NSString *allItemsFolderLocalizedTitle;
@property(readonly, nonatomic) _Bool enabled;
@property(readonly, nonatomic) NSString *localizedName;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accountIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool didChooseToMigrate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) _Bool preventMovingNotesToOtherAccounts;
@property(readonly) Class superclass;
@end

