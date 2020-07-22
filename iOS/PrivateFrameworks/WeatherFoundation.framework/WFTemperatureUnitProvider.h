//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFTemperatureUnitProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_providerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
- (void).cxx_destruct;
- (void)_postDidChangeUnitDefaultsPreference;
- (int)_providerQueue_changeUnit:(int)arg1;
- (int)_providerQueue_readUnit;
- (void)replaceUnit:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceUnit:(int)arg1;
@property(readonly) int userTemperatureUnit;
- (void)fetchTemperatureUnitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
