//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKDrawing;

@interface PKDrawingVersionedDocument
{
    _Bool _loadNonInkingStrokes;
    PKDrawing *_drawing;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
- (void).cxx_destruct;
@property(nonatomic) _Bool loadNonInkingStrokes; // @synthesize loadNonInkingStrokes=_loadNonInkingStrokes;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (_Bool)loadUnzippedData:(id)arg1;

@end
