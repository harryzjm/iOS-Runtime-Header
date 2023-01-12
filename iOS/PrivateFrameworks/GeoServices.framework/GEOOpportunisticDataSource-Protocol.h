//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSObject;
@protocol GEOOpportunisticDataSourceDelegate, OS_dispatch_queue;

@protocol GEOOpportunisticDataSource <NSObject>
+ (unsigned long long)policy;
@property(readonly, nonatomic) unsigned long long bytesDownloaded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(nonatomic) __weak id <GEOOpportunisticDataSourceDelegate> delegate;
- (void)cancel;
- (void)pause;
- (void)resume;
@end

