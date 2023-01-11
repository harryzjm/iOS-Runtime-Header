//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSCalculationEngine/NSCopying-Protocol.h>

@class NSMutableDictionary, TSCECalculationEngine;

@interface TSCETablesByName : NSObject <NSCopying>
{
    NSMutableDictionary *_tablesByTableNameByContainerName;
    TSCECalculationEngine *_calcEngine;
}

+ (id)tableNameForTable:(id)arg1;
+ (id)containerNameForTable:(id)arg1;
- (void).cxx_destruct;
- (_Bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)anyTableForTableName:(id)arg1;
- (id)description;
- (id)tableForTableName:(id)arg1 containerName:(id)arg2;
- (void)renameTable:(id)arg1 fromName:(id)arg2;
- (void)dropTable:(id)arg1;
- (void)dropTable:(id)arg1 withTableName:(id)arg2 withContainerName:(id)arg3;
- (void)addTable:(id)arg1;
- (void)removeAllObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalcEngine:(id)arg1;

@end
