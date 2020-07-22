//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSUUID;

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fElevationAscended;
    NSNumber *fElevationDescended;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *elevationDescended; // @synthesize elevationDescended=fElevationDescended;
@property(readonly, nonatomic) NSNumber *elevationAscended; // @synthesize elevationAscended=fElevationAscended;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=fEndDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=fStartDate;
@property(readonly, nonatomic) NSUUID *sourceId; // @synthesize sourceId=fSourceId;
@property(readonly, nonatomic) unsigned long long recordId; // @synthesize recordId=fRecordId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFilteredElevation:(const struct CLElevationChangeEntry *)arg1;
- (id)initWithSignificantElevation:(const struct CLSignificantElevation *)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6;

@end

