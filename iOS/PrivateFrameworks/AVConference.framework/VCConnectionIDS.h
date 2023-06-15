//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS
{
    IDSDataChannelLinkContext *_linkContext;
    unsigned int _datagramChannelToken;
    VCDatagramChannelIDS *_datagramChannel;
    unsigned int _type;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
    int _maxConnectionMTU;
    unsigned int _uplinkBitrateCap;
    unsigned int _downlinkBitrateCap;
    unsigned int _uplinkAudioBitrateCapOneToOne;
    unsigned int _uplinkBitrateCapOneToOne;
    _Bool _isLocalDelegated;
    _Bool _isRemoteDelegated;
    _Bool _isVirtualRelayLink;
    _Bool _isQUICPod;
    NSString *_relayProtocolStackDescription;
    NSString *_channelDataBaseProtocolStackDescription;
}

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;
+ (id)VCConnectionIDS_CDBPS:(id)arg1;
+ (id)VCConnectionIDS_RPS:(id)arg1;
@property(copy) NSString *channelDataBaseProtocolStackDescription; // @synthesize channelDataBaseProtocolStackDescription=_channelDataBaseProtocolStackDescription;
@property(copy) NSString *relayProtocolStackDescription; // @synthesize relayProtocolStackDescription=_relayProtocolStackDescription;
@property _Bool isQUICPod; // @synthesize isQUICPod=_isQUICPod;
@property int maxConnectionMTU; // @synthesize maxConnectionMTU=_maxConnectionMTU;
@property(readonly) _Bool isVirtualRelayLink; // @synthesize isVirtualRelayLink=_isVirtualRelayLink;
@property(readonly) _Bool isRemoteDelegated; // @synthesize isRemoteDelegated=_isRemoteDelegated;
@property(readonly) _Bool isLocalDelegated; // @synthesize isLocalDelegated=_isLocalDelegated;
@property unsigned int uplinkBitrateCapOneToOne; // @synthesize uplinkBitrateCapOneToOne=_uplinkBitrateCapOneToOne;
@property unsigned int uplinkAudioBitrateCapOneToOne; // @synthesize uplinkAudioBitrateCapOneToOne=_uplinkAudioBitrateCapOneToOne;
@property unsigned int downlinkBitrateCap; // @synthesize downlinkBitrateCap=_downlinkBitrateCap;
@property unsigned int uplinkBitrateCap; // @synthesize uplinkBitrateCap=_uplinkBitrateCap;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) VCDatagramChannelIDS *datagramChannel; // @synthesize datagramChannel=_datagramChannel;
@property(readonly) unsigned int datagramChannelToken; // @synthesize datagramChannelToken=_datagramChannelToken;
- (int)cellTechForSoMask:(unsigned int)arg1 fallbackTo:(int)arg2;
- (_Bool)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;
- (_Bool)isOnSameQRSessionWithConnection:(id)arg1;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;
- (void)setCellularMTU:(int)arg1;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) NSUUID *connectionUUID;
@property int connectionMTU;
- (id)connectionQRSessionID;
@property(readonly) _Bool serverIsDegraded;
@property(readonly) _Bool isWifiToWifi;
@property(readonly) NSString *localInterfaceName;
@property(readonly) _Bool isVPN;
@property(readonly) _Bool isRemoteOn5G;
@property(readonly) _Bool isLocalOn5G;
@property(readonly) NSData *sharedDigestKey;
@property(readonly) NSString *relaySessionToken;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;
- (void)setUpVTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

