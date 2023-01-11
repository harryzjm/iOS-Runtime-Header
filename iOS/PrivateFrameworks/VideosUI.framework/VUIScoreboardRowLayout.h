//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIScoreboardRowLayout : NSObject
{
    int _backgroundBlendMode;
    int _separatorBlendMode;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
}

+ (id)_bottomLayoutForIdiom:(long long)arg1;
+ (id)_topRowLayoutForIdiom:(long long)arg1;
+ (int)_backgroundColorBlendMode;
+ (id)_backgroundColorForIdiom:(long long)arg1;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) int separatorBlendMode; // @synthesize separatorBlendMode=_separatorBlendMode;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int backgroundBlendMode; // @synthesize backgroundBlendMode=_backgroundBlendMode;
- (void).cxx_destruct;

@end

