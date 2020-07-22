//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/CSSearchableItem.h>

#import <FileProvider/NSFileProviderItem_Private-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSNumber, NSPersonNameComponents, NSString, NSURL;

@interface CSSearchableItem (FPItem) <NSFileProviderItem_Private>
+ (id)fp_queryFetchAttributes;
@property(readonly) _Bool fp_isContainer;
@property(readonly, copy) NSString *fp_appContainerBundleIdentifier;
- (id)sharingCurrentUserPermissions;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
@property(readonly, nonatomic, getter=isUploading) _Bool uploading;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, nonatomic) unsigned long long capabilities;
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
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;

// Remaining properties
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, copy) NSURL *fileURL;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly) Class superclass;
@end
