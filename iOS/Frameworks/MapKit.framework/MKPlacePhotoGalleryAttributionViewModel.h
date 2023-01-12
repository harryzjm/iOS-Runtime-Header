//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKPlacePhotoGalleryAttributionViewModel : NSObject
{
    NSString *_titleText;
    NSString *_subtitleText;
    long long _accessoryStyle;
}

+ (id)viewModelFromMapItem:(id)arg1 photo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long accessoryStyle; // @synthesize accessoryStyle=_accessoryStyle;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

@end
