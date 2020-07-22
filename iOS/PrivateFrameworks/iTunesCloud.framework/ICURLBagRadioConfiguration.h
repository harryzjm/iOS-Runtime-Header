//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject
{
    NSDictionary *_bagRadioDictionary;
}

- (void).cxx_destruct;
- (id)urlForBagRadioKey:(id)arg1;
- (_Bool)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;
@property(readonly, nonatomic) long long getTracksDPInfoKBSyncCount;
@property(readonly, copy, nonatomic) NSURL *baseURL;
- (id)initWithBagRadioDictionary:(id)arg1;

@end

