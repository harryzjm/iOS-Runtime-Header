//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WBSWebExtensionLocalization;

@interface WBSWebExtensionAPILocalizationObjC
{
    WBSWebExtensionLocalization *_localization;
}

+ (id)localizationWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(_Bool)arg3;
- (void).cxx_destruct;
- (void)getAcceptLanguagesWithCompletionHandler:(id)arg1;
- (id)getUILanguage;
- (id)getMessageWithName:(id)arg1 substitutions:(id)arg2;
@property(readonly, nonatomic) void *cpp;
- (void)initWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(_Bool)arg3;

@end
