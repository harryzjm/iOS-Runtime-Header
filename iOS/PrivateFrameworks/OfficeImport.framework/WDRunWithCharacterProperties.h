//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDRunWithCharacterProperties
{
    WDCharacterProperties *mProperties;
}

@property(retain) WDCharacterProperties *properties; // @synthesize properties=mProperties;
- (void).cxx_destruct;
@property(readonly, getter=isHidden) _Bool hidden;
- (void)clearProperties;
- (id)initWithParagraph:(id)arg1;

@end
