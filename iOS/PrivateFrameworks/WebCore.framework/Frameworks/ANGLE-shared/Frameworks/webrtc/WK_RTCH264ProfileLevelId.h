//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCH264ProfileLevelId : NSObject
{
    unsigned long long _profile;
    unsigned long long _level;
    NSString *_hexString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hexString; // @synthesize hexString=_hexString;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long profile; // @synthesize profile=_profile;
- (id)initWithProfile:(unsigned long long)arg1 level:(unsigned long long)arg2;
- (id)initWithHexString:(id)arg1;

@end

