//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSObject, NSString, NSXPCConnection;
@protocol BADownloaderExtension, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BADownloaderExtensionConnection : NSExtensionContext
{
    NSObject<OS_dispatch_queue> *_extensionWorkQueue;
    id <BADownloaderExtension> _principalObject;
    NSXPCConnection *_daemonConnection;
}

- (void).cxx_destruct;
@property(retain) id <BADownloaderExtension> principalObject; // @synthesize principalObject=_principalObject;
- (CDUnknownBlockType)acquireWakeAssertion;
- (void)backgroundDownload:(id)arg1 finishedWithSandboxToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)backgroundDownload:(id)arg1 failedWithError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extensionWillTerminate;
- (void)receivedAuthenticationChallenge:(id)arg1 download:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadsForRequest:(long long)arg1 manifestURL:(id)arg2 manifestToken:(id)arg3 extensionInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)wakeupForTokenWithReply:(CDUnknownBlockType)arg1;
- (_Bool)shouldAcceptXPCConnection:(id)arg1;
- (id)initWithPrincipalObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

