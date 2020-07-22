//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecFormattedText
{
    _Bool _emphasized;
    NSString *_text;
    WBSParsecImageRepresentation *_glyphRepresentation;
    NSNumber *_spaceBeforeInPoints;
    NSNumber *_spaceAfterInPoints;
}

+ (id)schema;
@property(readonly, nonatomic) NSNumber *spaceAfterInPoints; // @synthesize spaceAfterInPoints=_spaceAfterInPoints;
@property(readonly, nonatomic) NSNumber *spaceBeforeInPoints; // @synthesize spaceBeforeInPoints=_spaceBeforeInPoints;
@property(readonly, nonatomic) WBSParsecImageRepresentation *glyphRepresentation; // @synthesize glyphRepresentation=_glyphRepresentation;
@property(readonly, nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_emphasized;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)glyphWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
