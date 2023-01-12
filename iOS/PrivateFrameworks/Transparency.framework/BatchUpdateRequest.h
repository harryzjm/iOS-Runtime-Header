//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableArray, NSString;

@interface BatchUpdateRequest
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *requestUuid; // @dynamic requestUuid;
@property(retain, nonatomic) NSMutableArray *updatesArray; // @dynamic updatesArray;
@property(readonly, nonatomic) unsigned long long updatesArray_Count; // @dynamic updatesArray_Count;
@property(nonatomic) int version; // @dynamic version;

@end
