//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentCamera/DCAccessibilityExtras-Protocol.h>
#import <DocumentCamera/DCAnalyticsReporterAccessibilityDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface DCAccessibility : NSObject <DCAccessibilityExtras, DCAnalyticsReporterAccessibilityDelegate>
{
}

+ (id)sharedInstance;
- (_Bool)shouldPerformLoggingForSwitchControl;
- (_Bool)shouldPerformLoggingForVoiceOver;
- (_Bool)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;

@end

