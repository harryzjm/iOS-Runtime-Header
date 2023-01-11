//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSCECalculationEngine, TSCERefNamingContext, TSCEWrappedRangeRef;

@protocol TSCERefNamingProtocol <NSObject>
- (NSString *)nameForWrappedRangeRef:(TSCEWrappedRangeRef *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex *)arg1 inTable:(const UUIDData_5fbc143e *)arg2 useSymbolicNames:(_Bool)arg3;
- (NSString *)cellRangeNameFromChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForBaseRangeRef:(const RefTypeHolder_1140c985 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (id)initWithCalcEngine:(TSCECalculationEngine *)arg1;
@end

