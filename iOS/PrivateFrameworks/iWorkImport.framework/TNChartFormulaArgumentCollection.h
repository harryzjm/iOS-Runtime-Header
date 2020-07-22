//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSFastEnumeration-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying>
{
    NSArray *mArray;
    _Bool mStoreBadRef;
}

+ (id)argumentCollectionFromFormula:(struct TSCEFormula *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 usingCalcEngine:(id)arg3 storeBadRef:(_Bool)arg4;
+ (id)argumentCollectionFromFormula:(struct TSCEFormula *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 usingCalcEngine:(id)arg3;
@property(nonatomic) _Bool storeBadRef; // @synthesize storeBadRef=mStoreBadRef;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastElement;
- (id)firstElement;
- (id)reverseElementEnumerator;
- (id)elementEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)wrappedChartFormulaWithID:(CDStruct_ed6d627d)arg1 andLocale:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithFormula:(struct TSCEFormula *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 usingCalcEngine:(id)arg3;
- (id)initWithFormula:(struct TSCEFormula *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 usingCalcEngine:(id)arg3 storeBadRef:(_Bool)arg4;
- (id)initWithArray:(id)arg1;

@end

