//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSAppLink, LSApplicationProxy, NSURL;

@interface _SFNavigationResult : NSObject
{
    LSApplicationProxy *_externalApplication;
    long long _externalApplicationCategory;
    long long _type;
    NSURL *_URL;
    LSAppLink *_appLink;
}

+ (id)resultOfLoadingRequest:(id)arg1 isMainFrame:(_Bool)arg2 disallowRedirectToExternalApps:(_Bool)arg3 preferredApplicationBundleIdentifier:(id)arg4;
+ (id)resultWithAppLink:(id)arg1;
+ (id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2;
+ (id)resultOfType:(long long)arg1 withURL:(id)arg2;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long externalApplicationCategory; // @synthesize externalApplicationCategory=_externalApplicationCategory;
@property(readonly, nonatomic) LSApplicationProxy *externalApplication; // @synthesize externalApplication=_externalApplication;
- (void).cxx_destruct;
- (_Bool)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3;
@property(readonly, nonatomic) _Bool isRedirectToAppStore;
@property(readonly, nonatomic) _Bool appliesOneTimeUserInitiatedActionPolicy;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4;

@end

