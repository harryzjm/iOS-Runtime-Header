//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSDate, NSString, PSIDate;

@interface PSICollectionResult : NSObject <NSCopying>
{
    NSString *_uuid;
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_keyAssetUUID;
    unsigned long long _type;
    unsigned long long _numberOfAssets;
    NSDate *_sortDate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly, nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *keyAssetUUID; // @synthesize keyAssetUUID=_keyAssetUUID;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) PSIDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) PSIDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;

@end
