//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter
{
    unsigned long long _nameType;
    unsigned long long _style;
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long nameType; // @synthesize nameType=_nameType;
- (void).cxx_destruct;
- (id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2;
- (id)stringForPresenceEventBuilder:(id)arg1;
- (id)stringForPresenceEvent:(id)arg1;
- (id)initWithHome:(id)arg1;

@end
