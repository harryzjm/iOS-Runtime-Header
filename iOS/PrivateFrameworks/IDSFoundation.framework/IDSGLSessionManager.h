//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol IDSGLSessionManagerDelegate;

@interface IDSGLSessionManager : NSObject
{
    id <IDSGLSessionManagerDelegate> _delegate;
    CDUnknownBlockType _sendBlock;
    CDUnknownBlockType _recvBlock;
    NSString *_sessionID;
    _Bool _isServer;
    int _zudpFd;
    int _connFd;
    int _streamFd;
    NSMutableArray *_serverDataBufferArray;
}

- (void).cxx_destruct;
- (void)recvZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)_sendServerBufferedData;
- (void)setServerStreamFd:(int)arg1 isServer:(_Bool)arg2;
- (_Bool)startReliableSession:(_Bool)arg1;
- (_Bool)_startReliableClient;
- (_Bool)_startReliableServer;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sendBlock:(CDUnknownBlockType)arg2 recvBlock:(CDUnknownBlockType)arg3 sessionID:(id)arg4;

@end

