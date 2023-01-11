//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSDataChannelLinkContext, IDSDatagramChannel, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelIDS
{
    unsigned int _token;
    IDSDatagramChannel *_idsChannel;
    NSString *_destination;
    int _driverSocket;
    CDUnknownBlockType _eventHandler;
}

@property(readonly) unsigned int token; // @synthesize token=_token;
@property(readonly) NSString *destination; // @synthesize destination=_destination;
- (int)setupDriverSocket;
@property(readonly) NSArray *connectedLinks;
@property(readonly) IDSDataChannelLinkContext *defaultLink;
- (void)invalidate;
- (int)start;
- (void)optOutStreamIDs:(id)arg1;
- (void)optInStreamIDs:(id)arg1;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)setWiFiAssist:(_Bool)arg1;
- (void)setChannelPreferences:(id)arg1;
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_54fea20c *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)osChannelInfoLog;
- (void)readyToRead;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSocketDescriptor:(int)arg1 token:(unsigned int)arg2 error:(id *)arg3;
- (id)datagramChannelWithDestination:(id)arg1 error:(id *)arg2;
- (id)initWithDestination:(id)arg1 token:(unsigned int)arg2 error:(id *)arg3;
- (id)sharedIDSService;

@end
