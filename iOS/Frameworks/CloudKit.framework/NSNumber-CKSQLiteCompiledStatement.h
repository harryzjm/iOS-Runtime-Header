//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;
- (double)cksqlcs_doubleBindingValue:(id *)arg1;
- (long long)cksqlcs_int64BindingValue:(id *)arg1;
- (id)CKRoundedToMaximumDecimalPlaces:(unsigned long long)arg1;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

