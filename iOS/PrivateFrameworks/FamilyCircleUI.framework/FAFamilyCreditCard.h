//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface FAFamilyCreditCard : NSObject
{
    NSString *_details;
    NSString *_footer;
    NSString *_providerDescription;
    NSString *_type;
    NSString *_usageNotice;
    NSURL *_imageURL;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *usageNotice; // @synthesize usageNotice=_usageNotice;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *providerDescription; // @synthesize providerDescription=_providerDescription;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *details; // @synthesize details=_details;

@end
