//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSPersistentHistoryResult
{
    id _aggregatedResult;
    long long _resultType;
}

@property(readonly) long long resultType; // @synthesize resultType=_resultType;
@property(readonly) id result; // @synthesize result=_aggregatedResult;
- (void)dealloc;
- (id)description;
- (id)initWithSubresults:(id)arg1;
- (id)initWithResultType:(long long)arg1 andResult:(id)arg2;

@end
