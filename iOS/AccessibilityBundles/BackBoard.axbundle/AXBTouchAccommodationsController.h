//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import "AXUIClientDelegate-Protocol.h"

@class AXUIClient, NSString;
@protocol OS_dispatch_queue;

@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate>
{
    _Bool _areTouchAccommodationsInEffect;
    NSObject<OS_dispatch_queue> *_touchAccommodationsQueue;
    AXUIClient *_touchAccommodationsClient;
}

+ (void)hideHoldDurationTripleClickHelp;
+ (void)showHoldDurationTripleClickHelp;
+ (void)initializeMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) AXUIClient *touchAccommodationsClient; // @synthesize touchAccommodationsClient=_touchAccommodationsClient;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (id)_clientIdentifier;
- (void)_hideHoldDurationTripleClickHelp;
- (void)_showHoldDurationTripleClickHelp;
- (void)_updateTouchAccommodationsSetting;
- (void)_registerForTouchAccommodationsAXSettingsUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
