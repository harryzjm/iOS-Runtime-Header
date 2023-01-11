//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBCalendarIconImageProviderDelegate-Protocol.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarApplicationIcon <SBCalendarIconImageProviderDelegate>
{
    SBCalendarIconImageProvider *_imageProvider;
}

+ (_Bool)canGenerateIconsInBackground;
+ (Class)downloadingIconClass;
@property(readonly, nonatomic) SBCalendarIconImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)localeChanged;
- (id)initWithApplication:(id)arg1;

@end
