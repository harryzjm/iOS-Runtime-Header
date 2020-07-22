//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject
{
    NSMutableDictionary *_mediaKindDict;
    unsigned long long _totalStorage;
    unsigned long long _usedStorage;
}

@property(nonatomic) unsigned long long usedStorage; // @synthesize usedStorage=_usedStorage;
@property(nonatomic) unsigned long long totalStorage; // @synthesize totalStorage=_totalStorage;
- (void).cxx_destruct;
- (unsigned long long)storageInUseForMediaKind:(long long)arg1;
- (void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2;
- (id)init;

@end

