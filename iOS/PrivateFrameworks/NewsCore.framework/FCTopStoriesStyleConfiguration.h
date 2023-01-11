//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCColor, NSDictionary, NSString, NTPBTopStoriesStyleConfig;

@interface FCTopStoriesStyleConfiguration : NSObject
{
    NTPBTopStoriesStyleConfig *_pbConfig;
    NSDictionary *_configDict;
    unsigned long long _storyType;
    NSString *_label;
    FCColor *_foreground_color;
    FCColor *_background_color;
    NSString *_stringType;
}

@property(readonly, nonatomic) NSString *stringType; // @synthesize stringType=_stringType;
@property(readonly, nonatomic) FCColor *background_color; // @synthesize background_color=_background_color;
@property(readonly, nonatomic) FCColor *foreground_color; // @synthesize foreground_color=_foreground_color;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;

@end

