//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/NSCopying-Protocol.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying>
{
    UIColor *_backgroundColor;
}

+ (id)tertiarySystemGroupedBackgroundColor;
+ (id)secondarySystemGroupedBackgroundColor;
+ (id)systemGroupedBackgroundColor;
+ (id)tertiarySystemBackgroundColor;
+ (id)secondarySystemBackgroundColor;
+ (id)systemBackgroundColor;
+ (id)tableViewAppearance;
+ (id)defaultAppearance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)_convertHexString:(id)arg1;
- (void)updateBackgroundColorWithJSString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
