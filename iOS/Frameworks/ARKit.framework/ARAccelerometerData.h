//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARDictionaryCoding-Protocol.h>
#import <ARKit/ARMetadataWrapperCoding-Protocol.h>
#import <ARKit/ARMutableSensorData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding>
{
    double _timestamp;
    double _temperature;
    CDStruct_31142d93 _acceleration;
}

@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) CDStruct_31142d93 acceleration; // @synthesize acceleration=_acceleration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
