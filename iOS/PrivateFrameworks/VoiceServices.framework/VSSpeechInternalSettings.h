//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface VSSpeechInternalSettings : NSObject
{
    _Bool _internalBuild;
    _Bool _isInternalBuild;
    NSUserDefaults *_internalDefaults;
}

+ (id)standardInstance;
@property(retain, nonatomic) NSUserDefaults *internalDefaults; // @synthesize internalDefaults=_internalDefaults;
@property(nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(readonly, nonatomic) _Bool internalBuild; // @synthesize internalBuild=_internalBuild;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableLocalVoices;
@property(nonatomic) _Bool disableAssetCleaning;
@property(nonatomic) _Bool disableCache;
- (id)init;

@end

