//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSSet, NSString;

@interface DDSAssetPolicy : NSObject <NSSecureCoding>
{
    _Bool _downloadOverCellular;
    _Bool _downloadWithoutPower;
    long long _preferredDownloadFrequency;
    NSSet *_notificationDownloadTriggers;
    NSString *_downloadCompletionNotification;
    NSDateComponents *_idleUsageEvictionPeriod;
}

+ (_Bool)supportsSecureCoding;
+ (id)assetPolicy;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod; // @synthesize idleUsageEvictionPeriod=_idleUsageEvictionPeriod;
@property(copy, nonatomic) NSString *downloadCompletionNotification; // @synthesize downloadCompletionNotification=_downloadCompletionNotification;
@property(copy, nonatomic) NSSet *notificationDownloadTriggers; // @synthesize notificationDownloadTriggers=_notificationDownloadTriggers;
@property(nonatomic) _Bool downloadWithoutPower; // @synthesize downloadWithoutPower=_downloadWithoutPower;
@property(nonatomic) _Bool downloadOverCellular; // @synthesize downloadOverCellular=_downloadOverCellular;
@property(nonatomic) long long preferredDownloadFrequency; // @synthesize preferredDownloadFrequency=_preferredDownloadFrequency;
- (unsigned long long)hash;
- (_Bool)isEqualToAssetPolicy:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
