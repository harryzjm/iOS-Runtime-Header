//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDFill.h>

@class KNMotionBackgroundStyle, NSSet, NSString;

@interface KNMotionBackgroundFill : TSDFill
{
    KNMotionBackgroundStyle *_motionBackgroundStyle;
    TSDFill *_alternateFillForDowngrading;
}

+ (id)instanceWithArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TSDFill *alternateFillForDowngrading; // @synthesize alternateFillForDowngrading=_alternateFillForDowngrading;
@property(retain, nonatomic) KNMotionBackgroundStyle *motionBackgroundStyle; // @synthesize motionBackgroundStyle=_motionBackgroundStyle;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *referencedStyles;
- (long long)fillType;
- (id)referenceColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)updateAlternateFillForDowngrading;
- (id)makeAlternateFillForDowngrading;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)didInitFromSOS;
- (id)initWithMotionBackgroundStyle:(id)arg1;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

