//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SNProcessVoiceTriggerModelOutput : NSObject
{
    NSArray *_commandFilters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *commandFilters; // @synthesize commandFilters=_commandFilters;
- (id)processNewResults:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithCommands:(id)arg1;

@end
