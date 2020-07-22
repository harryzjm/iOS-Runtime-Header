//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, TSPDataMetadataMap;

__attribute__((visibility("hidden")))
@interface TSPPasteboardMetadata
{
    struct PasteboardMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
    _Bool _isCrossAppPaste;
    _Bool _isCrossDocumentPaste;
    NSHashTable *_dataReferences;
}

+ (id)appNameAndVersion;
+ (id)bundleIdentifier;
@property(readonly, nonatomic) NSHashTable *dataReferences; // @synthesize dataReferences=_dataReferences;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste; // @synthesize isCrossDocumentPaste=_isCrossDocumentPaste;
@property(readonly, nonatomic) _Bool isCrossAppPaste; // @synthesize isCrossAppPaste=_isCrossAppPaste;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (struct PasteboardMetadata *)message;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (id)initWithContext:(id)arg1 dataReferences:(id)arg2;
- (id)initWithContext:(id)arg1;

@end
