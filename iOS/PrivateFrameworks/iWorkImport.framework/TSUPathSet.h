//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSUPathSet : NSObject <NSCopying>
{
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    TSUPathSet *mUnderlyingSet;
}

+ (void)processPath:(id)arg1 base:(id *)arg2 hasBaseNumber:(_Bool *)arg3 baseNumber:(unsigned int *)arg4 extension:(id *)arg5;
+ (id)parseNumberOutOfBasename:(id)arg1 hasNumber:(_Bool *)arg2 number:(unsigned int *)arg3;
- (void)unionPathSet:(id)arg1;
- (void)setUnderlyingPathSet:(id)arg1;
- (_Bool)isPathUsed:(id)arg1;
- (void)pathIsNoLongerUsed:(id)arg1;
- (void)pathIsUsed:(id)arg1;
- (id)addPath:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2;

@end

