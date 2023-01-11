//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface AVAudioUnitDSPGraph
{
}

@property(readonly, nonatomic) NSURL *auProcessingStripURL;
@property(readonly, nonatomic) NSURL *dspGraphURL;
- (_Bool)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadDSPGraphAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadAudioDSPManager;
- (id)init;

@end

