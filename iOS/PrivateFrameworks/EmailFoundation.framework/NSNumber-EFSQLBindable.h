//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@class EFSQLBinding, NSString;

@interface NSNumber (EFSQLBindable)
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

