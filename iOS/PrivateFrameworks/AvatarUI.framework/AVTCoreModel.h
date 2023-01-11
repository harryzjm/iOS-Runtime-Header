//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTEditingModelColors, NSArray;

@interface AVTCoreModel : NSObject
{
    NSArray *_groups;
    AVTEditingModelColors *_colors;
    unsigned long long _platform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) AVTEditingModelColors *colors; // @synthesize colors=_colors;
@property(readonly, copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (id)description;
- (id)initWithGroups:(id)arg1 colors:(id)arg2 forPlatform:(unsigned long long)arg3;

@end
