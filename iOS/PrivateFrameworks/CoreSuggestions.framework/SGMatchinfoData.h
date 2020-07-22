//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface SGMatchinfoData : NSObject
{
    NSNumber *_entityId;
    NSNumber *_detailEntityId;
    NSData *_matchinfoData;
}

+ (id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;
@property(readonly, nonatomic) NSData *matchinfoData; // @synthesize matchinfoData=_matchinfoData;
@property(readonly, nonatomic) NSNumber *detailEntityId; // @synthesize detailEntityId=_detailEntityId;
@property(readonly, nonatomic) NSNumber *entityId; // @synthesize entityId=_entityId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToMatchinfoData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;
- (id)init;

@end

