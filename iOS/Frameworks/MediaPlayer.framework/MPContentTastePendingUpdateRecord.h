//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject
{
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    unsigned long long _tasteType;
    long long _type;
    NSUUID *_UUID;
}

@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long tasteType; // @synthesize tasteType=_tasteType;
@property(readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (void).cxx_destruct;
- (void)_initializeWithType:(long long)arg1 tasteType:(unsigned long long)arg2;
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(unsigned long long)arg2;
- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(unsigned long long)arg2;
- (id)init;

@end
