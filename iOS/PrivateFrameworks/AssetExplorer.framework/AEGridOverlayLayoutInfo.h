//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AEGridOverlayLayoutInfo : NSObject
{
    struct CGSize __gradientImageSize;
}

@property(readonly, nonatomic) struct CGSize _gradientImageSize; // @synthesize _gradientImageSize=__gradientImageSize;
- (struct CGSize)tileSystemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithGradientImageSize:(struct CGSize)arg1;

@end

