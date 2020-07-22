//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSUUID;

@interface CMNatalieData
{
    long long fRecordId;
    double fStartDate;
    long long fSession;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID *fSourceId;
}

+ (id)sessionName:(long long)arg1;
+ (id)maxNatalieEntries;
+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) long long recordId;
@property(readonly, nonatomic) long long session;
@property(readonly, nonatomic) NSNumber *basalNatalies;
@property(readonly, nonatomic) NSNumber *natalies;
@property(readonly, nonatomic) NSNumber *mets;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 session:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;

@end

