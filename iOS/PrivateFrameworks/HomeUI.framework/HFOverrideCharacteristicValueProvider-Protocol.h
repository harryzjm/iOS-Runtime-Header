//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFOverrideCharacteristicValueSource, HMCharacteristic;

@protocol HFOverrideCharacteristicValueProvider <NSObject>
- (id)valueSource:(HFOverrideCharacteristicValueSource *)arg1 overrideValueForCharacteristic:(HMCharacteristic *)arg2;
- (_Bool)valueSource:(HFOverrideCharacteristicValueSource *)arg1 shouldOverrideValueForCharacteristic:(HMCharacteristic *)arg2;
@end

