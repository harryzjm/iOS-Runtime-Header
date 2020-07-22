//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKTransientPassAssertionServerProtocol-Protocol.h>

@class NPKTransientPassRequest, NSXPCConnection;
@protocol NPKTransientPassAssertionConnectionDelegate, OS_dispatch_queue;

@interface NPKTransientPassAssertionConnection : NSObject <NPKTransientPassAssertionServerProtocol>
{
    _Bool _backgrounded;
    id <NPKTransientPassAssertionConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NPKTransientPassRequest *_transientPassRequest;
    NSXPCConnection *_connection;
}

@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NPKTransientPassRequest *transientPassRequest; // @synthesize transientPassRequest=_transientPassRequest;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <NPKTransientPassAssertionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setServiceModeRequested:(_Bool)arg1;
- (void)setTransientPassUniqueID:(id)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

@end
