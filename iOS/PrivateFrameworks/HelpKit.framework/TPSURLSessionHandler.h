//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HelpKit/TPSURLSessionDelegate-Protocol.h>
#import <HelpKit/TPSURLSessionManagerDelegate-Protocol.h>

@class NSIndexSet, NSString;

@interface TPSURLSessionHandler : NSObject <TPSURLSessionManagerDelegate, TPSURLSessionDelegate>
{
    _Bool _shouldIgnoreInMemoryCaching;
    NSIndexSet *_excludeCachingDataTypes;
}

+ (id)sharedInstance;
+ (void)setRootViewController:(id)arg1;
@property(retain, nonatomic) NSIndexSet *excludeCachingDataTypes; // @synthesize excludeCachingDataTypes=_excludeCachingDataTypes;
@property(nonatomic) _Bool shouldIgnoreInMemoryCaching; // @synthesize shouldIgnoreInMemoryCaching=_shouldIgnoreInMemoryCaching;
- (void).cxx_destruct;
- (void)sessionTask:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionManagerDidReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (_Bool)respectCachingForRequest:(id)arg1;
- (void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sessionTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (id)processJSONFormattedDataForCDSError:(id)arg1;
- (_Bool)shouldCacheToDiskForSessionTask:(id)arg1;
- (void)sessionTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionManagerRequestCompleted:(id)arg1 sessionTask:(id)arg2;
- (void)URLSessionManagerRequestResumed:(id)arg1 sessionTask:(id)arg2;
- (_Bool)URLSessionManagerShouldCoalesceRequest:(id)arg1;
- (id)URLSessionManagerSessionConfiguration:(id)arg1;
- (id)URLSessionManagerSessionOperationQueue:(id)arg1;
- (id)cacheControllerForDataType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
