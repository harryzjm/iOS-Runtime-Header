//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject
{
    ARUISpriteTexture *_defaultSpriteTexture;
    ARUISpriteTexture *_wheelchairSpriteTexture;
    ARUISpriteTexture *_sharingSpriteTexture;
    ARUISpriteTexture *_wheelchairSharingSpriteTexture;
}

+ (id)wheelchairSharingSpriteSheet;
+ (id)sharingSpriteSheet;
+ (id)wheelchairSpriteSheetForRingType:(long long)arg1;
+ (id)wheelchairSpriteSheet;
+ (id)spriteSheetForRingType:(long long)arg1;
+ (id)defaultSpriteSheet;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)wheelchairSharingSpriteTexture;
- (id)sharingSpriteTexture;
- (id)wheelchairSpriteTexture;
- (id)defaultSpriteTexture;

@end
