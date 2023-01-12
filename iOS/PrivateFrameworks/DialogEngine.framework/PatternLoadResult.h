//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PatternLoadResult : NSObject
{
    NSString *_patternId;
    unsigned long long _patternType;
    NSDictionary *_settings;
    NSDictionary *_parameters;
    NSDictionary *_meta;
    NSDictionary *_groups;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSDictionary *meta; // @synthesize meta=_meta;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) unsigned long long patternType; // @synthesize patternType=_patternType;
@property(retain, nonatomic) NSString *patternId; // @synthesize patternId=_patternId;
- (id)getPrompts;

@end
