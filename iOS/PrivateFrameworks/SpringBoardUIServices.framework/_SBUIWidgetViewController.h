//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/_SBUIWidgetHost-Protocol.h>

@class NSString;
@protocol _SBUIWidgetHost;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost>
{
    NSString *_widgetIdentifier;
    id <_SBUIWidgetHost> _widgetHost;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_SBUIWidgetHost> widgetHost; // @synthesize widgetHost=_widgetHost;
@property(copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(readonly, nonatomic) struct CGSize preferredViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
