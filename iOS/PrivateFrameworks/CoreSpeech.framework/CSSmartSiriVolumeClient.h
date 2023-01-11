//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSSmartSiriVolumeServiceDelegate-Protocol.h>

@class NSXPCConnection;
@protocol CSSmartSiriVolumeClientDelegate, OS_dispatch_queue;

@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate>
{
    id <CSSmartSiriVolumeClientDelegate> _delegate;
    NSXPCConnection *_ssvConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *ssvConnection; // @synthesize ssvConnection=_ssvConnection;
@property(nonatomic) __weak id <CSSmartSiriVolumeClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_createClientConnection;
- (id)_getRemoteServiceProxyObject;
- (void)didTTSVolumeChangeForReason:(unsigned long long)arg1;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;

@end
