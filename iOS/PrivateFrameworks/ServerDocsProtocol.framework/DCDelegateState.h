//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DCCachedItem, NSData;
@protocol DCDocumentManagerDelegate, OS_dispatch_queue;

@interface DCDelegateState : NSObject
{
    id <DCDocumentManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    DCCachedItem *_item;
    NSData *_watchedVersionIdentifier;
}

+ (id)delegateStateWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3;
@property(retain) NSData *watchedVersionIdentifier; // @synthesize watchedVersionIdentifier=_watchedVersionIdentifier;
@property(readonly) DCCachedItem *item; // @synthesize item=_item;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) __weak id <DCDocumentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3;

@end
