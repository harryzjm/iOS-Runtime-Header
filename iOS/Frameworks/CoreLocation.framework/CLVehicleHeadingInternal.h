//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLVehicleHeadingInternal : NSObject
{
    struct {
        double trueHeading;
        double timestamp;
    } fHeading;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end

