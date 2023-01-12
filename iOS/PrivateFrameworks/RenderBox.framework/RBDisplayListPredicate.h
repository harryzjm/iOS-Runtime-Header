//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RenderBox/NSCopying-Protocol.h>

@interface RBDisplayListPredicate : NSObject <NSCopying>
{
    struct Invertible _predicate;
}

+ (id)predicate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)filteringDisplayList:(id)arg1;
@property(nonatomic) _Bool invertsResult;
- (void)addPredicate:(id)arg1;
- (void)addConditionWithFillColor:(CDStruct_0b1c536a)arg1 colorSpace:(int)arg2;
- (void)addCondition:(int)arg1;
- (void)removeAll;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
