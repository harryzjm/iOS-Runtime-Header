//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPChangeShuffleModeCommandEvent
{
    _Bool _preservesShuffleMode;
    long long _shuffleType;
}

@property(readonly, nonatomic) _Bool preservesShuffleMode; // @synthesize preservesShuffleMode=_preservesShuffleMode;
@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
