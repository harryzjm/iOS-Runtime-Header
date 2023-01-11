//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateInterval, PGGraphLocationNode;

@interface PGPastSupersetMemoryTitleGenerator
{
    PGGraphLocationNode *_supersetLocationNode;
    NSDateInterval *_supersetDateInterval;
}

@property(readonly) NSDateInterval *supersetDateInterval; // @synthesize supersetDateInterval=_supersetDateInterval;
@property(readonly) PGGraphLocationNode *supersetLocationNode; // @synthesize supersetLocationNode=_supersetLocationNode;
- (void).cxx_destruct;
- (id)_timeTitle;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3;

@end

