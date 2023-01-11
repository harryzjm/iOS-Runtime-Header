//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface ATXActionCriteriaWorldState : NSObject
{
    _Bool _fake;
    NSDate *_now;
    struct {
        unsigned int doNotDisturb:1;
        unsigned int telephonyCapability:1;
        unsigned int airDropCapability:1;
        unsigned int airplaneMode:1;
        unsigned int coreRoutineCapability:1;
        unsigned int greenTeaDeviceCapability:1;
        unsigned int internalBuild:1;
        unsigned int lockScreen:1;
    } _flags;
    struct {
        unsigned int now:1;
        unsigned int doNotDisturb:1;
        unsigned int telephonyCapability:1;
        unsigned int airDropCapability:1;
        unsigned int airplaneMode:1;
        unsigned int coreRoutineCapability:1;
        unsigned int greenTeaDeviceCapability:1;
        unsigned int internalBuild:1;
        unsigned int lockScreen:1;
    } _have;
}

- (void).cxx_destruct;
- (id)propertyWhitelist;
@property(nonatomic) _Bool lockScreen;
@property(nonatomic) _Bool internalBuild;
@property(nonatomic) _Bool greenTeaDeviceCapability;
@property(nonatomic) _Bool coreRoutineCapability;
@property(nonatomic) _Bool airplaneMode;
@property(nonatomic) _Bool airDropCapability;
@property(nonatomic) _Bool telephonyCapability;
@property(nonatomic) _Bool doNotDisturb;
@property(copy, nonatomic) NSDate *now;
- (id)initFake;
- (id)init;

@end

