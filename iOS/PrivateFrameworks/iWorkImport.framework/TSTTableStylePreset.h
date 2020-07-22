//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>

@class NSString, TSTTableStyleNetwork;

__attribute__((visibility("hidden")))
@interface TSTTableStylePreset <TSSPreset, TSSStyleClient, TSKModel>
{
    TSTTableStyleNetwork *_styleNetwork;
    unsigned long long _tempUpgradePresetID;
    _Bool _tableHasStrongOwnership;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) _Bool tableHasStrongOwnership; // @synthesize tableHasStrongOwnership=_tableHasStrongOwnership;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableStylePresetArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(readonly, nonatomic) unsigned long long presetID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

