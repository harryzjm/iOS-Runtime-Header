//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class NSString, UIImage, UIViewController;
@protocol MSCLAudioPickerSourceViewController;

@interface MSCLAudioPickerSource : NSObject <NSCopying>
{
    UIImage *_icon;
    NSString *_title;
    UIViewController<MSCLAudioPickerSourceViewController> *_viewController;
}

@property(retain, nonatomic) UIViewController<MSCLAudioPickerSourceViewController> *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

