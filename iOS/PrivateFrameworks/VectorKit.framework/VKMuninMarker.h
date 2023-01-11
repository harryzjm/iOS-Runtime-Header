//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface VKMuninMarker : NSObject
{
    optional_ff574c75 _collectionPoint;
    CDStruct_071ac149 _coordinate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_071ac149 coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) unsigned int buildId;
@property(readonly, nonatomic) unsigned long long pointId;
@property(readonly, nonatomic) _Bool canMoveToMarker;
@property(readonly, nonatomic) NSDate *collectionDate;
@property(readonly, nonatomic) const struct CollectionPoint *collectionPoint;
- (id)initWithCoordinate:(CDStruct_071ac149)arg1;
- (id)initWithCollectionPoint:(const struct CollectionPoint *)arg1;

@end
