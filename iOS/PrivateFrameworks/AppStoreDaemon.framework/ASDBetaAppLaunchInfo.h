//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class ASDBetaAppDisplayNames, ASDBetaAppVersion, NSDate, NSDictionary, NSString;

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding>
{
    _Bool _feedbackEnabled;
    _Bool _launchScreenEnabled;
    _Bool _sharedFeedback;
    NSString *_artistName;
    ASDBetaAppDisplayNames *_displayNames;
    NSDate *_expirationDate;
    NSString *_iconURLTemplate;
    NSDate *_lastWelcomeScreenViewDate;
    NSDictionary *_localizedTestNotes;
    NSString *_testerEmail;
    ASDBetaAppVersion *_version;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) ASDBetaAppVersion *version; // @synthesize version=_version;
@property(copy) NSString *testerEmail; // @synthesize testerEmail=_testerEmail;
@property(getter=hasSharedFeedback) _Bool sharedFeedback; // @synthesize sharedFeedback=_sharedFeedback;
@property(copy) NSDictionary *localizedTestNotes; // @synthesize localizedTestNotes=_localizedTestNotes;
@property(getter=isLaunchScreenEnabled) _Bool launchScreenEnabled; // @synthesize launchScreenEnabled=_launchScreenEnabled;
@property(copy) NSDate *lastWelcomeScreenViewDate; // @synthesize lastWelcomeScreenViewDate=_lastWelcomeScreenViewDate;
@property(copy) NSString *iconURLTemplate; // @synthesize iconURLTemplate=_iconURLTemplate;
@property(getter=isFeedbackEnabled) _Bool feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) ASDBetaAppDisplayNames *displayNames; // @synthesize displayNames=_displayNames;
@property(copy) NSString *artistName; // @synthesize artistName=_artistName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
