//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/UMUserSwitchStakeholder-Protocol.h>

@class NSString;
@protocol PLCloudUserSessionHandling;

@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder>
{
    id <PLCloudUserSessionHandling> _sessionHandler;
}

- (void).cxx_destruct;
@property(retain) id <PLCloudUserSessionHandling> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
- (void)willSwitchUser;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
