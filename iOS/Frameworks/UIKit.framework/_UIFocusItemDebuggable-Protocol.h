//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@protocol _UIDebugIssueReporting;

@protocol _UIFocusItemDebuggable <NSObject>

@optional
- (void)_diagnoseFocusInteractionEligibilityForReport:(id <_UIDebugIssueReporting>)arg1;
- (_Bool)_shouldAlwaysDiagnoseFocusInteractionEligibility;
- (void)_diagnoseFocusabilityForReport:(id <_UIDebugIssueReporting>)arg1;
@end
