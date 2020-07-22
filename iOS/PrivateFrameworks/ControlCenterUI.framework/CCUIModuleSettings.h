//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/NSCopying-Protocol.h>

@interface CCUIModuleSettings : NSObject <NSCopying>
{
    struct CCUILayoutSize _portraitLayoutSize;
    struct CCUILayoutSize _landscapeLayoutSize;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CCUILayoutSize)layoutSizeForInterfaceOrientation:(long long)arg1;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize)arg1 landscapeLayoutSize:(struct CCUILayoutSize)arg2;

@end
