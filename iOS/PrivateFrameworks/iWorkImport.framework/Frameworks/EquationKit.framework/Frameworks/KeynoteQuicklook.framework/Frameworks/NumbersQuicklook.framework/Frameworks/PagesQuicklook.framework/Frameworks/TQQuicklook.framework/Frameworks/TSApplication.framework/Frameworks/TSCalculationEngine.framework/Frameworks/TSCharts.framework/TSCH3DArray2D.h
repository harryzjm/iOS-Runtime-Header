//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSCH3DArray2D : NSObject
{
    tvec2_3b141483 mSize;
    NSMutableArray *mElements;
}

+ (id)array2D;
+ (id)array2DWithSize:(const tvec2_3b141483 *)arg1;
- (id).cxx_construct;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id)firstObject;
- (id)objectAtIndex:(const tvec2_3b141483 *)arg1;
- (void)setObject:(id)arg1 atIndex:(const tvec2_3b141483 *)arg2;
- (_Bool)hasObjectAtIndex:(const tvec2_3b141483 *)arg1;
- (void)resize:(const tvec2_3b141483 *)arg1;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 *)arg1;

@end
