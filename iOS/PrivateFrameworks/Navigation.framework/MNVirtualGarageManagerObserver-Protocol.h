//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNVirtualGarageManager, VGVehicle;

@protocol MNVirtualGarageManagerObserver <NSObject>
- (void)virtualGarageManager:(MNVirtualGarageManager *)arg1 didUpdateSelectedVehicle:(VGVehicle *)arg2;
@end

