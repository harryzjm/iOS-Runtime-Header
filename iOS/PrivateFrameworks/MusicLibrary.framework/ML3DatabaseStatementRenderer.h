//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ML3DatabaseStatementRenderer : NSObject
{
}

+ (id)defaultRenderer;
- (id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2;
- (id)insertStatementWithOptions:(id)arg1;
- (id)insertStatementUsingDefaultValuesForTableName:(id)arg1;
- (id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2;
- (id)savepointReleaseStatementWithName:(id)arg1;
- (id)savepointStatementWithName:(id)arg1;
- (id)rollbackTranscationStatementToSavepointName:(id)arg1;
- (id)rollbackTranscationStatement;
- (id)commitTransactionStatement;
- (id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1;

@end
