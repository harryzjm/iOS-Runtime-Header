//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, RBSXPCCoder, RBSXPCMessageReply;
@protocol OS_xpc_object;

@interface RBSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpc_message;
    RBSXPCCoder *_payload;
    SEL _method;
}

+ (id)messageForXPCMessage:(id)arg1;
+ (id)messageForMethod:(SEL)arg1 varguments:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SEL method; // @synthesize method=_method;
- (id)decodeArgumentCollection:(Class)arg1 withClass:(Class)arg2 atIndex:(unsigned long long)arg3 allowNil:(_Bool)arg4 error:(out id *)arg5;
- (id)decodeArgumentWithClass:(Class)arg1 atIndex:(unsigned long long)arg2 allowNil:(_Bool)arg3 error:(out id *)arg4;
- (id)invokeOnConnection:(id)arg1 withReturnClass:(Class)arg2 error:(out id *)arg3;
- (id)invokeOnConnection:(id)arg1 withReturnCollectionClass:(Class)arg2 entryClass:(Class)arg3 error:(out id *)arg4;
- (oneway void)sendToConnection:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)sendToConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sendToConnection:(id)arg1 error:(out id *)arg2;
- (oneway void)sendToConnection:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) RBSXPCMessageReply *reply;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)init;

@end
