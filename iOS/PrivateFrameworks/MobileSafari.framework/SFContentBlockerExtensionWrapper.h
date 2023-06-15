//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFExtensionWrapper.h"

@class NSExtension, SFContentBlockerManager;

__attribute__((visibility("hidden")))
@interface SFContentBlockerExtensionWrapper : SFExtensionWrapper
{
    NSExtension *_extension;
    SFContentBlockerManager *_contentBlockerManager;
}

- (void).cxx_destruct;
- (Class)settingsPermissionClass;
- (_Bool)isEnabledInAllNamedProfiles;
- (_Bool)isEnabledInProfile:(id)arg1;
- (id)enabledNamedProfiles;
- (id)enabledProfiles;
- (void)setAllowedInPrivateBrowsing:(_Bool)arg1;
- (_Bool)allowedInPrivateBrowsing;
- (void)disable;
- (void)enableWithPresentingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canEnable;
- (_Bool)isEnabled;
- (_Bool)isContentBlocker;
- (id)extension;
- (id)shortName;
- (id)displayName;
- (id)containingAppDisplayName;
- (id)initWithExtension:(id)arg1 contentBlockerManager:(id)arg2;

@end

