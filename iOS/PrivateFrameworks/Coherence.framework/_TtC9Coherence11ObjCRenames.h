//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9Coherence11ObjCRenames : NSObject
{
    MISSING_TYPE *renames;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (void)addMappingWithReplica:(id)arg1 fromRange:(struct _NSRange)arg2;
- (void)addMappingWithReplica:(id)arg1 from:(long long)arg2;
- (id)renamedWithRange:(struct _NSRange)arg1 replica:(id)arg2;
- (id)renamed:(long long)arg1 replica:(id)arg2;
- (id)renamedWithReplica:(id)arg1;
- (id)init;
@property(nonatomic, readonly) _Bool hasLocalRenames;
@property(nonatomic, readonly) long long count;
@property(nonatomic, readonly) long long generation;

@end
