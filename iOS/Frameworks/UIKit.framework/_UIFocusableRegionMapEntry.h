//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UILegacyFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusableRegionMapEntry
{
    _Bool _isFocusGuide;
    _Bool _focusCandidate;
    id <_UILegacyFocusRegion> _focusableRegion;
}

@property(nonatomic, getter=isFocusCandidate) _Bool focusCandidate; // @synthesize focusCandidate=_focusCandidate;
@property(nonatomic) _Bool isFocusGuide; // @synthesize isFocusGuide=_isFocusGuide;
@property(nonatomic) __weak id <_UILegacyFocusRegion> focusableRegion; // @synthesize focusableRegion=_focusableRegion;
- (void).cxx_destruct;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 isFinal:(_Bool)arg3;
- (id)visualRepresentationColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

