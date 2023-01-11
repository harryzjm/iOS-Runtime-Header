//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDMath
{
    int _justification;
    WDCharacterProperties *_properties;
    NSString *_xmlBlob;
}

@property(readonly, nonatomic) NSString *xmlBlob; // @synthesize xmlBlob=_xmlBlob;
@property(retain, nonatomic) WDCharacterProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) int justification; // @synthesize justification=_justification;
- (void).cxx_destruct;
- (id)description;
- (void)clearProperties;
- (int)runType;
- (id)initWithParagraph:(id)arg1 xmlBlob:(id)arg2;

@end
