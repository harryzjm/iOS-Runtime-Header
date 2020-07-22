//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLMomentListCluster : NSObject
{
    unsigned long long _month;
    unsigned long long _year;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfAssets;
    NSMutableSet *__moments;
}

@property(readonly, nonatomic) NSMutableSet *_moments; // @synthesize _moments=__moments;
@property(readonly, nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(readonly, nonatomic) unsigned long long year; // @synthesize year=_year;
@property(readonly, nonatomic) unsigned long long month; // @synthesize month=_month;
- (unsigned long long)peak;
- (void)removeMoment:(id)arg1;
- (void)addMoment:(id)arg1;
- (void)dealloc;
- (id)initWithMonth:(unsigned long long)arg1 year:(unsigned long long)arg2;
- (id)init;

@end

