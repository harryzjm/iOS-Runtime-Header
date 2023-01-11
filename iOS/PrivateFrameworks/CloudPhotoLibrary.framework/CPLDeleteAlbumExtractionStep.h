//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLDeleteAlbumExtractionStep
{
    unsigned long long _maximumCount;
}

@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (id)shortDescription;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;

@end

