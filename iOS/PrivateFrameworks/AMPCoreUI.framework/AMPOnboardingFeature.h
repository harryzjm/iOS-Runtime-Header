//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AMPOnboardingFeature : NSObject
{
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
}

@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3;

@end

