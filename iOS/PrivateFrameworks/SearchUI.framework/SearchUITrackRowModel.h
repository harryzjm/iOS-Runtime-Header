//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFTrack, SearchUITrackLayoutManager;

@interface SearchUITrackRowModel
{
    SearchUITrackLayoutManager *_trackLayoutManager;
    SFTrack *_track;
}

@property(retain, nonatomic) SFTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) SearchUITrackLayoutManager *trackLayoutManager; // @synthesize trackLayoutManager=_trackLayoutManager;
- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 trackManager:(id)arg2 cardSection:(id)arg3 track:(id)arg4 queryId:(unsigned long long)arg5;

@end
