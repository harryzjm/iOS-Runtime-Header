//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AirPlayKit/NSObject-Protocol.h>

@class NSArray, NSString, RWIProtocolCSSRuleId, RWIProtocolCSSStyleId;

@protocol RWIProtocolCSSDomainHandler <NSObject>

@optional
- (void)setLayoutContextTypeChangedModeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 mode:(long long)arg3;
- (void)forcePseudoStateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 forcedPseudoClasses:(NSArray *)arg4;
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)getSupportedCSSPropertiesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)addRuleWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolCSSRule *))arg2 styleSheetId:(NSString *)arg3 selector:(NSString *)arg4;
- (void)createStyleSheetWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 frameId:(NSString *)arg3;
- (void)setRuleSelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolCSSRule *))arg2 ruleId:(RWIProtocolCSSRuleId *)arg3 selector:(NSString *)arg4;
- (void)setStyleTextWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolCSSStyle *))arg2 styleId:(RWIProtocolCSSStyleId *)arg3 text:(NSString *)arg4;
- (void)setStyleSheetTextWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 styleSheetId:(NSString *)arg3 text:(NSString *)arg4;
- (void)getStyleSheetTextWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 styleSheetId:(NSString *)arg3;
- (void)getStyleSheetWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolCSSStyleSheetBody *))arg2 styleSheetId:(NSString *)arg3;
- (void)getAllStyleSheetsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)getFontDataForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolCSSFont *))arg2 nodeId:(int)arg3;
- (void)getComputedStyleForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(id *, id *))arg2 nodeId:(int)arg3;
- (void)getMatchedStylesForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(id *, id *, id *))arg2 nodeId:(int)arg3 includePseudo:(_Bool *)arg4 includeInherited:(_Bool *)arg5;
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
@end

