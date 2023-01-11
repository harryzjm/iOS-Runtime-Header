//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMExtensionStatusPublisherRequestHandling-Protocol.h>

@class NSLock, NSString;
@protocol RMExtensionStatusPublisherRequestHandling;

@interface RMExtensionStatusPublisher : NSObject <RMExtensionStatusPublisherRequestHandling>
{
    NSLock *_requestHandlerLock;
    id <RMExtensionStatusPublisherRequestHandling> _requestHandler;
}

+ (id)sharedPublisher;
@property(readonly, nonatomic) id <RMExtensionStatusPublisherRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
