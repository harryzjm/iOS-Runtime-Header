//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MADAutoAssetTimed : NSObject
{
    _Bool _timerInvalidated;
    id _requestBeingTimed;
    long long _timeoutSecs;
    NSString *_timerUUID;
    NSTimer *_timerInstance;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool timerInvalidated; // @synthesize timerInvalidated=_timerInvalidated;
@property(retain, nonatomic) NSTimer *timerInstance; // @synthesize timerInstance=_timerInstance;
@property(readonly, retain, nonatomic) NSString *timerUUID; // @synthesize timerUUID=_timerUUID;
@property(readonly, nonatomic) long long timeoutSecs; // @synthesize timeoutSecs=_timeoutSecs;
@property(readonly, retain, nonatomic) id requestBeingTimed; // @synthesize requestBeingTimed=_requestBeingTimed;
- (id)summary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForRequest:(id)arg1 withTimeout:(long long)arg2;

@end

