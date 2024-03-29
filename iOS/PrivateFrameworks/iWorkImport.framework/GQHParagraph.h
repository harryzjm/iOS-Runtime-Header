//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHParagraph : NSObject
{
}

+ (int)handleInlineList:(id)arg1 state:(id)arg2;
+ (int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(struct __CFDictionary *)arg3 isMultiColumn:(_Bool)arg4;
+ (int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4 isMultiColumn:(_Bool)arg5;
+ (_Bool)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float *)arg2;
+ (id)getBulletStyle:(id)arg1 level:(int)arg2;
+ (void)mapBullet:(struct __CFDictionary *)arg1 state:(id)arg2;
+ (struct __CFDictionary *)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(struct __CFDictionary *)arg5 showBullet:(_Bool)arg6;
+ (_Bool)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4;
+ (int)handleBookmark:(id)arg1 state:(id)arg2;
+ (int)handleLink:(id)arg1 state:(id)arg2;

@end

