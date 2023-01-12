//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWindowedAccessoryViewControllerDelegate-Protocol.h>

@class NSString, SBWindow, SBWindowedAccessoryViewController;

@interface SBAccessoryController : NSObject <SBWindowedAccessoryViewControllerDelegate>
{
    SBWindow *_window;
    SBWindowedAccessoryViewController *_windowedAccessoryViewController;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) SBWindowedAccessoryViewController *windowedAccessoryViewController; // @synthesize windowedAccessoryViewController=_windowedAccessoryViewController;
@property(readonly, nonatomic) SBWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic, getter=isWindowedAccessoryWindowVisible) _Bool windowedAccessoryWindowVisiblevisible;
- (void)windowedAccessoryViewControllerForceDetachButtonTapped:(id)arg1;
- (void)_showWindowedAccessoryWindow:(_Bool)arg1;
- (void)showWindowedAccessoryWindow:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
