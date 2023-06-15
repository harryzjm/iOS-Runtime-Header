//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPActionSheetTemplate, CPAlertTemplate, CPGridTemplate, CPInformationTemplate, CPListTemplate, CPMapTemplate, CPNowPlayingTemplate, CPSearchTemplate, CPTabBarTemplate, CPTemplate, CPVoiceControlTemplate, NSNumber;
@protocol CPAlertDelegate, CPEntityClientTemplateDelegate, CPEntityProviding, CPGridTemplateClientDelegate, CPListClientTemplateDelegate, CPMapClientTemplateDelegate, CPNowPlayingClientTemplateDelegate, CPSearchClientTemplateDelegate, CPTabBarClientTemplateDelegate, CPTemplateDelegate, CPVoiceControlTemplateDelegate;

@protocol CPTemplateProviding <NSObject>
- (void)selectTabBarTemplateAtIndex:(long long)arg1;
- (void)updateTabBarTemplate:(CPTabBarTemplate *)arg1;
- (void)setTabBarTemplate:(CPTabBarTemplate *)arg1 withProxyDelegate:(id <CPTabBarClientTemplateDelegate>)arg2 reply:(void (^)(id <CPTabBarTemplateProviding>))arg3 animated:(NSNumber *)arg4;
- (void)pushTabBarTemplate:(CPTabBarTemplate *)arg1 animated:(NSNumber *)arg2;
- (void)presentVoiceTemplate:(CPVoiceControlTemplate *)arg1 withProxyDelegate:(id <CPVoiceControlTemplateDelegate>)arg2 animated:(NSNumber *)arg3 reply:(void (^)(id <CPVoiceTemplateProviding>))arg4;
- (void)pushEntityTemplate:(CPTemplate<CPEntityProviding> *)arg1 withProxyDelegate:(id <CPEntityClientTemplateDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPEntityUpdateProviding>))arg5;
- (void)pushInformationTemplate:(CPInformationTemplate *)arg1 withProxyDelegate:(id <CPTemplateDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPBaseTemplateProviding>))arg5;
- (void)clientRequestNowPlayingTemplateAnimated:(_Bool)arg1;
- (void)pushNowPlayingTemplate:(CPNowPlayingTemplate *)arg1 withProxyDelegate:(id <CPNowPlayingClientTemplateDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPNowPlayingTemplateProviding>))arg5;
- (void)pushSearchTemplate:(CPSearchTemplate *)arg1 withProxyDelegate:(id <CPSearchClientTemplateDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPSearchTemplateProviding>))arg5;
- (void)requestNavigationProviderForMapTemplate:(CPMapTemplate *)arg1 withReply:(void (^)(id <CPNavigationSessionProviding>))arg2;
- (void)pushMapTemplate:(CPMapTemplate *)arg1 withProxyDelegate:(id <CPMapClientTemplateDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPMapTemplateProviding>))arg5;
- (void)pushListTemplate:(CPListTemplate *)arg1 withProxyDelegate:(id <CPListClientTemplateDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPListTemplateProviding>))arg5;
- (void)pushGridTemplate:(CPGridTemplate *)arg1 withProxyDelegate:(id <CPGridTemplateClientDelegate>)arg2 animated:(NSNumber *)arg3 presentationStyle:(unsigned long long)arg4 reply:(void (^)(id <CPGridTemplateProviding>))arg5;
- (void)requestBannerProviderWithReply:(void (^)(id <CPBannerProviding>))arg1;
- (void)presentAlertTemplate:(CPAlertTemplate *)arg1 withProxyDelegate:(id <CPAlertDelegate>)arg2 animated:(NSNumber *)arg3 reply:(void (^)(void))arg4;
- (void)presentActionSheetTemplate:(CPActionSheetTemplate *)arg1 withProxyDelegate:(id <CPAlertDelegate>)arg2 animated:(NSNumber *)arg3 reply:(void (^)(void))arg4;
- (void)getPresentedTemplateWithReply:(void (^)(NSUUID *))arg1;
- (void)getTemplatesWithReply:(void (^)(NSArray *))arg1;
- (void)getTopTemplateWithReply:(void (^)(NSUUID *))arg1;
- (void)dismissTemplateAnimated:(NSNumber *)arg1 reply:(void (^)(void))arg2;
- (void)popTemplateAnimated:(NSNumber *)arg1 reply:(void (^)(_Bool))arg2;
- (void)popToRootTemplateAnimated:(NSNumber *)arg1 reply:(void (^)(_Bool))arg2;
- (void)popToTemplate:(CPTemplate *)arg1 animated:(NSNumber *)arg2 reply:(void (^)(_Bool))arg3;
- (void)containsTemplate:(CPTemplate *)arg1 reply:(void (^)(_Bool))arg2;
- (void)setHostPrefersDarkUserInterfaceStyle:(_Bool)arg1;
@end

