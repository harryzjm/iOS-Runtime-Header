//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDDataSyncStateEvent
{
    unsigned long long _dataSyncState;
}

+ (id)dataSyncStateEstablished:(unsigned long long)arg1;
+ (id)uuid;
@property(nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (id)initWithDataSyncState:(unsigned long long)arg1;

@end
