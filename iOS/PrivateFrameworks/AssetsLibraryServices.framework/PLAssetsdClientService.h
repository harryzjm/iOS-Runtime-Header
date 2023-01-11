//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLAssetsdClientServiceProtocol-Protocol.h>

@class NSString;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol>
{
}

- (void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)assetAvailableForIdentifier:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)downloadFinishedForIdentifier:(id)arg1 success:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(_Bool)arg3 data:(id)arg4 error:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

