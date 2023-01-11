//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/TPSURLSessionTaskDelegate-Protocol.h>

@class NSString, TPSURLSessionTask;

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate>
{
    _Bool _cancelled;
    TPSURLSessionTask *_sessionTask;
    CDUnknownBlockType _completionHanlder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHanlder; // @synthesize completionHanlder=_completionHanlder;
@property(retain, nonatomic) TPSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)notifyWithSessionTask:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)resume;
@property(readonly, nonatomic) long long state; // @dynamic state;
- (id)initWithSessionTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
