//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSSPreset-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>

@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset <TSSPreset, TSSStyleClient, TSKModel>
{
    unsigned long long mIndex;
    TSTTableStyleNetwork *mStyleNetwork;
}

- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)styleNetworkInStylesheet:(id)arg1;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
- (_Bool)isThemeEquivalent:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1 index:(unsigned long long)arg2;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(nonatomic) unsigned long long index;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
