//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGMeaningQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (double)localFactoryScore;
- (id)entityIdentifier;
- (id)additionalInfo;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (unsigned short)type;
- (id)initWithConfirmedMeaningLabel:(id)arg1 assetUUID:(id)arg2;
- (id)initWithMeaningLabel:(id)arg1 assetUUID:(id)arg2 localFactoryScore:(double)arg3;

@end
