//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoggingSupport/NSPredicateVisitor-Protocol.h>

@class NSData, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor>
{
    NSMutableDictionary *_filter;
    NSMutableArray *_pidArray;
    NSMutableArray *_processArray;
    NSMutableArray *_subsystemArray;
    NSMutableArray *_categoryArray;
}

- (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processLeftExpression:(id *)arg1 andRightExpression:(id *)arg2;
- (void)addCategory:(id)arg1;
- (void)addSubsystem:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)addProcessID:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithPredicate:(id)arg1;

@end
