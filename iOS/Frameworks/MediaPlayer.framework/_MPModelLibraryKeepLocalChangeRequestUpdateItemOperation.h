//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem;

__attribute__((visibility("hidden")))
@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation
{
    MPMediaItem *_mediaItem;
    long long _keepLocal;
}

- (void).cxx_destruct;
@property(nonatomic) long long keepLocal; // @synthesize keepLocal=_keepLocal;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)execute;

@end
