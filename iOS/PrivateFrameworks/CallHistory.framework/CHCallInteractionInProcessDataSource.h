//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHNotifyObserver, NSString;
@protocol CHCallInteractionDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CHCallInteractionInProcessDataSource : NSObject
{
    struct os_unfair_lock_s _accessorLock;
    id <CHCallInteractionDataSourceDelegate> _delegate;
    CHNotifyObserver *_callInteractionObserver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CHNotifyObserver *callInteractionObserver; // @synthesize callInteractionObserver=_callInteractionObserver;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(retain, nonatomic) id <CHCallInteractionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

