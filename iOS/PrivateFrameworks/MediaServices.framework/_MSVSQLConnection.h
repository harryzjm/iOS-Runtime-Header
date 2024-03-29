//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MSVSQLConnection : NSObject
{
    struct sqlite3 *_connectionHandle;
    unsigned long long _options;
    NSMutableDictionary *_attachedDatabases;
    NSMutableArray *_scalarFunctions;
    NSMutableArray *_aggregateFunctions;
    _Bool _invalid;
    NSString *_databaseURI;
}

- (void).cxx_destruct;
- (id)_cloneWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (void)_registerAggregateFunctionDescriptor:(id)arg1;
- (void)registerAggregateFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 start:(CDUnknownBlockType)arg4 add:(CDUnknownBlockType)arg5 remove:(CDUnknownBlockType)arg6 value:(CDUnknownBlockType)arg7;
- (void)unregisterFunctionNamed:(id)arg1 arguments:(long long)arg2;
- (void)_registerScalarFunctionDescriptor:(id)arg1;
- (void)registerFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)executeStatementString:(id)arg1 error:(id *)arg2;
- (id)resultsForStatement:(id)arg1;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;
- (id)statementWithString:(id)arg1 error:(id *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

