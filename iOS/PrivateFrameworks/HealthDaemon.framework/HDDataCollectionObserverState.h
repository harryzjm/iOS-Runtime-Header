//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataCollectionObserverState : NSObject <NSCopying>
{
    _Bool _isInBackground;
    _Bool _hasRunningWorkout;
}

+ (id)dataCollectionObserverStateInBackground:(_Bool)arg1 hasRunningWorkout:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasRunningWorkout; // @synthesize hasRunningWorkout=_hasRunningWorkout;
@property(readonly, nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

