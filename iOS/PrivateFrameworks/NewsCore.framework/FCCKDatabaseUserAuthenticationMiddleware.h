//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>

@class NSString;

@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject <FCCKDatabaseOperationMiddleware>
{
    _Bool _privateDataSyncingEnabled;
}

@property(nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled; // @synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id *)arg3;
- (id)initWithPrivateDataSyncingEnabled:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
