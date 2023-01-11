//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IPAGeometryOperatorSequence
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *map_identifierToOperator;
    NSMutableDictionary *map_identifierToIndex;
    NSMutableArray *_operators;
}

+ (id)sequenceWithIdentifier:(id)arg1;
+ (id)sequence;
- (void).cxx_destruct;
- (id)description;
- (id)subsequenceFrom:(id)arg1 to:(id)arg2;
- (id)transformForGeometry:(id)arg1;
- (_Bool)removeOperatorWithIdentifier:(id)arg1;
- (_Bool)replaceOperatorWithIdentifier:(id)arg1 withOperator:(id)arg2;
- (_Bool)appendOperator:(id)arg1;
- (unsigned long long)count;
- (id)initWithIdentifier:(id)arg1;

@end
