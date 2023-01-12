//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderItem-Protocol.h>

@class NSArray, NSData, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL;

@protocol NSFileProviderItem_Private <NSFileProviderItem>

@optional
@property(readonly) _Bool isCollaborationInvitation;
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property(readonly, nonatomic, getter=fp_isAddedByCurrentUser) _Bool fp_addedByCurrentUser;
@property(readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) _Bool fp_lastModifiedByCurrentUser;
@property(readonly, nonatomic, getter=isExcludedFromSync) _Bool excludedFromSync;
@property(readonly, copy) NSString *fileSystemFilename;
@property(getter=isSyncRoot) _Bool syncRoot;
@property(readonly, copy, nonatomic) NSData *quarantineBlob;
@property(readonly, nonatomic, getter=isTopLevelSharedItem) _Bool topLevelSharedItem;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property(readonly, copy) NSString *fp_cloudContainerIdentifier;
@property(readonly) _Bool fp_isCloudDocsContainer;
@property(readonly) _Bool fp_isContainerPristine;
@property(readonly) _Bool fp_isContainer;
@property(readonly, copy) NSArray *conflictingVersions;
@property(readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property(readonly, copy) NSString *fp_parentDomainIdentifier;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly, copy) NSURL *fileURL;
@end

