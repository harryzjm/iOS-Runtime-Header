//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMCharacteristic, NSSet;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property(readonly, copy, nonatomic) NSSet *affectedCharacteristics;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
- (id)overrideValueForCharacteristic:(HMCharacteristic *)arg1;
@end

