//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIIndexBarEntry.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry
{
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)entryImage;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (struct CGSize)_calculatedContentSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithImage:(id)arg1;

@end

