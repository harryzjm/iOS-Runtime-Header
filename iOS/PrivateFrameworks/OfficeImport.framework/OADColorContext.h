//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADColorMap, OADColorScheme;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADColorContext : NSObject
{
    OADColorScheme *mScheme;
    OADColorMap *mMap;
    id <OADColorPalette> mPalette;
}

+ (id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <OADColorPalette> palette; // @synthesize palette=mPalette;
@property(readonly, nonatomic) OADColorMap *map; // @synthesize map=mMap;
@property(readonly, nonatomic) OADColorScheme *scheme; // @synthesize scheme=mScheme;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;

@end

