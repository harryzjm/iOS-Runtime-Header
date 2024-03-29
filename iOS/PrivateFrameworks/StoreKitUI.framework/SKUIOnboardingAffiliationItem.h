//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationItem : NSObject
{
    UIColor *_fillColor;
    NSString *_identifier;
    NSString *_imageName;
    NSString *_imageTreatment;
    NSURL *_imageURL;
    NSString *_title;
    long long _userAffinityCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long userAffinityCount; // @synthesize userAffinityCount=_userAffinityCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

