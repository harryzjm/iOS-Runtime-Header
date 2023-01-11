//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor;

@interface AVTMaterial : NSObject
{
    struct UIColor *baseColor;
    NSDictionary *secondaryColors;
}

+ (id)materialWithColor:(struct UIColor *)arg1;
@property(retain) NSDictionary *secondaryColors; // @synthesize secondaryColors;
@property(retain) UIColor *baseColor; // @synthesize baseColor;
- (void).cxx_destruct;
- (void)applyToSceneKitMaterial:(id)arg1;
- (_Bool)_decode:(id)arg1;
- (void)_encode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
