//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKRepairZonePCSOperationInfo <NSSecureCoding>
{
    NSArray *_zoneIDs;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

