//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AudioToolbox/AUPBServing-Protocol.h>
#import <AudioToolbox/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol AUPBRegistrarHosting;

__attribute__((visibility("hidden")))
@interface AUPBServer : NSObject <NSXPCListenerDelegate, AUPBServing>
{
    NSXPCConnection *mRegistrarConnection;
    id <AUPBRegistrarHosting> mProxyInterface;
    NSXPCListener *mListener;
    NSMutableArray *mClientConnections;
    struct unique_ptr<CAMutex, std::__1::default_delete<CAMutex>> mLock;
    struct map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo>>> mAUHandlesToInfo;
    struct map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock>>> mBlockHandlesToMethods;
    unsigned int mAUPBRefCounter;
    struct unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock>> mTestBlock;
    unsigned int mAUHandleCntr;
    int mNotifyToken;
    _Bool mValidToken;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAudioUnit:(unsigned int)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(float)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)getAudioUnit:(unsigned int)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(CDUnknownBlockType)arg5;
- (void)setAudioUnit:(unsigned int)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(id)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)getAudioUnit:(unsigned int)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(CDUnknownBlockType)arg5;
- (void)getAudioUnit:(unsigned int)arg1 propertyInfo:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(CDUnknownBlockType)arg5;
- (void)setProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 value:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)copyProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 intoReply:(CDUnknownBlockType)arg3;
- (struct AUProcessingBlock *)aupbFromRef:(struct OpaqueAUPB *)arg1;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;
- (struct AUProcessingBlock *)aupbFromAUHandle:(unsigned int)arg1;
- (void)blockListChanged;
- (void)processingBlock:(struct OpaqueAUPB *)arg1 properties:(const unsigned int *)arg2 count:(unsigned int)arg3 changedWithQualifierData:(void *)arg4 length:(unsigned int)arg5;
- (void)processingBlockRef:(struct OpaqueAUPB *)arg1 propertyChanged:(unsigned int)arg2;
- (unsigned int)handleFromAUPBRef:(struct OpaqueAUPB *)arg1;
- (int)unregisterAU:(struct OpaqueRemoteAudioUnit *)arg1;
- (int)registerAU:(struct OpaqueRemoteAudioUnit *)arg1 inBlock:(struct OpaqueAUPB *)arg2;
- (int)unregisterBlock:(struct OpaqueAUPB *)arg1;
- (struct OpaqueAUPB *)registerBlock:(const struct AUPBMethods *)arg1 withUserData:(void *)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleRegistrarCrash;
- (void)startRegistrarConnection;
- (void)checkConnectRegistrar;
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

