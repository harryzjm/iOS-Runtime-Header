//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject
{
    _Bool _requiresMediaQueryEvaluation;
    _Bool _compositionDone;
    IKViewElementStyleComposer *_defaultStyleComposer;
    IKViewElementStyleComposer *_parentStyleComposer;
    IKStyleList *_styleList;
    IKViewElementStyle *_elementStyleOverrides;
    IKViewElementStyle *_composedSansDefaultStyle;
    IKViewElementStyle *_composedStyle;
}

+ (id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
@property(retain, nonatomic) IKViewElementStyle *composedStyle; // @synthesize composedStyle=_composedStyle;
@property(retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle; // @synthesize composedSansDefaultStyle=_composedSansDefaultStyle;
@property(readonly, nonatomic, getter=isCompositionDone) _Bool compositionDone; // @synthesize compositionDone=_compositionDone;
@property(readonly, retain, nonatomic) IKViewElementStyle *elementStyleOverrides; // @synthesize elementStyleOverrides=_elementStyleOverrides;
@property(readonly, retain, nonatomic) IKStyleList *styleList; // @synthesize styleList=_styleList;
@property(readonly, retain, nonatomic) IKViewElementStyleComposer *parentStyleComposer; // @synthesize parentStyleComposer=_parentStyleComposer;
@property(readonly, retain, nonatomic) IKViewElementStyleComposer *defaultStyleComposer; // @synthesize defaultStyleComposer=_defaultStyleComposer;
@property(readonly, nonatomic) _Bool requiresMediaQueryEvaluation; // @synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation;
- (void).cxx_destruct;
- (void)_composeWithMediaQueryEvaluator:(id)arg1;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1;
- (id)consolidatedDefaultStyleList;
- (void)setNeedsRecomposition;
- (id)composedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;

@end

