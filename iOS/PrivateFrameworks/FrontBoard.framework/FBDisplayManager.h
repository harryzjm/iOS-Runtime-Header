//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSDisplayMonitor.h>

#import <FrontBoard/FBSDisplayMonitorDelegate-Protocol.h>

@class FBSDisplayConfiguration, NSString;
@protocol FBDisplayManagerDelegate;

@interface FBDisplayManager : FBSDisplayMonitor <FBSDisplayMonitorDelegate>
{
    _Bool _mainConnected;
    id <FBDisplayManagerDelegate> _displayManagerDelegate;
}

+ (id)mainDisplay;
+ (id)mainConfiguration;
+ (id)mainIdentity;
+ (id)sharedInstance;
@property(nonatomic) __weak id <FBDisplayManagerDelegate> displayManagerDelegate; // @synthesize displayManagerDelegate=_displayManagerDelegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;
- (_Bool)displayMonitor:(id)arg1 shouldConnectDisplay:(id)arg2;
- (void)postMainDisplayConnection;
- (void)dealloc;
- (id)_init;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

