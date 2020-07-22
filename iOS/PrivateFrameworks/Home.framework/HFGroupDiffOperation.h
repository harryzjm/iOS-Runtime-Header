//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFDiffOperation-Protocol.h>

@class NSNumber, NSString;
@protocol HFDiffableItemGroup;

@interface HFGroupDiffOperation : NSObject <HFDiffOperation>
{
    unsigned long long _type;
    id <HFDiffableItemGroup> _group;
    NSNumber *_fromIndex;
    NSNumber *_toIndex;
}

+ (id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
+ (id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, copy, nonatomic) NSNumber *fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, nonatomic) id <HFDiffableItemGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
