//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COMeshRequest, NSString;

__attribute__((visibility("hidden")))
@interface COMeshControllerQueuedBroadcastRequestMarker : NSObject
{
    _Bool _includeSelfInBroadcast;
    COMeshRequest *_request;
    CDUnknownBlockType _recipientCallback;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool includeSelfInBroadcast; // @synthesize includeSelfInBroadcast=_includeSelfInBroadcast;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType recipientCallback; // @synthesize recipientCallback=_recipientCallback;
@property(readonly, copy, nonatomic) COMeshRequest *request; // @synthesize request=_request;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invokeCallbackWithError:(id)arg1;
- (id)destination;
- (id)command;
- (id)initWithRequest:(id)arg1 includeSelf:(_Bool)arg2 recipientBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

