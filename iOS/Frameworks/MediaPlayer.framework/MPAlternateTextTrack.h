//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLocale, NSString;

@interface MPAlternateTextTrack
{
    long long _type;
    NSString *_name;
    NSLocale *_locale;
    long long _tag;
}

+ (id)autoTrack;
+ (id)offTrack;
- (void).cxx_destruct;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (id)_displayNameForName:(id)arg1;
- (id)displayName;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSLocale *locale;
@property(readonly, nonatomic) _Bool isInBand;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3;

@end
