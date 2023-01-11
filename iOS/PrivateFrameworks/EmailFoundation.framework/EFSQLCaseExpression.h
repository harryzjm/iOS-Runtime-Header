//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class NSMapTable, NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLCaseExpression : NSObject <EFSQLValueExpressable>
{
    id <EFSQLValueExpressable> _elseExpression;
    id <EFSQLValueExpressable> _baseExpression;
    NSMapTable *_whenExpressions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *whenExpressions; // @synthesize whenExpressions=_whenExpressions;
@property(readonly, nonatomic) id <EFSQLValueExpressable> baseExpression; // @synthesize baseExpression=_baseExpression;
@property(retain, nonatomic) id <EFSQLValueExpressable> elseExpression; // @synthesize elseExpression=_elseExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithBaseExpression:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
