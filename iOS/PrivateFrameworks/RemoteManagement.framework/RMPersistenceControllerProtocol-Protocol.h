//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/NSObject-Protocol.h>

@class NSManagedObjectContext;

@protocol RMPersistenceControllerProtocol <NSObject>
- (NSManagedObjectContext *)newBackgroundContext;
- (NSManagedObjectContext *)viewContext;
- (void)performBackgroundTaskAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performBackgroundTask:(void (^)(NSManagedObjectContext *))arg1;
@end
