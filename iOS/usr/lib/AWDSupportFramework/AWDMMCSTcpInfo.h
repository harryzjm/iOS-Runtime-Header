//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDMMCSTcpInfo : PBCodable <NSCopying>
{
    unsigned long long _tcpiCellRxbytes;
    unsigned long long _tcpiCellRxpackets;
    unsigned long long _tcpiCellTxbytes;
    unsigned long long _tcpiCellTxpackets;
    unsigned long long _tcpiRxbytes;
    unsigned long long _tcpiRxduplicatebytes;
    unsigned long long _tcpiRxoutoforderbytes;
    unsigned long long _tcpiRxpackets;
    unsigned long long _tcpiSndBw;
    unsigned long long _tcpiTxbytes;
    unsigned long long _tcpiTxpackets;
    unsigned long long _tcpiTxretransmitbytes;
    unsigned long long _tcpiTxunacked;
    unsigned long long _tcpiWifiRxbytes;
    unsigned long long _tcpiWifiRxpackets;
    unsigned long long _tcpiWifiTxbytes;
    unsigned long long _tcpiWifiTxpackets;
    unsigned int _tcpiFlags;
    int _tcpiLastOutif;
    unsigned int _tcpiOptions;
    unsigned int _tcpiRcvMss;
    unsigned int _tcpiRcvNxt;
    unsigned int _tcpiRcvSpace;
    unsigned int _tcpiRcvWscale;
    unsigned int _tcpiRto;
    unsigned int _tcpiRttbest;
    unsigned int _tcpiRttcur;
    unsigned int _tcpiRttvar;
    unsigned int _tcpiSndCwnd;
    unsigned int _tcpiSndMss;
    unsigned int _tcpiSndNxt;
    unsigned int _tcpiSndSbbytes;
    unsigned int _tcpiSndSsthresh;
    unsigned int _tcpiSndWnd;
    unsigned int _tcpiSndWscale;
    unsigned int _tcpiSrtt;
    unsigned int _tcpiState;
    int _tcpiSynrexmits;
    int _tcpiUnused1;
    unsigned int _tcpiUnused2;
    struct {
        unsigned int tcpiCellRxbytes:1;
        unsigned int tcpiCellRxpackets:1;
        unsigned int tcpiCellTxbytes:1;
        unsigned int tcpiCellTxpackets:1;
        unsigned int tcpiRxbytes:1;
        unsigned int tcpiRxduplicatebytes:1;
        unsigned int tcpiRxoutoforderbytes:1;
        unsigned int tcpiRxpackets:1;
        unsigned int tcpiSndBw:1;
        unsigned int tcpiTxbytes:1;
        unsigned int tcpiTxpackets:1;
        unsigned int tcpiTxretransmitbytes:1;
        unsigned int tcpiTxunacked:1;
        unsigned int tcpiWifiRxbytes:1;
        unsigned int tcpiWifiRxpackets:1;
        unsigned int tcpiWifiTxbytes:1;
        unsigned int tcpiWifiTxpackets:1;
        unsigned int tcpiFlags:1;
        unsigned int tcpiLastOutif:1;
        unsigned int tcpiOptions:1;
        unsigned int tcpiRcvMss:1;
        unsigned int tcpiRcvNxt:1;
        unsigned int tcpiRcvSpace:1;
        unsigned int tcpiRcvWscale:1;
        unsigned int tcpiRto:1;
        unsigned int tcpiRttbest:1;
        unsigned int tcpiRttcur:1;
        unsigned int tcpiRttvar:1;
        unsigned int tcpiSndCwnd:1;
        unsigned int tcpiSndMss:1;
        unsigned int tcpiSndNxt:1;
        unsigned int tcpiSndSbbytes:1;
        unsigned int tcpiSndSsthresh:1;
        unsigned int tcpiSndWnd:1;
        unsigned int tcpiSndWscale:1;
        unsigned int tcpiSrtt:1;
        unsigned int tcpiState:1;
        unsigned int tcpiSynrexmits:1;
        unsigned int tcpiUnused1:1;
        unsigned int tcpiUnused2:1;
    } _has;
}

@property(nonatomic) unsigned long long tcpiWifiTxbytes; // @synthesize tcpiWifiTxbytes=_tcpiWifiTxbytes;
@property(nonatomic) unsigned long long tcpiWifiTxpackets; // @synthesize tcpiWifiTxpackets=_tcpiWifiTxpackets;
@property(nonatomic) unsigned long long tcpiWifiRxbytes; // @synthesize tcpiWifiRxbytes=_tcpiWifiRxbytes;
@property(nonatomic) unsigned long long tcpiWifiRxpackets; // @synthesize tcpiWifiRxpackets=_tcpiWifiRxpackets;
@property(nonatomic) unsigned long long tcpiCellTxbytes; // @synthesize tcpiCellTxbytes=_tcpiCellTxbytes;
@property(nonatomic) unsigned long long tcpiCellTxpackets; // @synthesize tcpiCellTxpackets=_tcpiCellTxpackets;
@property(nonatomic) unsigned long long tcpiCellRxbytes; // @synthesize tcpiCellRxbytes=_tcpiCellRxbytes;
@property(nonatomic) unsigned long long tcpiCellRxpackets; // @synthesize tcpiCellRxpackets=_tcpiCellRxpackets;
@property(nonatomic) unsigned int tcpiUnused2; // @synthesize tcpiUnused2=_tcpiUnused2;
@property(nonatomic) int tcpiUnused1; // @synthesize tcpiUnused1=_tcpiUnused1;
@property(nonatomic) int tcpiSynrexmits; // @synthesize tcpiSynrexmits=_tcpiSynrexmits;
@property(nonatomic) unsigned long long tcpiSndBw; // @synthesize tcpiSndBw=_tcpiSndBw;
@property(nonatomic) unsigned long long tcpiRxoutoforderbytes; // @synthesize tcpiRxoutoforderbytes=_tcpiRxoutoforderbytes;
@property(nonatomic) unsigned long long tcpiRxduplicatebytes; // @synthesize tcpiRxduplicatebytes=_tcpiRxduplicatebytes;
@property(nonatomic) unsigned long long tcpiRxbytes; // @synthesize tcpiRxbytes=_tcpiRxbytes;
@property(nonatomic) unsigned long long tcpiRxpackets; // @synthesize tcpiRxpackets=_tcpiRxpackets;
@property(nonatomic) unsigned long long tcpiTxunacked; // @synthesize tcpiTxunacked=_tcpiTxunacked;
@property(nonatomic) unsigned long long tcpiTxretransmitbytes; // @synthesize tcpiTxretransmitbytes=_tcpiTxretransmitbytes;
@property(nonatomic) unsigned long long tcpiTxbytes; // @synthesize tcpiTxbytes=_tcpiTxbytes;
@property(nonatomic) unsigned long long tcpiTxpackets; // @synthesize tcpiTxpackets=_tcpiTxpackets;
@property(nonatomic) unsigned int tcpiSndSbbytes; // @synthesize tcpiSndSbbytes=_tcpiSndSbbytes;
@property(nonatomic) int tcpiLastOutif; // @synthesize tcpiLastOutif=_tcpiLastOutif;
@property(nonatomic) unsigned int tcpiRcvNxt; // @synthesize tcpiRcvNxt=_tcpiRcvNxt;
@property(nonatomic) unsigned int tcpiSndNxt; // @synthesize tcpiSndNxt=_tcpiSndNxt;
@property(nonatomic) unsigned int tcpiSndWnd; // @synthesize tcpiSndWnd=_tcpiSndWnd;
@property(nonatomic) unsigned int tcpiRcvSpace; // @synthesize tcpiRcvSpace=_tcpiRcvSpace;
@property(nonatomic) unsigned int tcpiSndCwnd; // @synthesize tcpiSndCwnd=_tcpiSndCwnd;
@property(nonatomic) unsigned int tcpiSndSsthresh; // @synthesize tcpiSndSsthresh=_tcpiSndSsthresh;
@property(nonatomic) unsigned int tcpiRttbest; // @synthesize tcpiRttbest=_tcpiRttbest;
@property(nonatomic) unsigned int tcpiRttvar; // @synthesize tcpiRttvar=_tcpiRttvar;
@property(nonatomic) unsigned int tcpiSrtt; // @synthesize tcpiSrtt=_tcpiSrtt;
@property(nonatomic) unsigned int tcpiRttcur; // @synthesize tcpiRttcur=_tcpiRttcur;
@property(nonatomic) unsigned int tcpiRcvMss; // @synthesize tcpiRcvMss=_tcpiRcvMss;
@property(nonatomic) unsigned int tcpiSndMss; // @synthesize tcpiSndMss=_tcpiSndMss;
@property(nonatomic) unsigned int tcpiRto; // @synthesize tcpiRto=_tcpiRto;
@property(nonatomic) unsigned int tcpiFlags; // @synthesize tcpiFlags=_tcpiFlags;
@property(nonatomic) unsigned int tcpiRcvWscale; // @synthesize tcpiRcvWscale=_tcpiRcvWscale;
@property(nonatomic) unsigned int tcpiSndWscale; // @synthesize tcpiSndWscale=_tcpiSndWscale;
@property(nonatomic) unsigned int tcpiOptions; // @synthesize tcpiOptions=_tcpiOptions;
@property(nonatomic) unsigned int tcpiState; // @synthesize tcpiState=_tcpiState;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTcpiWifiTxbytes;
@property(nonatomic) _Bool hasTcpiWifiTxpackets;
@property(nonatomic) _Bool hasTcpiWifiRxbytes;
@property(nonatomic) _Bool hasTcpiWifiRxpackets;
@property(nonatomic) _Bool hasTcpiCellTxbytes;
@property(nonatomic) _Bool hasTcpiCellTxpackets;
@property(nonatomic) _Bool hasTcpiCellRxbytes;
@property(nonatomic) _Bool hasTcpiCellRxpackets;
@property(nonatomic) _Bool hasTcpiUnused2;
@property(nonatomic) _Bool hasTcpiUnused1;
@property(nonatomic) _Bool hasTcpiSynrexmits;
@property(nonatomic) _Bool hasTcpiSndBw;
@property(nonatomic) _Bool hasTcpiRxoutoforderbytes;
@property(nonatomic) _Bool hasTcpiRxduplicatebytes;
@property(nonatomic) _Bool hasTcpiRxbytes;
@property(nonatomic) _Bool hasTcpiRxpackets;
@property(nonatomic) _Bool hasTcpiTxunacked;
@property(nonatomic) _Bool hasTcpiTxretransmitbytes;
@property(nonatomic) _Bool hasTcpiTxbytes;
@property(nonatomic) _Bool hasTcpiTxpackets;
@property(nonatomic) _Bool hasTcpiSndSbbytes;
@property(nonatomic) _Bool hasTcpiLastOutif;
@property(nonatomic) _Bool hasTcpiRcvNxt;
@property(nonatomic) _Bool hasTcpiSndNxt;
@property(nonatomic) _Bool hasTcpiSndWnd;
@property(nonatomic) _Bool hasTcpiRcvSpace;
@property(nonatomic) _Bool hasTcpiSndCwnd;
@property(nonatomic) _Bool hasTcpiSndSsthresh;
@property(nonatomic) _Bool hasTcpiRttbest;
@property(nonatomic) _Bool hasTcpiRttvar;
@property(nonatomic) _Bool hasTcpiSrtt;
@property(nonatomic) _Bool hasTcpiRttcur;
@property(nonatomic) _Bool hasTcpiRcvMss;
@property(nonatomic) _Bool hasTcpiSndMss;
@property(nonatomic) _Bool hasTcpiRto;
@property(nonatomic) _Bool hasTcpiFlags;
@property(nonatomic) _Bool hasTcpiRcvWscale;
@property(nonatomic) _Bool hasTcpiSndWscale;
@property(nonatomic) _Bool hasTcpiOptions;
@property(nonatomic) _Bool hasTcpiState;

@end

