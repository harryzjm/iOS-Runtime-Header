//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDBackingStoreLogChangesExistFetchOperation
{
    CDUnknownBlockType _fetchBlock;
    long long _maskValue;
    long long _compareValue;
}

- (void).cxx_destruct;
@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(copy, nonatomic) CDUnknownBlockType fetchBlock; // @synthesize fetchBlock=_fetchBlock;
- (id)mainReturningError;
- (id)initWithNeedsPushTo:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;

@end
