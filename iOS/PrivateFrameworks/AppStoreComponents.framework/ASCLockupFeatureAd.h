//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCScreenshots, ASCTrailers, NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureAd : NSObject
{
    _Bool _isEditorsChoice;
    float _productRating;
    NSString *_productRatingBadge;
    NSString *_productDescription;
    ASCScreenshots *_screenshots;
    ASCTrailers *_trailers;
    NSString *_developerName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(readonly, copy, nonatomic) ASCTrailers *trailers; // @synthesize trailers=_trailers;
@property(readonly, copy, nonatomic) ASCScreenshots *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, copy, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(readonly, copy, nonatomic) NSString *productRatingBadge; // @synthesize productRatingBadge=_productRatingBadge;
@property(readonly, nonatomic) float productRating; // @synthesize productRating=_productRating;
@property(readonly, nonatomic) _Bool isEditorsChoice; // @synthesize isEditorsChoice=_isEditorsChoice;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEditorsChoice:(_Bool)arg1 productRating:(float)arg2 productRatingBadge:(id)arg3 productDescription:(id)arg4 screenshots:(id)arg5 trailers:(id)arg6 developerName:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

