//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class CLLocation, NSBundle, NSObject, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

@protocol MNTimeballLocationProvider <NSObject>
@property(nonatomic) __weak id <CLLocationManagerDelegate> delegate;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(nonatomic) double desiredAccuracy;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (id)initWithEffectiveBundleIdentifier:(NSString *)arg1 delegate:(id <CLLocationManagerDelegate>)arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (id)initWithEffectiveBundle:(NSBundle *)arg1 delegate:(id <CLLocationManagerDelegate>)arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end
