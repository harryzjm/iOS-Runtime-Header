//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSString;

@interface AVTSplashScreenConfiguration : NSObject
{
    AVPlayerItem *_primaryPlayerItem;
    AVPlayerItem *_secondaryPlayerItem;
    NSString *_titleString;
    NSString *_subTitleString;
    NSString *_buttonString;
}

@property(retain, nonatomic) NSString *buttonString; // @synthesize buttonString=_buttonString;
@property(retain, nonatomic) NSString *subTitleString; // @synthesize subTitleString=_subTitleString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) AVPlayerItem *secondaryPlayerItem; // @synthesize secondaryPlayerItem=_secondaryPlayerItem;
@property(retain, nonatomic) AVPlayerItem *primaryPlayerItem; // @synthesize primaryPlayerItem=_primaryPlayerItem;
- (void).cxx_destruct;

@end
