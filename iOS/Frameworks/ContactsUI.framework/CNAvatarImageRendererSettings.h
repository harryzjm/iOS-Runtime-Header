//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRendererSettings : NSObject
{
    unsigned long long _style;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNUILikenessRendering> _likenessRenderer;
}

+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 schedulerProvider:(id)arg3;
+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)defaultSettings;
@property(readonly, nonatomic) id <CNUILikenessRendering> likenessRenderer; // @synthesize likenessRenderer=_likenessRenderer;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 schedulerProvider:(id)arg3;

@end

