//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class SUUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SUUIJSPhysicalCirclesTemplate : IKJSObject
{
    SUUIPhysicalCirclesTemplateDOMFeature *_feature;
}

- (void).cxx_destruct;
- (void)_performAnimationWithType:(long long)arg1 callback:(id)arg2;
- (void)performResetAnimation:(id)arg1;
- (void)performFinishAnimation:(id)arg1;
- (void)afterDOMUpdate:(id)arg1;
- (id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2;

@end

