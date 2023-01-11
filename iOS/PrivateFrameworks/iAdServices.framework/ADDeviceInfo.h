//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iAdServices/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface ADDeviceInfo : NSObject <NSSecureCoding>
{
    _Bool _batteryDischarging;
    _Bool _carKitConnected;
    int _orientation;
    int _interfaceIdiom;
    NSString *_deviceModel;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_buildVersion;
    NSNumber *_screenWidth;
    NSNumber *_screenHeight;
    NSArray *_keyboards;
    NSNumber *_scale;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool carKitConnected; // @synthesize carKitConnected=_carKitConnected;
@property(nonatomic) int interfaceIdiom; // @synthesize interfaceIdiom=_interfaceIdiom;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool batteryDischarging; // @synthesize batteryDischarging=_batteryDischarging;
@property(copy, nonatomic) NSArray *keyboards; // @synthesize keyboards=_keyboards;
@property(retain, nonatomic) NSNumber *screenHeight; // @synthesize screenHeight=_screenHeight;
@property(retain, nonatomic) NSNumber *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

