//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation
{
    _Bool _longTimeout;
}

@property(nonatomic) _Bool longTimeout; // @synthesize longTimeout=_longTimeout;
- (_Bool)startNewMatchAttemptWithError:(id *)arg1;

// Remaining properties
@property(nonatomic) __weak id <BKMatchPearlOperationDelegate> delegate; // @dynamic delegate;

@end
