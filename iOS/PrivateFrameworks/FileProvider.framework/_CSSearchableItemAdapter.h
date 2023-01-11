//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderItem_Private-Protocol.h>

@class CSSearchableItem, CSSearchableItemAttributeSet, NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL, UTType;
@protocol NSFileProviderItemFlags;

__attribute__((visibility("hidden")))
@interface _CSSearchableItemAdapter : NSObject <NSFileProviderItem_Private>
{
    CSSearchableItem *_item;
}

+ (id)fp_queryFetchAttributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) CSSearchableItem *item; // @synthesize item=_item;
@property(readonly, copy) NSString *fp_cloudContainerIdentifier;
@property(readonly) _Bool fp_isContainerPristine;
@property(readonly) _Bool fp_isContainer;
- (id)fp_appContainerBundleIdentifier;
- (id)sharingCurrentUserPermissions;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
- (_Bool)isDataless;
- (_Bool)isRecursivelyDownloaded;
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
- (id)formerIdentifier;
@property(readonly, copy) NSString *fp_parentDomainIdentifier;
- (_Bool)isInPinnedFolder;
- (_Bool)isPinned;
@property(readonly, nonatomic, getter=isTopLevelSharedItem) _Bool topLevelSharedItem;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, nonatomic, getter=isUploading) _Bool uploading;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, nonatomic, getter=fp_isAddedByCurrentUser) _Bool fp_addedByCurrentUser;
@property(readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) _Bool fp_lastModifiedByCurrentUser;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, copy, nonatomic) NSData *tagData;
- (id)tags;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
- (id)containerSubitemCount;
- (id)sharingCurrentUserRole;
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, nonatomic, getter=isUploaded) _Bool uploaded;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) UTType *contentType;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
- (id)initWithSearchableItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, nonatomic, getter=isExcludedFromSync) _Bool excludedFromSync;
@property(readonly, nonatomic) NSDictionary *extendedAttributes;
@property(readonly, copy) NSString *fileSystemFilename;
@property(readonly, copy) NSURL *fileURL;
@property(readonly, nonatomic) id <NSFileProviderItemFlags> flags;
@property(readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly) Class superclass;

@end
