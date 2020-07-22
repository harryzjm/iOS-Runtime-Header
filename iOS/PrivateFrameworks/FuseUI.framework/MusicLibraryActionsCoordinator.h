//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MusicLibraryActionsCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _backgroundTaskIdentifier;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)_postInvalidationNotification;
- (id)libraryActionPendingValuesForIdentifierCollection:(id)arg1;
- (void)addOperations:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

