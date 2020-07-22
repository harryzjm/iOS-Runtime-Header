//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NWEndpoint;

@interface NEAppProxyUDPFlow
{
    NWEndpoint *_localEndpoint;
}

@property(readonly) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
- (id)description;
- (void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;

@end
