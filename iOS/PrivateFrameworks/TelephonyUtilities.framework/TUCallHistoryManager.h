//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject
{
    id <TUCallHistoryManagerDataSource> _dataSource;
}

@property(readonly, nonatomic) id <TUCallHistoryManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end
