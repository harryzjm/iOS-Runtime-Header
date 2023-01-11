//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderItem-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@protocol NSFileProviderItem_Private <NSFileProviderItem>

@optional
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) _Bool fp_isContainer;
@property(readonly, copy) NSString *fp_appContainerBundleIdentifier;
@property(readonly, copy) NSArray *tags;
@property(readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
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

