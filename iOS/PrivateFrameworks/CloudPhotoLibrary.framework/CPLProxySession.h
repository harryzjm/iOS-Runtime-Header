//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLChangeSessionImplementation-Protocol.h>

@class NSString;

@interface CPLProxySession <CPLChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dispatchBlockWhenLibraryIsOpen:(CDUnknownBlockType)arg1;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)proxyLibraryManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
