//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SFKeyboardGeometry : NSObject
{
    struct CGSize _sizeWithoutBar;
    struct CGSize _sizeWithBar;
}

+ (id)keyboardGeometryForInterfaceOrientation:(long long)arg1;
+ (id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGSize sizeWithBar; // @synthesize sizeWithBar=_sizeWithBar;
@property(readonly, nonatomic) struct CGSize sizeWithoutBar; // @synthesize sizeWithoutBar=_sizeWithoutBar;
- (id)_initWithFallbackSizeForOrientation:(long long)arg1;
- (id)_initWithSizeWithoutBar:(struct CGSize)arg1 sizeWithBar:(struct CGSize)arg2;

@end
