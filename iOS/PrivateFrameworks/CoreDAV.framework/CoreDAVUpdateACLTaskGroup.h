//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVACLTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, NSSet, NSString, NSURL;

@interface CoreDAVUpdateACLTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>
{
    int _state;
    NSSet *_aceItems;
    NSURL *_url;
    CoreDAVPropFindTask *_fetchTask;
}

@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSSet *aceItems; // @synthesize aceItems=_aceItems;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)startTaskGroup;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;
- (void)_startGetACL;
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

