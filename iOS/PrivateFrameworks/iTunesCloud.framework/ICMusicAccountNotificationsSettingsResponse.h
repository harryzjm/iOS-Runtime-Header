//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject
{
    NSDictionary *_responseDictionary;
    _Bool _wasSuccessful;
}

+ (id)createResponseBodyWithSwitches:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wasSuccessful; // @synthesize wasSuccessful=_wasSuccessful;
@property(readonly, nonatomic) NSArray *settingsSwitches;
- (id)initWithResponseDictionary:(id)arg1;

@end
