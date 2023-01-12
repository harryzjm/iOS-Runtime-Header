//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome, HMMediaGroupsController, NSString;
@protocol _COHomeKitMediaGroupsListenerDelegate;

__attribute__((visibility("hidden")))
@interface _COHomeKitMediaGroupsListener : NSObject
{
    HMHome *_home;
    HMMediaGroupsController *_controller;
    id <_COHomeKitMediaGroupsListenerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_COHomeKitMediaGroupsListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMMediaGroupsController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)mediaGroupsController:(id)arg1 didRemoveGroup:(id)arg2;
- (void)mediaGroupsController:(id)arg1 didReceiveGroup:(id)arg2;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

