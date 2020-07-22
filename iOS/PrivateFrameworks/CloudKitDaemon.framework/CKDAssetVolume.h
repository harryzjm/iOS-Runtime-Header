//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDAssetVolume : CKObject
{
    NSNumber *_volumeIndex;
    NSUUID *_volumeUUID;
}

+ (id)CKSQLiteClassName;
@property(retain, nonatomic) NSUUID *volumeUUID; // @synthesize volumeUUID=_volumeUUID;
@property(retain, nonatomic) NSNumber *volumeIndex; // @synthesize volumeIndex=_volumeIndex;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;

@end
