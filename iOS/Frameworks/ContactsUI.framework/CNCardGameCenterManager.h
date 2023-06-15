//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNUICoreRecentsManager, GKServiceProxy;
@protocol CNCancelable, CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNCardGameCenterManager : NSObject
{
    _Bool _hasCheckedAuthenticatedLocalPlayer;
    CNContact *_contact;
    CNUICoreRecentsManager *_recentsManager;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNScheduler> _workQueue;
    id <CNCancelable> _relationshipResultsCancelable;
    GKServiceProxy *_gameCenterProxy;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCheckedAuthenticatedLocalPlayer; // @synthesize hasCheckedAuthenticatedLocalPlayer=_hasCheckedAuthenticatedLocalPlayer;
@property(retain, nonatomic) GKServiceProxy *gameCenterProxy; // @synthesize gameCenterProxy=_gameCenterProxy;
@property(retain, nonatomic) id <CNCancelable> relationshipResultsCancelable; // @synthesize relationshipResultsCancelable=_relationshipResultsCancelable;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)handlesForContact:(id)arg1;
- (id)defaultFriendResultFromFriendResults:(id)arg1 forContact:(id)arg2;
- (void)handleResults:(id)arg1 forContact:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)refreshGameCenterRelationshipsForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getGameCenterRelationshipsForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldActionDisplayDropdownMenu;
- (id)handles;
- (id)init;

@end

