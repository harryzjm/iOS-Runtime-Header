//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject
{
    id _target;
    IDSXPCConnection *_connection;
    double _timeout;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (_Bool)_invocationHasBlock:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(CDUnknownBlockType)arg4;

@end
