//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SSURLConnectionRequest;

@interface RadioFetchMetadataRequest
{
    SSURLConnectionRequest *_request;
    NSArray *_itemIDs;
    NSData *_timedMetadata;
    NSArray *_tracks;
}

@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(copy, nonatomic) NSData *timedMetadata; // @synthesize timedMetadata=_timedMetadata;
@property(copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void).cxx_destruct;
- (id)_itemIDsToRadioTracks;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;

@end
