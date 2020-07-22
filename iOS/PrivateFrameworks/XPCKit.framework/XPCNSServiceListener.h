//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XPCKit/XPCServiceListenerDelegate-Protocol.h>

@class NSString, XPCServiceListener;
@protocol XPCNSServiceListenerDelegate;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>
{
    XPCServiceListener *_serviceListener;
    id <XPCNSServiceListenerDelegate> _delegate;
}

@property(readonly, nonatomic) id <XPCNSServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (_Bool)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

