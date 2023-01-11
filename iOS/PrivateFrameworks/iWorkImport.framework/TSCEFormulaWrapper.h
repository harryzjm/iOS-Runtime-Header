//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSCEFormulaReturning-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCEFormulaWrapper : NSObject <NSCopying, TSCEFormulaReturning>
{
    struct TSCEFormula _formula;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct TSCEFormula *formula;
- (id)initWithFormula:(const struct TSCEFormula *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
