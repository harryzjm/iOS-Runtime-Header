//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleError:(id)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;

@end

