//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject
{
    NSDictionary *_lookupDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long size;
@property(readonly, copy, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) double previewDuration;
@property(readonly, copy, nonatomic) NSString *flavor;
@property(readonly, nonatomic) double duration;
- (id)initWithLookupDictionary:(id)arg1;

@end

