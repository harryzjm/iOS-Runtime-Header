//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontCollection
{
    NSMutableDictionary *_scriptToFontMap;
}

- (id)description;
- (_Bool)isEmpty;
- (_Bool)isEqualToFontCollection:(id)arg1;
- (id)scripts;
- (void)setFont:(id)arg1 forScript:(id)arg2;
- (id)fontForScript:(id)arg1;
- (void)dealloc;
- (id)init;

@end

