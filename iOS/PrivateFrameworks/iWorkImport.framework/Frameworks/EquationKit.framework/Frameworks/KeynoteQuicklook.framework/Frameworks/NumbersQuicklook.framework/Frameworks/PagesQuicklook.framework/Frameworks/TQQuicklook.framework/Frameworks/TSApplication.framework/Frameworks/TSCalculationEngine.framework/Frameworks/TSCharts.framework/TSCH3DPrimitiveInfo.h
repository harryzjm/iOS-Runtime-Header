//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DResource;

@interface TSCH3DPrimitiveInfo : NSObject
{
    int _type;
    int _offset;
    unsigned int _count;
    TSCH3DResource *_indices;
}

+ (id)infoWithType:(int)arg1;
+ (id)infoWithType:(int)arg1 offset:(int)arg2 count:(unsigned int)arg3 indices:(id)arg4;
@property(readonly, retain, nonatomic) TSCH3DResource *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasEmptyCount;
@property(readonly, nonatomic) _Bool hasCount;
@property(readonly, nonatomic) _Bool hasOffset;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 offset:(int)arg2 count:(unsigned int)arg3 indices:(id)arg4;

@end
