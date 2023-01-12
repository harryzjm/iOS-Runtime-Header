//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSString, UTType;

__attribute__((visibility("hidden")))
@interface FPNSFileProviderItemHelper : NSObject
{
    NSString *itemIdentifier;
    NSString *parentItemIdentifier;
    NSString *filename;
    NSString *typeIdentifier;
    UTType *contentType;
    unsigned long long capabilities;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities;
@property(readonly, copy, nonatomic) UTType *contentType; // @synthesize contentType;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier; // @synthesize parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier;
- (id)fp_sharingCurrentUserPermissions;
- (id)fp_sharingCurrentUserRole;
- (_Bool)fp_isWritable;
- (_Bool)fp_isReadable;
- (id)fp_downloadingStatus;

// Remaining properties
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, nonatomic) long long contentPolicy;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, nonatomic) NSDictionary *extendedAttributes;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
@property(readonly, nonatomic) unsigned long long fileSystemFlags;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, nonatomic) struct NSFileProviderTypeAndCreator typeAndCreator;
@property(readonly, nonatomic, getter=isUploaded) _Bool uploaded;
@property(readonly, nonatomic, getter=isUploading) _Bool uploading;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSData *versionIdentifier;

@end

