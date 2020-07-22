//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;
@protocol WKConnectionDelegate;

@interface WKConnection : NSObject <WKObject>
{
    struct WeakObjCPtr<id<WKConnectionDelegate>> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
- (struct WebConnection *)_connection;
- (void)sendMessageWithName:(id)arg1 body:(id)arg2;
@property id <WKConnectionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

