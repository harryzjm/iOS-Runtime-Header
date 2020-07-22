//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CALinearMaskLayerDelegate><CALayerDelegate;

@interface CALinearMaskLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
@property struct CGColor *foregroundColor;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)_colorSpaceDidChange;
- (struct CGColorSpace *)_retainColorSpace;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property __weak id <CALinearMaskLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;

@end
