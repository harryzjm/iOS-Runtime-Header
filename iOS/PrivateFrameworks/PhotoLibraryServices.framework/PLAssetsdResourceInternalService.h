//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdResourceInternalServiceProtocol-Protocol.h>

@class NSString;

@interface PLAssetsdResourceInternalService <PLAssetsdResourceInternalServiceProtocol>
{
    NSString *_trustedCallerBundleID;
}

- (void).cxx_destruct;
- (void)purgeExpiredOutboundSharingAssetsWithReply:(CDUnknownBlockType)arg1;
- (void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)batchSaveAssetJobs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
