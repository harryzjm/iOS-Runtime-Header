//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEFlowMetaData, NSData;
@protocol OS_dispatch_queue;

@interface NEAppProxyFlow : NSObject
{
    NEFlowMetaData *_metaData;
    struct _NEFlow *_flow;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (struct __CFError *)copyVPNFlowErrorFromFlowError:(id)arg1;
+ (id)flowErrorForVPNFlowError:(long long)arg1;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct _NEFlow *flow; // @synthesize flow=_flow;
@property(readonly) NEFlowMetaData *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;
@property(retain) NSData *applicationData;
- (void)closeWriteWithError:(id)arg1;
- (void)closeReadWithError:(id)arg1;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearEventHandlers;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;

@end

