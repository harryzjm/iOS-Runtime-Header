//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, UIColor;
@protocol HFIconDescriptor;

@interface HUQuickControlIconViewProfile
{
    NSString *_statusString;
    UIColor *_statusTextColor;
    NSString *_supplementaryString;
    NSObject<HFIconDescriptor> *_iconDescriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(retain, nonatomic) NSString *supplementaryString; // @synthesize supplementaryString=_supplementaryString;
@property(retain, nonatomic) UIColor *statusTextColor; // @synthesize statusTextColor=_statusTextColor;
@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
