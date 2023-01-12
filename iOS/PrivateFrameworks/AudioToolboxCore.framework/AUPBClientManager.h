//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol AUPBRegistrarHosting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUPBClientManager : NSObject
{
    NSXPCConnection *mRegistrarConnection;
    id <AUPBRegistrarHosting> mProxyInterface;
    NSMutableArray *mRemoteServers;
    struct vector<PropertyListener, std::allocator<PropertyListener>> mPropertyListeners;
    struct vector<NewServerListener, std::allocator<NewServerListener>> mNewServerListeners;
    unsigned int mServerRefCounter;
    NSObject<OS_dispatch_queue> *mTouchServersQueue;
    int mNotifyToken;
    _Bool mValidToken;
    _Bool mConnectionAcknowledged;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)setSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 toData:(id)arg6;
- (int)getSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id *)arg6;
- (int)setAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;
- (int)getAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float *)arg6;
- (int)setAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void *)arg6 size:(unsigned int)arg7;
- (int)getAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void **)arg6 withSize:(unsigned int *)arg7;
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int *)arg6 writeable:(char *)arg7;
- (int)setPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 value:(void *)arg4;
- (int)copyPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 intoValue:(const void **)arg4;
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer *)arg1;
- (int)removePropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;
- (int)addPropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;
- (int)removeServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;
- (int)addNewServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;
- (id)serverFromRef:(struct OpaqueAUPBServer *)arg1;
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;
- (struct OpaqueAUPB *)aupbRefFromHandle:(unsigned int)arg1;
- (void)newServerAdded:(id)arg1;
- (void)handleRegistrarCrash;
- (void)startRegistarConnection;
- (id)init;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

