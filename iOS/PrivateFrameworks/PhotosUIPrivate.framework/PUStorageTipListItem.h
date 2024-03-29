//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUStorageTipListItem : NSObject
{
    NSString *_title;
    NSString *_systemImageName;
    long long _count;
    long long _totalSizeInBytes;
    unsigned long long _storageTipType;
    NSString *_cloudQuotaBytesUsedIdentifier;
}

+ (unsigned long long)storageTipTypeForCloudQuotaUsedBytesIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cloudQuotaBytesUsedIdentifier; // @synthesize cloudQuotaBytesUsedIdentifier=_cloudQuotaBytesUsedIdentifier;
@property(readonly, nonatomic) unsigned long long storageTipType; // @synthesize storageTipType=_storageTipType;
@property(readonly, nonatomic) long long totalSizeInBytes; // @synthesize totalSizeInBytes=_totalSizeInBytes;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStorageTipType:(unsigned long long)arg1 count:(long long)arg2 totalSizeInBytes:(long long)arg3;

@end

