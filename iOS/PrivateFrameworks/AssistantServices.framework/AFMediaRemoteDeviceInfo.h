//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface AFMediaRemoteDeviceInfo : NSObject
{
    NSString *_routeIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)currentDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *routeIdentifier; // @synthesize routeIdentifier=_routeIdentifier;
- (void).cxx_destruct;
- (id)init;

@end
