//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NRDevice, NSString;

@protocol NRDevicePropertyObserver <NSObject>
- (void)device:(NRDevice *)arg1 propertyDidChange:(NSString *)arg2 fromValue:(id)arg3;
@end

