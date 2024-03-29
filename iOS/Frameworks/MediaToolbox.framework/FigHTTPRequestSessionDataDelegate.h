//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FigHTTPRequestSessionDataDelegate : NSObject
{
    NSMutableDictionary *_taskToFigHTTPRequest;
    struct OpaqueFigReentrantMutex *_taskToFigHTTPRequestMutex;
    unsigned char _doesIgnoreDidReceiveResponseDisposition;
}

- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct FigRetainProxy *)_copyAndLockRequestForTask:(id)arg1;
- (void)restoreVoucher:(id)arg1;
- (id)adoptVoucherFromRetainProxy:(struct FigRetainProxy *)arg1;
- (void)_deregisterFigHTTPRequestForDataTask:(id)arg1;
- (void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest *)arg1 forDataTask:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithResponseDispositionOption:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

