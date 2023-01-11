//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolCSSDomainHandler-Protocol.h>

@class IKJSInspectorController, IKViewElementStyleFactory, NSMapTable, NSMutableDictionary, NSString, RWIProtocolCSSStyleSheetHeader;

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler>
{
    NSMutableDictionary *_inlineStyleMap;
    RWIProtocolCSSStyleSheetHeader *_templateStylesheetHeader;
    IKViewElementStyleFactory *_styleFactory;
    NSMapTable *_authorStylesheets;
    IKJSInspectorController *_controller;
}

+ (void)_evaluator:(id)arg1 updateMediaStylesWithActiveStyles:(id)arg2 inActiveStyles:(id)arg3 defaultStyles:(id)arg4 forRule:(id)arg5 withMatch:(id)arg6;
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_getMatchedStyleRulesForNode:(id)arg1;
- (id)_getMatchedTemplateStylesForNode:(id)arg1;
- (id)_updatedInlineStyleForNode:(int)arg1 withStyleString:(id)arg2;
- (id)_stylesheetBodyForStylesheetId:(id)arg1;
- (id)_styleNodeForStylesheetId:(id)arg1;
- (void)forcePseudoStateWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4;
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getSupportedCSSPropertiesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)addRuleWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3 selector:(id)arg4;
- (void)createStyleSheetWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3;
- (void)setRuleSelectorWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 ruleId:(id)arg3 selector:(id)arg4;
- (void)setStyleTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleId:(id)arg3 text:(id)arg4;
- (void)setStyleSheetTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3 text:(id)arg4;
- (void)getStyleSheetTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3;
- (void)getStyleSheetWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3;
- (void)getAllStyleSheetsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getComputedStyleForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getMatchedStylesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 includePseudo:(_Bool *)arg4 includeInherited:(_Bool *)arg5;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)resetStylesFromNode:(id)arg1;
- (void)mediaQueryResultDidChange;
- (void)updateStylesheets;
- (id)initWithInspectorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

