//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMStyle, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface PMBulletMapper
{
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
    int mFontSize;
}

+ (id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2;
- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3;
- (id)makeBulletWithListState:(id)arg1;
- (void)mapBulletColorWithState:(id)arg1;
- (id)bulletFontName;
- (int)bulletSize;

@end
