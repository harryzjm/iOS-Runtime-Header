//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATMessage, CATRemoteTransport;

__attribute__((visibility("hidden")))
@interface _CATRemoteTransportSendMessageOperation
{
    CATRemoteTransport *_transport;
    CATMessage *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CATMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak CATRemoteTransport *transport; // @synthesize transport=_transport;
- (void)didFailWithError:(id)arg1;
- (void)didSendData;
- (void)didEncodeData:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;

@end
