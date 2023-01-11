//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDNWL2Report : PBCodable <NSCopying>
{
    int _cellularBand;
    int _cellularBandInfo;
    int _cellularBandwidth;
    int _cellularBars;
    NSString *_cellularCellType;
    int _cellularLqm;
    int _cellularMcc;
    int _cellularMnc;
    int _cellularPid;
    int _cellularPowerCostDownload;
    int _cellularPowerCostUpload;
    int _cellularRadioTechnology;
    int _cellularTac;
    int _cellularUarfcn;
    int _wifiLqm;
    int _wifiRadioTechnology;
    int _wifiRssi;
    _Bool _cellularKnownGood;
    _Bool _wifiKnownGood;
    struct {
        unsigned int cellularBand:1;
        unsigned int cellularBandInfo:1;
        unsigned int cellularBandwidth:1;
        unsigned int cellularBars:1;
        unsigned int cellularLqm:1;
        unsigned int cellularMcc:1;
        unsigned int cellularMnc:1;
        unsigned int cellularPid:1;
        unsigned int cellularPowerCostDownload:1;
        unsigned int cellularPowerCostUpload:1;
        unsigned int cellularRadioTechnology:1;
        unsigned int cellularTac:1;
        unsigned int cellularUarfcn:1;
        unsigned int wifiLqm:1;
        unsigned int wifiRadioTechnology:1;
        unsigned int wifiRssi:1;
        unsigned int cellularKnownGood:1;
        unsigned int wifiKnownGood:1;
    } _has;
}

@property(nonatomic) int cellularBars; // @synthesize cellularBars=_cellularBars;
@property(nonatomic) int cellularTac; // @synthesize cellularTac=_cellularTac;
@property(nonatomic) int cellularBandwidth; // @synthesize cellularBandwidth=_cellularBandwidth;
@property(retain, nonatomic) NSString *cellularCellType; // @synthesize cellularCellType=_cellularCellType;
@property(nonatomic) int cellularBandInfo; // @synthesize cellularBandInfo=_cellularBandInfo;
@property(nonatomic) int cellularPid; // @synthesize cellularPid=_cellularPid;
@property(nonatomic) int cellularUarfcn; // @synthesize cellularUarfcn=_cellularUarfcn;
@property(nonatomic) int cellularMcc; // @synthesize cellularMcc=_cellularMcc;
@property(nonatomic) int cellularMnc; // @synthesize cellularMnc=_cellularMnc;
@property(nonatomic) _Bool wifiKnownGood; // @synthesize wifiKnownGood=_wifiKnownGood;
@property(nonatomic) int wifiRssi; // @synthesize wifiRssi=_wifiRssi;
@property(nonatomic) int wifiLqm; // @synthesize wifiLqm=_wifiLqm;
@property(nonatomic) _Bool cellularKnownGood; // @synthesize cellularKnownGood=_cellularKnownGood;
@property(nonatomic) int cellularLqm; // @synthesize cellularLqm=_cellularLqm;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsCellularBand:(id)arg1;
- (id)cellularBandAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularBand;
@property(nonatomic) int cellularBand; // @synthesize cellularBand=_cellularBand;
@property(nonatomic) _Bool hasCellularBars;
@property(nonatomic) _Bool hasCellularTac;
@property(nonatomic) _Bool hasCellularBandwidth;
@property(readonly, nonatomic) _Bool hasCellularCellType;
@property(nonatomic) _Bool hasCellularBandInfo;
@property(nonatomic) _Bool hasCellularPid;
@property(nonatomic) _Bool hasCellularUarfcn;
@property(nonatomic) _Bool hasCellularMcc;
@property(nonatomic) _Bool hasCellularMnc;
- (int)StringAsWifiRadioTechnology:(id)arg1;
- (id)wifiRadioTechnologyAsString:(int)arg1;
@property(nonatomic) _Bool hasWifiRadioTechnology;
@property(nonatomic) int wifiRadioTechnology; // @synthesize wifiRadioTechnology=_wifiRadioTechnology;
@property(nonatomic) _Bool hasWifiKnownGood;
@property(nonatomic) _Bool hasWifiRssi;
@property(nonatomic) _Bool hasWifiLqm;
- (int)StringAsCellularRadioTechnology:(id)arg1;
- (id)cellularRadioTechnologyAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularRadioTechnology;
@property(nonatomic) int cellularRadioTechnology; // @synthesize cellularRadioTechnology=_cellularRadioTechnology;
@property(nonatomic) _Bool hasCellularKnownGood;
- (int)StringAsCellularPowerCostUpload:(id)arg1;
- (id)cellularPowerCostUploadAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularPowerCostUpload;
@property(nonatomic) int cellularPowerCostUpload; // @synthesize cellularPowerCostUpload=_cellularPowerCostUpload;
- (int)StringAsCellularPowerCostDownload:(id)arg1;
- (id)cellularPowerCostDownloadAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularPowerCostDownload;
@property(nonatomic) int cellularPowerCostDownload; // @synthesize cellularPowerCostDownload=_cellularPowerCostDownload;
@property(nonatomic) _Bool hasCellularLqm;
- (void)dealloc;

@end
