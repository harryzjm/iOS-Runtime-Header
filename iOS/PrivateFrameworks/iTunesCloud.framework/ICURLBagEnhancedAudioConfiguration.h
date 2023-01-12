//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface ICURLBagEnhancedAudioConfiguration : NSObject
{
    NSDictionary *_bagEnhancedAudioDictionary;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *bagEnhancedAudioDictionary; // @synthesize bagEnhancedAudioDictionary=_bagEnhancedAudioDictionary;
- (id)_urlForBagEnhancedAudioKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *prefetchSKDs;
@property(readonly, copy, nonatomic) NSURL *keyServerURL;
@property(readonly, copy, nonatomic) NSURL *certificateURL;
- (id)initWithBagEnhancedAudioDictionary:(id)arg1;

@end
