//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIImageView;

__attribute__((visibility("hidden")))
@interface SFCapsuleNavigationBarIconLayoutInfo : NSObject
{
    UIImageView *_imageView;
    NSArray *_constraintsToItemBefore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *constraintsToItemBefore; // @synthesize constraintsToItemBefore=_constraintsToItemBefore;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithImageView:(id)arg1;

@end

