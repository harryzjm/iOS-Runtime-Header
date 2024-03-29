//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}

- (void).cxx_destruct;
- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;
- (void)setTextEffectColors:(id)arg1;
- (id)textEffectColors;
- (void)setTextFillColors:(id)arg1;
- (id)textFillColors;
- (void)setTextLineColors:(id)arg1;
- (id)textLineColors;
- (void)setEffectColors:(id)arg1;
- (id)effectColors;
- (void)setLineColors:(id)arg1;
- (id)lineColors;
- (void)setFillColors:(id)arg1;
- (id)fillColors;

@end

