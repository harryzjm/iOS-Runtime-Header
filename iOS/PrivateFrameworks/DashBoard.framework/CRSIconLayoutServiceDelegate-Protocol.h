//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class CRSIconLayoutService, NSString;
@protocol CRSIconLayoutVehicleDataProviding;

@protocol CRSIconLayoutServiceDelegate <NSObject>
- (id <CRSIconLayoutVehicleDataProviding>)iconLayoutService:(CRSIconLayoutService *)arg1 dataProviderForVehicleID:(NSString *)arg2;
@end

