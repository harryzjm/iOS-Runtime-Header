//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface WGCalendarWidgetInfo
{
    NSDate *_date;
}

+ (_Bool)isCalendarExtension:(id)arg1;
@property(retain, nonatomic, setter=_setDate:) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange:(id)arg1;
- (void)_resetIcons;
- (id)_iconWithOutline;
- (id)_iconWithFormat:(int)arg1;
- (id)initWithExtension:(id)arg1;

@end
