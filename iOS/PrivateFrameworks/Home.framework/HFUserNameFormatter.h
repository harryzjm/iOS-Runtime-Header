//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class CNContactFormatter, HMHome;

@interface HFUserNameFormatter : NSFormatter
{
    unsigned long long _style;
    HMHome *_home;
    CNContactFormatter *_contactFormatter;
}

+ (long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

