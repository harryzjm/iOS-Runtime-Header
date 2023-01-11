//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/_WKDownloadDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate>
{
    NSMapTable *_activeDownloadMap;
    NSMapTable *_pendingDownloadMap;
}

+ (id)sharedDownloadDispatcher;
- (void).cxx_destruct;
- (void)_downloadDidCancel:(id)arg1;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_downloadDidFinish:(id)arg1;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidStart:(id)arg1;
- (id)startDownloadFromWebView:(id)arg1 type:(long long)arg2 userInitiatedAction:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
