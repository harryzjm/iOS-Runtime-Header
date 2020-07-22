//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFService *_sfService;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)invalidate;
- (void)activate;
- (id)description;
- (id)init;

@end
