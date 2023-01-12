//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _NSMemoryStorePredicateRemapper : NSObject
{
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

