//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSHTTPServerRequestHandlerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSRunLoop;
@protocol OS_dispatch_queue;

@interface SSHTTPServer : NSObject <SSHTTPServerRequestHandlerDelegate>
{
    NSMutableDictionary *_definedResponses;
    NSMutableArray *_incomingRequests;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct __CFSocket *_socket;
    NSRunLoop *_runLoop;
    _Bool _allowsSecure;
    _Bool _verbose;
    short _port;
    int _downloadSpeed;
    int _state;
    long long _responsesDelivered;
}

+ (_Bool)_isPortOccupied:(short)arg1;
+ (id)sharedServer;
- (void).cxx_destruct;
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(nonatomic) int downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(readonly, nonatomic) _Bool allowsSecure; // @synthesize allowsSecure=_allowsSecure;
- (id)_ipAddress;
- (void)requestDidFinish:(id)arg1;
- (void)_handleConnectWithType:(unsigned long long)arg1 handle:(int)arg2;
- (void)stop;
- (_Bool)start;
- (void)setResponseForPath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)serverLocalhostURL;
- (id)serverURL;
- (CDUnknownBlockType)responseBlockForPath:(id)arg1;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) short port; // @synthesize port=_port;
@property(readonly, nonatomic) long long responsesDelivered; // @synthesize responsesDelivered=_responsesDelivered;
- (void)dealloc;
- (id)init;

@end
