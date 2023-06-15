//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFMessageTransport, HMFTimer, HMReportContext, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDXPCCachedResponseEntry : NSObject
{
    HMReportContext *_reportContext;
    NSMutableArray *_messages;
    HMFMessageTransport *_transport;
    HMFTimer *_reportTimer;
    HMFTimer *_retrievalTimer;
}

- (void).cxx_destruct;
@property(retain) HMFTimer *retrievalTimer; // @synthesize retrievalTimer=_retrievalTimer;
@property(retain) HMFTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property __weak HMFMessageTransport *transport; // @synthesize transport=_transport;
@property(readonly) NSMutableArray *messages; // @synthesize messages=_messages;
@property(readonly, copy) HMReportContext *reportContext; // @synthesize reportContext=_reportContext;
- (id)initWithReportContext:(id)arg1 transport:(id)arg2;

@end

