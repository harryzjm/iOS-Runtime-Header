//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HDDataFaker;

@interface HDDemoManager : NSObject
{
    _HDDataFaker *_faker;
}

- (void).cxx_destruct;
- (_Bool)isProvidingData;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopFakingData;
- (void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;

@end
