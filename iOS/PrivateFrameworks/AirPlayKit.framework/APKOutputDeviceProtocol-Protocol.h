//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AirPlayKit/NSObject-Protocol.h>

@class NSString;

@protocol APKOutputDeviceProtocol <NSObject>
- (void)openCommunicationChannelToDestination:(NSString *)arg1 completionHandler:(void (^)(id <APKOutputDeviceCommunicationChannel>, NSError *))arg2;
- (_Bool)supportsCommunicationChannelToDestination:(NSString *)arg1;
@property(nonatomic, readonly) NSString *deviceID;
@property(nonatomic, readonly) NSString *deviceName;
@end

