//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSPredicateVisitor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITargetContentIdentifierPredicateValidator : NSObject <NSPredicateVisitor>
{
    NSString *_compileTimeIssues;
}

- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (_Bool)validatePredicate:(id)arg1 compileTimeIssues:(id *)arg2 runTimeIssues:(id *)arg3;

@end
