//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeDSL/BMDSLSubscriber.h>

@class NSString;

@interface BMDSLTableUpsertSubscriber : BMDSLSubscriber
{
    NSString *_identifier;
    NSString *_tableName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)bpsSubscriber;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;

@end
