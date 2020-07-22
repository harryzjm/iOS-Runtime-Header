//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol LoopbackSocketTunnelDelegate;

__attribute__((visibility("hidden")))
@interface LoopbackSocketTunnel : NSObject
{
    unsigned short _port;
    int sockFD;
    struct sockaddr_in sa;
    struct sockaddr_in vtpSA;
    NSObject *optionalArg;
    NSObject<LoopbackSocketTunnelDelegate> *_delegate;
    _Bool foundVTPIP;
}

@property NSObject *optionalArg; // @synthesize optionalArg;
- (int)serverLoopProc;
- (void)shutdownSocket;
- (void)setVTPIP:(struct tagIPPORT *)arg1;
- (void)getVTPIPPort:(struct tagIPPORT *)arg1;
- (void)getIPPort:(struct tagIPPORT *)arg1;
- (int)sendPacketToVTP:(id)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 error:(id *)arg3;

@end

