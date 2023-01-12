//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/NSCopying-Protocol.h>
#import <Portrait/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FloatArray : NSObject <NSCopying, NSMutableCopying>
{
    float *_buffer;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asData;
- (id)initWithData:(id)arg1;
- (id)asArray;
- (id)initWithArray:(id)arg1;
- (id)subtracting:(id)arg1;
- (id)addingConstant:(float)arg1;
- (unsigned long long)argMinimum;
- (float)mean;
- (float)maximumDifferenceWithFloatArray:(id)arg1;
- (_Bool)isEqualToFloatArray:(id)arg1 tolerance:(float)arg2;
- (_Bool)isEqualToFloatArray:(id)arg1;
@property(readonly, nonatomic) const float *floats;
- (float)floatAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFloats:(const float *)arg1 count:(unsigned long long)arg2;
- (id)initWithFloatArray:(id)arg1;
- (id)initWithFloat:(float)arg1 repeatCount:(unsigned long long)arg2;
- (id)initWithZeros:(unsigned long long)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (id)init;

@end
