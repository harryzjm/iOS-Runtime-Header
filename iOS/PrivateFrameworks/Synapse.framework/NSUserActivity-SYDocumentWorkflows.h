//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSUserActivity.h>

@class NSData, NSDictionary, NSString, NSURL;
@protocol SYDocumentProviding;

@interface NSUserActivity (SYDocumentWorkflows)
+ (id)_syReturnToSenderActivityWithOriginalUserActivity:(id)arg1;
+ (void)_syFetchCurrentUserActivityWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) NSUserActivity *_syOriginalUserActivity;
@property(readonly) _Bool _syShouldCreateNewMessage;
@property(readonly) id <SYDocumentProviding> _syDocumentProvider;
@property(copy) NSString *_syRelatedUniqueIdentifier;
- (void)loadDocumentWithHandler:(CDUnknownBlockType)arg1;
- (void)set_syOriginalUserActivity:(id)arg1;
- (void)set_syShouldCreateNewMessage:(_Bool)arg1;
- (_Bool)_syIsShowBacklinkIndicatorUserActivity;
- (_Bool)_syIsBacklinkUserActivity;
- (id)_syLoggableDescription;
- (id)_syUserInfoLinkIdentifiers;
- (id)_syUserInfoDomainIdentifiers;
@property(retain) NSData *_linkContextPreviewMetadata;
@property(copy) NSDictionary *linkContextInfo;
@property(copy) NSDictionary *_linkContextInfo;
@property(copy) NSURL *canonicalURL;
@property(copy) NSURL *_canonicalURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

