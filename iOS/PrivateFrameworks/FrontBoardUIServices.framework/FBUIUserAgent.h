//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <FrontBoardUIServices/FBUIUserAgentInternal-Protocol.h>

@class NSString;

@interface FBUIUserAgent : NSObject <FBUIUserAgentInternal>
{
    _Bool _systemApp;
}

+ (id)sharedAgent;
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
- (id)processManager;
- (id)sceneManager;
- (id)mainQueue;
- (id)currentProcess;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

