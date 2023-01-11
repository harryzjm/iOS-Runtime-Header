//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PointerUIServices/NSCopying-Protocol.h>
#import <PointerUIServices/NSMutableCopying-Protocol.h>
#import <PointerUIServices/NSSecureCoding-Protocol.h>

@class NSValue, PSMatchMoveSource, PSPointerPortalSourceCollection, PSPointerShape;

@interface PSPointerHoverRegion : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _coordinateSpaceSourceLayerRenderID;
    struct CGRect _contentBounds;
    double _contentHoverInverseScale;
    NSValue *_contentSlipValue;
    PSMatchMoveSource *_contentMatchMoveSource;
    struct CGRect _hitTestBounds;
    PSPointerPortalSourceCollection *_pointerPortalSourceCollection;
    unsigned long long _pointerRecenteringAxes;
    PSPointerShape *_pointerShape;
    NSValue *_pointerSlipValue;
    double _pointerVisualIntensity;
    unsigned long long _preferredPointerMaterialLuminance;
    unsigned int _coordinateSpaceSourceContextID;
    long long _overlayEffectStyle;
    _Bool _shouldPointerUnderlayContent;
    _Bool _shouldPointerSuppressMirroring;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldPointerSuppressMirroring; // @synthesize shouldPointerSuppressMirroring=_shouldPointerSuppressMirroring;
@property(readonly, nonatomic) _Bool shouldPointerUnderlayContent; // @synthesize shouldPointerUnderlayContent=_shouldPointerUnderlayContent;
@property(readonly, nonatomic) double pointerVisualIntensity; // @synthesize pointerVisualIntensity=_pointerVisualIntensity;
@property(readonly, nonatomic) unsigned long long pointerRecenteringAxes; // @synthesize pointerRecenteringAxes=_pointerRecenteringAxes;
@property(readonly, copy, nonatomic) NSValue *pointerSlipValue; // @synthesize pointerSlipValue=_pointerSlipValue;
@property(readonly, copy, nonatomic) PSPointerShape *pointerShape; // @synthesize pointerShape=_pointerShape;
@property(readonly, nonatomic) unsigned long long preferredPointerMaterialLuminance; // @synthesize preferredPointerMaterialLuminance=_preferredPointerMaterialLuminance;
@property(readonly, nonatomic) long long overlayEffectStyle; // @synthesize overlayEffectStyle=_overlayEffectStyle;
@property(readonly, nonatomic) struct CGRect hitTestBounds; // @synthesize hitTestBounds=_hitTestBounds;
@property(readonly, copy, nonatomic) NSValue *contentSlipValue; // @synthesize contentSlipValue=_contentSlipValue;
@property(readonly, nonatomic) double contentHoverInverseScale; // @synthesize contentHoverInverseScale=_contentHoverInverseScale;
@property(readonly, nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(readonly, copy, nonatomic) PSMatchMoveSource *contentMatchMoveSource; // @synthesize contentMatchMoveSource=_contentMatchMoveSource;
@property(readonly, copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection; // @synthesize pointerPortalSourceCollection=_pointerPortalSourceCollection;
@property(readonly, nonatomic) unsigned int coordinateSpaceSourceContextID; // @synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID;
@property(readonly, nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID; // @synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID;
- (_Bool)isNumericDataValid;
@property(readonly, nonatomic, getter=isOverlayEffectVisible) _Bool overlayEffectVisible;
- (id)_copyWithClass:(Class)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
