//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDColorReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDBorder : NSObject
{
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}

+ (id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 resources:(id)arg2;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)color;
- (void)setDiagonalType:(int)arg1;
- (int)diagonalType;
- (void)setType:(int)arg1;
- (int)type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBorder:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)colorReference;

@end

