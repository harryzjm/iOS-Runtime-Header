//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKClockTimer, NSNumber;

@interface CLKClockTimerToken : NSObject
{
    NSNumber *_id;
    _Bool _wantsCommit;
    _Bool _wantsHighAccuracy;
    _Bool _isActive;
    long long _updateFrequency;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _log;
    CLKClockTimer *_owner;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak CLKClockTimer *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) CDUnknownBlockType log; // @synthesize log=_log;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool wantsHighAccuracy; // @synthesize wantsHighAccuracy=_wantsHighAccuracy;
@property(nonatomic) _Bool wantsCommit; // @synthesize wantsCommit=_wantsCommit;
@property(nonatomic) long long updateFrequency; // @synthesize updateFrequency=_updateFrequency;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithID:(long long)arg1;

@end
