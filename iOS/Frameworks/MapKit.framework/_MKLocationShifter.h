//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject
{
    GEOLocationShifter *_locationShifter;
}

+ (_Bool)isLocationShiftRequiredForLocation:(id)arg1;
- (void).cxx_destruct;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 withShiftRequestBlock:(CDUnknownBlockType)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isLocationShiftEnabled) _Bool locationShiftEnabled;
- (id)init;

@end
