//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFActionItem, SFImage, SFPunchout;

@interface _APUIActionCardInfo : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_footnote;
    NSString *_bundleId;
    NSString *_appTitle;
    SFImage *_image;
    SFActionItem *_actionItem;
    SFPunchout *_actionPunchout;
}

@property(retain, nonatomic) SFPunchout *actionPunchout; // @synthesize actionPunchout=_actionPunchout;
@property(retain, nonatomic) SFActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

