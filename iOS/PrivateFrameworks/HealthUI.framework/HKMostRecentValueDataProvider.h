//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HKDataProviderValue;

@interface HKMostRecentValueDataProvider
{
}

- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentValue;

// Remaining properties
@property(readonly, nonatomic) id <HKDataProviderValue> value; // @dynamic value;

@end
