//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPATrimOperation
{
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
- (_Bool)isEqualToOperation:(id)arg1;
- (id)debugDescription;
- (id)identifier;
- (id)settingsDictionary;
- (id)trimRangeDictionary;
@property(readonly, nonatomic) CDStruct_e83c9415 trimRange;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1 endTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithTrimRange:(CDStruct_e83c9415)arg1;

@end

