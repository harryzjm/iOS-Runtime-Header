//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSDictionary, NSSet, NSString, UIImage;

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSString *_sectionIdentifier;
    NSString *_subSectionIdentifier;
    NSString *_displayName;
    NSDictionary *_settings;
    NSSet *_subSectionSettings;
    _Bool _userConfigurable;
    UIImage *_settingsIcon;
    _Bool _showsCustomSettingsLink;
    _Bool _isDeliveredQuietly;
    _Bool _hasProvisialAuthorization;
    _Bool _isAppClip;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAppClip; // @synthesize isAppClip=_isAppClip;
@property(readonly, nonatomic) _Bool hasProvisionalAuthorization; // @synthesize hasProvisionalAuthorization=_hasProvisialAuthorization;
@property(readonly, nonatomic) _Bool isDeliveredQuietly; // @synthesize isDeliveredQuietly=_isDeliveredQuietly;
@property(readonly, nonatomic) _Bool showsCustomSettingsLink; // @synthesize showsCustomSettingsLink=_showsCustomSettingsLink;
@property(readonly, nonatomic) UIImage *settingsIcon; // @synthesize settingsIcon=_settingsIcon;
@property(readonly, nonatomic, getter=isUserConfigurable) _Bool userConfigurable; // @synthesize userConfigurable=_userConfigurable;
@property(readonly, copy, nonatomic) NSSet *subSectionSettings; // @synthesize subSectionSettings=_subSectionSettings;
@property(readonly, copy, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *subSectionIdentifier; // @synthesize subSectionIdentifier=_subSectionIdentifier;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNotificationSectionSettings:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end
