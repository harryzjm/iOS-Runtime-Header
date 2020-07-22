//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataAggregatorConfiguration : NSObject <NSCopying>
{
    _Bool _hasActiveWorkout;
    _Bool _hasForegroundObserver;
    double _requestedCollectionInterval;
}

@property(nonatomic) double requestedCollectionInterval; // @synthesize requestedCollectionInterval=_requestedCollectionInterval;
@property(nonatomic) _Bool hasForegroundObserver; // @synthesize hasForegroundObserver=_hasForegroundObserver;
@property(nonatomic) _Bool hasActiveWorkout; // @synthesize hasActiveWorkout=_hasActiveWorkout;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

