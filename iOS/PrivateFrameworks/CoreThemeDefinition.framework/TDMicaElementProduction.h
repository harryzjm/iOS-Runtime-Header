//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreThemeDefinition/TDElementAttributes-Protocol.h>

@class TDMicaAsset;

@interface TDMicaElementProduction <TDElementAttributes>
{
}

- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;
- (_Bool)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id *)arg3;
- (id)associatedFileURLWithDocument:(id)arg1;
- (id)relativePath;
- (id)baseKeySpec;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TDMicaAsset *asset; // @dynamic asset;

@end

