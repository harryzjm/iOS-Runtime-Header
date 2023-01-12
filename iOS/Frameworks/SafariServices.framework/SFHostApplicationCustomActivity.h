//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SFActivity.h"

@class SFCustomActivityProxy;

__attribute__((visibility("hidden")))
@interface SFHostApplicationCustomActivity : _SFActivity
{
    SFCustomActivityProxy *_activityProxy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SFCustomActivityProxy *activityProxy; // @synthesize activityProxy=_activityProxy;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithActivityProxy:(id)arg1;

@end

