//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriClientFlow/NSObject-Protocol.h>

@class SABaseCommand;

@protocol CFCommandProcessing <NSObject>
- (void)isDeviceLockedWithPasscodeWithCompletion:(void (^)(_Bool))arg1;
- (void)handleCommand:(SABaseCommand *)arg1 reply:(void (^)(SABaseCommand *))arg2;
- (void)handleOneWayCommand:(SABaseCommand *)arg1;
@end
