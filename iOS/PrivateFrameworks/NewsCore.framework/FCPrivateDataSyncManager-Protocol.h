//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate;
@protocol FCPrivateDataContextInternal;

@protocol FCPrivateDataSyncManager <NSObject>
@property(readonly, nonatomic) NSDate *lastCleanDate;
- (void)fetchChangesWithContext:(id <FCPrivateDataContextInternal>)arg1 qualityOfService:(long long)arg2 completionHandler:(void (^)(NSArray *, NSArray *, _Bool, void (^)(void), NSError *))arg3;
- (_Bool)isAwaitingFirstSync;
- (void)notifyObservers;
- (void)markAsDirty;
- (_Bool)isDirty;
@end

