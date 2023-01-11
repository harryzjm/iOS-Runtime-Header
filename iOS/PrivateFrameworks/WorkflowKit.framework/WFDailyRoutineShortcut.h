//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WFDailyRoutineShortcutSetupFlow, WFImage;

@interface WFDailyRoutineShortcut : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    WFImage *_bannerImage;
    NSArray *_actionIcons;
    WFDailyRoutineShortcutSetupFlow *_setupFlow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *setupFlow; // @synthesize setupFlow=_setupFlow;
@property(readonly, copy, nonatomic) NSArray *actionIcons; // @synthesize actionIcons=_actionIcons;
@property(readonly, copy, nonatomic) WFImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 actionIcons:(id)arg4 setupFlow:(id)arg5;

@end
