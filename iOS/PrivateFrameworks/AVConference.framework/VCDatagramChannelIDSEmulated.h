//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCDatagramChannelIDS, VCEmulatedNetwork;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelIDSEmulated
{
    long long _mode;
    VCDatagramChannelIDS *_idsChannel;
    VCEmulatedNetwork *_network;
    struct tagVCMemoryPool *_datagramMetaDataPool;
    int _packetCount;
    _Bool _isStarted;
}

- (id)destination;
- (unsigned int)token;
- (id)defaultLink;
- (id)connectedLinks;
- (void)osChannelInfoLog;
- (void)readyToRead;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (int)start;
- (void)setupEmulatedNetwork;
- (void)optOutStreamIDs:(id)arg1;
- (void)optInStreamIDs:(id)arg1;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)setWiFiAssist:(_Bool)arg1;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_54fea20c *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)writeToEmulatedNetworkWithDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithIDSDatagramChannel:(id)arg1 mode:(long long)arg2;

@end
