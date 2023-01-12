//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface CKVSQLCommandCriterion : NSObject <NSCopying>
{
    NSString *_columnName;
    NSString *_comparingColumnName;
    NSArray *_columnValues;
    long long _sqlOperator;
    NSArray *_subCriteria;
}

+ (id)criterionWithANDSubCriteria:(id)arg1;
+ (id)criterionWithColumnName:(id)arg1 INColumnValues:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 LIKEWildcardPattern:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 MATCHSearchPhrase:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 LESSTHANColumnValue:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 EQUALSColumnValue:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subCriteria; // @synthesize subCriteria=_subCriteria;
@property(readonly, nonatomic) long long sqlOperator; // @synthesize sqlOperator=_sqlOperator;
@property(readonly, nonatomic) NSArray *columnValues; // @synthesize columnValues=_columnValues;
@property(readonly, nonatomic) NSString *comparingColumnName; // @synthesize comparingColumnName=_comparingColumnName;
@property(readonly, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;
- (id)initWithSubCriteria:(id)arg1 sqlOperator:(long long)arg2;
- (id)initWithColumnName:(id)arg1 columnValue:(id)arg2 sqlOperator:(long long)arg3;
- (id)initWithColumnName:(id)arg1 columnValues:(id)arg2 sqlOperator:(long long)arg3;

@end
