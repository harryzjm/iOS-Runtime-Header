//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayoutPrototyping
{
    UIColor *_colorWash;
}

+ (void)registerPrototypingCallback:(CDUnknownBlockType)arg1;
+ (id)prototypingLayoutForBarType:(long long)arg1;
+ (_Bool)prototypingEnabled;
- (void).cxx_destruct;
- (void)describeInto:(id)arg1;
- (id)bg1ShadowColor;
- (_Bool)bg1HasShadow;
- (id)bg1Color;
- (id)bg1Effects;
- (_Bool)shouldUseExplicitGeometry;

@end
