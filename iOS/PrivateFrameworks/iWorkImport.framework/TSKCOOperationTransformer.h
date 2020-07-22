//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSPObject;
@protocol TSKCOIntermediateOperationEnumerator;

__attribute__((visibility("hidden")))
@interface TSKCOOperationTransformer : NSObject <NSCopying>
{
    NSObject<TSKCOIntermediateOperationEnumerator> *mEnumerator;
    _Bool mIsHigherPriority;
    TSPObject *mDelegate;
}

@property(readonly, nonatomic) NSObject<TSKCOIntermediateOperationEnumerator> *enumerator; // @synthesize enumerator=mEnumerator;
@property(nonatomic) TSPObject *delegate; // @synthesize delegate=mDelegate;
- (void)saveToArchiver:(id)arg1 message:(struct OperationTransformer *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct OperationTransformer *)arg2;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperations;
- (void)appendOperation:(id)arg1;
- (id)transformOperations:(id)arg1;
- (id)transformUpdateRangeOperation:(id)arg1;
- (id)transformReplaceRangeOperation:(id)arg1;
- (id)transformUpdateIdOperation:(id)arg1;
- (id)transformIdPlacementBaseOperation:(id)arg1;
- (void)dealloc;
- (id)initWithOperationEnumerator:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperationEnumerator:(id)arg1 isHigherPriority:(_Bool)arg2;

@end
