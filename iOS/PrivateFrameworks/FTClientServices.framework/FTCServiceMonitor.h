//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTCServiceMonitor : NSObject
{
    long long _availability;
    long long _type;
    int _token;
}

@property(readonly, nonatomic) long long serviceType;
- (long long)serviceAvailability;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(long long)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

