//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDNWAccumulator;

@interface AWDNWDeviceReport : PBCodable <NSCopying>
{
    unsigned int _batteryAbsoluteCapacity;
    AWDNWAccumulator *_batteryAccumulator;
    unsigned int _batteryCurrentCapacity;
    unsigned int _batteryDesignCapacity;
    unsigned int _batteryMaximumCapacity;
    unsigned int _batteryPercentage;
    unsigned int _batteryTimeRemaining;
    unsigned int _batteryVoltage;
    int _cellularMode;
    int _motionState;
    int _thermalPressure;
    _Bool _batteryAtCriticalLevel;
    _Bool _batteryAtWarnLevel;
    _Bool _batteryExternalPowerIsConnected;
    _Bool _batteryFullyCharged;
    _Bool _batteryIsCharging;
    _Bool _devicePluggedIn;
    _Bool _deviceScreenOn;
    struct {
        unsigned int batteryAbsoluteCapacity:1;
        unsigned int batteryCurrentCapacity:1;
        unsigned int batteryDesignCapacity:1;
        unsigned int batteryMaximumCapacity:1;
        unsigned int batteryPercentage:1;
        unsigned int batteryTimeRemaining:1;
        unsigned int batteryVoltage:1;
        unsigned int cellularMode:1;
        unsigned int motionState:1;
        unsigned int thermalPressure:1;
        unsigned int batteryAtCriticalLevel:1;
        unsigned int batteryAtWarnLevel:1;
        unsigned int batteryExternalPowerIsConnected:1;
        unsigned int batteryFullyCharged:1;
        unsigned int batteryIsCharging:1;
        unsigned int devicePluggedIn:1;
        unsigned int deviceScreenOn:1;
    } _has;
}

@property(retain, nonatomic) AWDNWAccumulator *batteryAccumulator; // @synthesize batteryAccumulator=_batteryAccumulator;
@property(nonatomic) _Bool deviceScreenOn; // @synthesize deviceScreenOn=_deviceScreenOn;
@property(nonatomic) _Bool devicePluggedIn; // @synthesize devicePluggedIn=_devicePluggedIn;
@property(nonatomic) _Bool batteryAtCriticalLevel; // @synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel;
@property(nonatomic) _Bool batteryAtWarnLevel; // @synthesize batteryAtWarnLevel=_batteryAtWarnLevel;
@property(nonatomic) _Bool batteryFullyCharged; // @synthesize batteryFullyCharged=_batteryFullyCharged;
@property(nonatomic) _Bool batteryIsCharging; // @synthesize batteryIsCharging=_batteryIsCharging;
@property(nonatomic) _Bool batteryExternalPowerIsConnected; // @synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected;
@property(nonatomic) unsigned int batteryTimeRemaining; // @synthesize batteryTimeRemaining=_batteryTimeRemaining;
@property(nonatomic) unsigned int batteryVoltage; // @synthesize batteryVoltage=_batteryVoltage;
@property(nonatomic) unsigned int batteryAbsoluteCapacity; // @synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity;
@property(nonatomic) unsigned int batteryDesignCapacity; // @synthesize batteryDesignCapacity=_batteryDesignCapacity;
@property(nonatomic) unsigned int batteryMaximumCapacity; // @synthesize batteryMaximumCapacity=_batteryMaximumCapacity;
@property(nonatomic) unsigned int batteryCurrentCapacity; // @synthesize batteryCurrentCapacity=_batteryCurrentCapacity;
@property(nonatomic) unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBatteryAccumulator;
- (int)StringAsCellularMode:(id)arg1;
- (id)cellularModeAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularMode;
@property(nonatomic) int cellularMode; // @synthesize cellularMode=_cellularMode;
- (int)StringAsThermalPressure:(id)arg1;
- (id)thermalPressureAsString:(int)arg1;
@property(nonatomic) _Bool hasThermalPressure;
@property(nonatomic) int thermalPressure; // @synthesize thermalPressure=_thermalPressure;
- (int)StringAsMotionState:(id)arg1;
- (id)motionStateAsString:(int)arg1;
@property(nonatomic) _Bool hasMotionState;
@property(nonatomic) int motionState; // @synthesize motionState=_motionState;
@property(nonatomic) _Bool hasDeviceScreenOn;
@property(nonatomic) _Bool hasDevicePluggedIn;
@property(nonatomic) _Bool hasBatteryAtCriticalLevel;
@property(nonatomic) _Bool hasBatteryAtWarnLevel;
@property(nonatomic) _Bool hasBatteryFullyCharged;
@property(nonatomic) _Bool hasBatteryIsCharging;
@property(nonatomic) _Bool hasBatteryExternalPowerIsConnected;
@property(nonatomic) _Bool hasBatteryTimeRemaining;
@property(nonatomic) _Bool hasBatteryVoltage;
@property(nonatomic) _Bool hasBatteryAbsoluteCapacity;
@property(nonatomic) _Bool hasBatteryDesignCapacity;
@property(nonatomic) _Bool hasBatteryMaximumCapacity;
@property(nonatomic) _Bool hasBatteryCurrentCapacity;
@property(nonatomic) _Bool hasBatteryPercentage;
- (void)dealloc;

@end
