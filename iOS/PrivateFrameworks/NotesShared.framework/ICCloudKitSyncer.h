//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICCloudKitSyncerDelegate;

@interface ICCloudKitSyncer : NSObject
{
    id <ICCloudKitSyncerDelegate> _delegate;
}

@property(nonatomic) __weak id <ICCloudKitSyncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveUnsyncedObjects;
- (void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
