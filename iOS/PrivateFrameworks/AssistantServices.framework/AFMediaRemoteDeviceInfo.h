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
    NSString *_groupIdentifier;
    _Bool _lastFetchSucceeded;
    NSString *_routeIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)currentDevice;
- (void).cxx_destruct;
@property(nonatomic) _Bool lastFetchSucceeded; // @synthesize lastFetchSucceeded=_lastFetchSucceeded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *routeIdentifier; // @synthesize routeIdentifier=_routeIdentifier;
- (void)getGroupIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activeDeviceInfoChanged:(id)arg1;
- (id)init;

@end
