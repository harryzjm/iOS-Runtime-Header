//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSCHPropertyMutationTuple.h"

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple
{
    int _styleOwnerType;
    unsigned long long _styleOwnerIndex;
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_styleOwnerIndex;
@property(readonly, nonatomic) int type; // @synthesize type=_styleOwnerType;
- (id)styleOwnerRef;
- (id)indirectTuple;
- (id)styleOwner;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2 inChart:(id)arg3 mutations:(id)arg4;

@end

