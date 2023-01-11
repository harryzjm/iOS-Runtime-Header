//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _DKSyncHistory : NSObject
{
    NSDate *_lastSyncDate;
    unsigned long long _lastDaySyncCount;
}

@property(readonly, nonatomic) unsigned long long lastDaySyncCount; // @synthesize lastDaySyncCount=_lastDaySyncCount;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2;

@end
