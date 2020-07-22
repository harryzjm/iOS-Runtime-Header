//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CAGradientLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSString *type;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy) NSArray *locations;
@property(copy) NSArray *colors;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)_colorSpaceDidChange;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property(retain) id colorMap;

@end

