//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CALinearMaskLayerDelegate><CALayerDelegate;

@interface CALinearMaskLayer
{
}

+ (id)defaultValueForKey:(id)arg1;
@property struct CGColor *foregroundColor;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext *)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;

// Remaining properties
@property __weak id <CALinearMaskLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;

@end
