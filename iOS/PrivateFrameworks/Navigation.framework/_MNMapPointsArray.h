//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointsArray : NSObject
{
    unsigned long long _count;
    CDStruct_c3b9c2ee *_mapPoints;
}

@property(readonly, nonatomic) CDStruct_c3b9c2ee *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
@property(readonly, nonatomic) void *points;

@end

